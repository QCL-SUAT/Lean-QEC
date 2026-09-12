import Lean.Meta.Tactic.BVDecide.Main
import Lean.Meta.Tactic.BVDecide.Prover.Bitblast
import Lean.Meta.Tactic.BVDecide.Normalize
import Lean.Meta.Tactic.BVDecide.LRAT
import Lean.Elab.Tactic.BVDecide
import Std.Tactic.BVDecide
import Lean.Meta.Native

/-!
Timed `bv_decide`.

This mirrors the v4.34 frontend (`Lean.Meta.Tactic.BVDecide.Main` plus the tactic
elaborator in `Lean.Elab.Tactic.BVDecide`) and adds CSV timing instrumentation at each
phase boundary.  The v4.30 original was a copy of `Lean.Elab.Tactic.BVDecide.Frontend.*`;
v4.34 moved that tree to `Lean.Meta.Tactic.BVDecide.*` and re-based the frontend on the
`Sym` / `Grind` monads, so the bodies below follow the new `bvDecide'` / `bvUnsat` /
`lratBitblaster` verbatim rather than the old `MetaM` ones.

Logged per run: start, normalize, aig, cnf, solve, end.
-/

namespace Lean.Parser
namespace Tactic

syntax (name := bvDecidet) "bv_decidet" (str)? Lean.Parser.Tactic.optConfig : tactic

end Lean.Parser.Tactic

namespace Lean.Meta.Tactic.BVDecide

open Std.Sat
open Std.Tactic.BVDecide
open Std.Tactic.BVDecide.Reflect
open Lean.Meta
open Lean.Elab
open Lean.Elab.Tactic

/--
Turn an `LratCert` into a proof that `reflectionResult.expr` is UNSAT.

Copied from `Lean.Meta.Tactic.BVDecide.LratCert.toReflectionProof`, which v4.34 keeps
module-private, so a downstream tactic cannot reach it.  This is the price of injecting
timing into the frontend: the module forks a Lean internal.  If the toolchain ever makes
that declaration `public`, delete this copy and call the original.
-/
def timedToReflectionProof (cert : LratCert) (ctx : TacticContext)
    (reflectionResult : ReflectionResult) : MetaM Expr := do
  withTraceNode `Meta.Tactic.sat (fun _ => return "Compiling expr term") do
    mkAuxDecl ctx.exprDef reflectionResult.expr (mkConst ``BVLogicalExpr)

  withTraceNode `Meta.Tactic.sat (fun _ => return "Compiling proof certificate term") do
    mkAuxDecl ctx.certDef (toExpr cert) (mkConst ``String)

  let reflectedExpr := mkConst ctx.exprDef
  let certExpr := mkConst ctx.certDef
  let reflectionTerm := mkApp2 (mkConst ``verifyBVExpr) reflectedExpr certExpr

  withTraceNode `Meta.Tactic.sat (fun _ => return "Compiling and evaluating reflection proof term") do
    match (← nativeEqTrue `bv_decide reflectionTerm (axiomDeclRange? := (← getRef))) with
    | .notTrue =>
      throwError m!"Tactic `bv_decide` failed: The LRAT certificate could not be verified; \
        evaluating the following term returned `false`:{indentExpr reflectionTerm}"
    | .success auxProof =>
      return mkApp3 (mkConst ``unsat_of_verifyBVExpr_eq_true) reflectedExpr certExpr auxProof
