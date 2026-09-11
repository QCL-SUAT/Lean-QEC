import Lake
open System Lake DSL

package «LeanQEC»{
}

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git" @ "master-2026-08-21"

@[default_target]
lean_lib LeanQEC
