import LeanQEC.Stabilizer.BitVecSATToDist
import LeanQEC.ComputerAlgebra.BitVecCorrectness
-- `LeanQEC.timedbv` is a SAT-timing harness (it imports the Lean-internal module
-- `Lean.Elab.Tactic.BVDecide.Frontend.BVDecide.SatAtBVLogical`, which no longer
-- exists in Lean v4.34.0-rc1). It contains no mathematical content and is
-- therefore excluded from the library build; the file itself is kept in the
-- repository and can be re-enabled once the harness is ported to the current
-- BVDecide frontend layout.
