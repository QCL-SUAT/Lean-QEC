import Lake
open System Lake DSL

package «LeanQEC»{
}

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git" @ "master-2026-08-21"

@[default_target]
lean_lib LeanQEC

-- The upstream root module `LeanQEC.lean` imports only `LeanQEC.Basic`, so the
-- `Stabilizer/Examples/**` subtree -- the BB / Steane / Golay distance proofs,
-- the `Benchmarks/` harnesses -- plus `LeanQEC.Examples` and
-- `LeanQEC.Channels.Pauli_Channels` sit outside the default build closure and
-- `lake build` never compiles them.  Upstream's root file is byte-identical, so
-- that shape is upstream's own, not a port defect; but it does mean a green
-- `lake build` says nothing about those 27 modules.
--
-- This opt-in target is the coverage check:
--
--     lake build LeanQECExamples
--
-- Deliberately not a default target: several of these modules run real-time SAT
-- solving (`bv_decide` on 1452-5832 bit literals) and BB144 alone writes a
-- 3.3 GB olean, so pulling them into every build would make the default build
-- very expensive.
lean_lib LeanQECExamples where
  globs := #[.submodules `LeanQEC.Stabilizer.Examples,
             .one `LeanQEC.Examples]