where
  mkAuxDecl (name : Name) (value type : Expr) : CoreM Unit :=
    withOptions (fun opt => opt.set `compiler.extract_closed false) do
      addAndCompile <| .defnDecl {
        name := name,
        levelParams := [],
        type := type,
        value := value,
        hints := .abbrev,
        safety := .safe
      }

/-- Appends an entry to a local CSV file -/
def logToCSV (fileName : String) (duration : Nat) : IO Unit := do
  IO.FS.withFile fileName IO.FS.Mode.append fun handle => do
    handle.putStr s!"{duration},"
    handle.flush

/-- Terminates the current CSV row. -/
def putline (fileName : String) : IO Unit := do
  IO.FS.withFile fileName IO.FS.Mode.append fun handle => do
    handle.putStrLn ""
    handle.flush

/--
`lratBitblaster` with CSV timing of the bitblast / AIG-to-CNF / solver phases.
-/
def lratBitblastert (ctx : TacticContext) (csv : String) : UnsatProver LratCert :=
  fun (goal : MVarId) (reflectionResult : ReflectionResult)
      (atomsAssignment : Std.HashMap Nat (Nat × Expr × Bool)) => do
  withTraceNode `Meta.Tactic.bv (fun _ => return "Preparing LRAT reflection term") do
    let starttime ← IO.monoMsNow
    logToCSV csv starttime
    let bvExpr := reflectionResult.bvExpr
    let entry ←
      withTraceNode `Meta.Tactic.bv (fun _ => return "Bitblasting BVLogicalExpr to AIG") do
        -- lazyPure to prevent compiler lifting
        IO.lazyPure (fun _ => bvExpr.bitblast)
    let aigSize := entry.aig.decls.size
    trace[Meta.Tactic.bv] s!"AIG has {aigSize} nodes."
    let aigtime ← IO.monoMsNow
    logToCSV csv aigtime

    if ctx.config.graphviz then
      IO.FS.writeFile ("." / "aig.gv") <| AIG.toGraphviz entry

    let (cnf, map) ←
      withTraceNode `Meta.Tactic.sat (fun _ => return "Converting AIG to CNF") do
        -- lazyPure to prevent compiler lifting
        IO.lazyPure (fun _ =>
          let (entry, map) := entry.relabelNat'
          let cnf := AIG.toCNF entry
          (cnf, map)
        )
    let cnftime ← IO.monoMsNow
    logToCSV csv cnftime

    let res ←
      withTraceNode `Meta.Tactic.sat (fun _ => return "Obtaining external proof certificate") do
        runExternal
          cnf
          ctx.solver
          ctx.lratPath
          ctx.config.trimProofs
          ctx.config.timeout
          ctx.config.binaryProofs
          ctx.config.solverMode

    match res with
    | .ok cert =>
      trace[Meta.Tactic.sat] "SAT solver found a proof."
      let proof ← timedToReflectionProof cert ctx reflectionResult
      return .ok ⟨proof, cert⟩
    | .error assignment =>
      trace[Meta.Tactic.sat] "SAT solver found a counter example."
      let equations := reconstructCounterExample map assignment aigSize atomsAssignment
      return .error { goal, unusedHypotheses := reflectionResult.unusedHypotheses, equations }

/-- `bvUnsat` with CSV timing threaded into the bitblaster. -/
def bvUnsatt (g : MVarId) (hypotheses : Array Normalize.Hyp) (ctx : TacticContext)
    (csv : String) : Sym.SymM (Except CounterExample LratCert) :=
  M.run (hypotheses := hypotheses) do
    closeWithBVReflection g (lratBitblastert ctx csv)

/-- `bvDecide'` with CSV timing of the normalization phase. -/
def bvDecidet' (target : Normalize.Target) (ctx : TacticContext) (csv : String) :
    Grind.GrindM (Except CounterExample Result) := do
  Normalize.PreProcessM.run' ctx.preProcessContext target do
    let starttime ← IO.monoMsNow
    logToCSV csv starttime
    let solved ← Normalize.bvNormalize
    let normalizetime ← IO.monoMsNow
    logToCSV csv normalizetime
    if solved then
      putline csv
      return .ok ⟨none⟩

    match ← bvUnsatt (← Normalize.PreProcessM.getTargetMVarId)
        (← Normalize.PreProcessM.getHyps) ctx csv with
    | .ok lratCert =>
      let endTime ← IO.monoMsNow
      logToCSV csv endTime
      putline csv
      return .ok ⟨some lratCert⟩
    | .error counterExample => return .error counterExample

/-- `bvDecide` with CSV timing, reporting counterexamples as errors. -/
def bvDecidet (target : Normalize.Target) (ctx : TacticContext) (csv : String) :
    Grind.GrindM Result := do
  match ← bvDecidet' target ctx csv with
  | .ok result => return result
  | .error counterExample =>
    counterExample.goal.withContext do
      let error ← explainCounterExampleQuality counterExample
      throwError (← addMessageContextFull error)

@[tactic Lean.Parser.Tactic.bvDecidet]
def evalBvDecidet : Tactic := fun
  | `(tactic| bv_decidet $csv:str $cfg:optConfig) => do
    let cfg ← elabBVDecideConfig cfg
    let types ← elabBVDecideTypes none
    IO.FS.withTempFile fun _ lratFile => do
      let cfg ← TacticContext.new lratFile cfg types
      liftMetaFinishingTactic fun g => do
        let params ← Grind.mkDefaultParams {}
        discard <| Grind.GrindM.run (params := params) <|
          bvDecidet (.mvarIdTarget g) cfg csv.getString
  | _ => throwUnsupportedSyntax

end Lean.Meta.Tactic.BVDecide
