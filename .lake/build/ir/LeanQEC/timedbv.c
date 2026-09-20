// Lean compiler output
// Module: LeanQEC.timedbv
// Imports: public import Init public meta import Init public import Lean.Meta.Tactic.BVDecide.Main public import Lean.Meta.Tactic.BVDecide.Prover.Bitblast public import Lean.Meta.Tactic.BVDecide.Normalize public import Lean.Meta.Tactic.BVDecide.LRAT public import Lean.Elab.Tactic.BVDecide public import Std.Tactic.BVDecide public import Lean.Meta.Native
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_nativeEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_resolveDelayedMVarAssignments_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_checkUnusedActivations_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_bitblast(lean_object*);
lean_object* l_IO_lazyPure___redArg(lean_object*);
lean_object* l_Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(lean_object*);
lean_object* l_Std_Sat_AIG_toCNF(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_M_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_explainCounterExampleQuality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_BVDecide_bvDecide_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVTrace_evalBvTrace_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_BVTrace_evalBvTrace_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_optConfig;
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_Meta_Grind_GrindM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_TacticContext_new(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_elabBVDecideConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_elabBVDecideTypes(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_withTempFile___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__0_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__1_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bvDecidet"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__3 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__3_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value_aux_2),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__3_value),LEAN_SCALAR_PTR_LITERAL(71, 229, 84, 52, 62, 14, 254, 75)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__5 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__5_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__6 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__6_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "bv_decidet"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__7 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__7_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__7_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__8 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__8_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__9 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__9_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__9_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__10 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__10_value;
static const lean_string_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__11 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__11_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__11_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__12 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__12_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__12_value)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__13 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__13_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__10_value),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__13_value)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__14 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__14_value;
static const lean_ctor_object lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__6_value),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__8_value),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__14_value)}};
static const lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__15 = (const lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__15_value;
static lean_once_cell_t lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__16;
static lean_once_cell_t lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__17;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Parser_Tactic_bvDecidet;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "compiler"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__0_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "extract_closed"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__1_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 100, 103, 244, 164, 70, 204, 201)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__2_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(157, 223, 55, 216, 54, 195, 10, 164)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__2 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__2_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__3;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__4;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__5;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Compiling proof certificate term"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Compiling and evaluating reflection proof term"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Compiling expr term"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__0_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sat"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__1_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(174, 199, 37, 233, 64, 174, 173, 134)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2_value;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__3 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__3_value;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__4 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__4_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "BVLogicalExpr"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__7 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__7_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value_aux_2),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(170, 137, 185, 0, 130, 201, 136, 210)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__9;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__12 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__12_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__12_value),LEAN_SCALAR_PTR_LITERAL(33, 50, 202, 5, 86, 233, 189, 240)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unsat_of_verifyBVExpr_eq_true"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__14 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__14_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 119, .m_capacity = 119, .m_length = 118, .m_data = "Tactic `bv_decide` failed: The LRAT certificate could not be verified; evaluating the following term returned `false`:"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__15 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__15_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__17 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__17_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "verifyBVExpr"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__18 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__18_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_2),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__17_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value_aux_3),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__18_value),LEAN_SCALAR_PTR_LITERAL(98, 197, 94, 16, 136, 54, 174, 95)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__20;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_2),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__17_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value_aux_3),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__14_value),LEAN_SCALAR_PTR_LITERAL(39, 247, 82, 233, 7, 29, 35, 28)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__23 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__23_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__23_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__26 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__26_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__26_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__27 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__27_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__28;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__29 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__29_value;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV___closed__0_value;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline(lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__1(lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Obtaining external proof certificate"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Converting AIG to CNF"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__4(lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Bitblasting BVLogicalExpr to AIG"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Preparing LRAT reflection term"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__0_value)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__1_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__2;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "SAT solver found a counter example."};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__0_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "SAT solver found a proof."};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__2 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__2_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__4 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__4_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "aig.gv"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__5 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__5_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10___boxed(lean_object**);
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__0_value;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__1_value;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__2 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__2_value;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__3 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__3_value;
static const lean_closure_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__4 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__4_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__5 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__5_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__5_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6_value;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__7;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "AIG has "};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__8 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__8_value;
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " nodes."};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__9 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__9_value;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvUnsatt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvUnsatt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__0;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__1;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__2;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__3;
static lean_once_cell_t lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__4;
static const lean_array_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__5 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__5_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__6 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__6_value;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__1___boxed(lean_object**);
static const lean_string_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__0 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__0_value;
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value_aux_0),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value_aux_1),((lean_object*)&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value_aux_2),((lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1 = (const lean_object*)&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1_value;
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__16(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_32_ = l_Lean_Parser_Tactic_optConfig;
v___x_33_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__15));
v___x_34_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__6));
v___x_35_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set(v___x_35_, 2, v___x_32_);
return v___x_35_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__17(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = lean_obj_once(&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__16, &lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__16_once, _init_lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__16);
v___x_37_ = lean_unsigned_to_nat(1022u);
v___x_38_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4));
v___x_39_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
lean_ctor_set(v___x_39_, 2, v___x_36_);
return v___x_39_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Parser_Tactic_bvDecidet(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_obj_once(&lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__17, &lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__17_once, _init_lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__17);
return v___x_40_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__3(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_46_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__4(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__3, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__3_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__3);
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__5(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__4, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__4_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__4);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(lean_object* v_name_51_, lean_object* v_value_52_, lean_object* v_type_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_57_; lean_object* v_fileName_58_; lean_object* v_fileMap_59_; lean_object* v_options_60_; lean_object* v_currRecDepth_61_; lean_object* v_ref_62_; lean_object* v_currNamespace_63_; lean_object* v_openDecls_64_; lean_object* v_initHeartbeats_65_; lean_object* v_maxHeartbeats_66_; lean_object* v_quotContext_67_; lean_object* v_currMacroScope_68_; lean_object* v_cancelTk_x3f_69_; uint8_t v_suppressElabErrors_70_; lean_object* v_inheritedTraceOptions_71_; lean_object* v_env_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v_fileName_87_; lean_object* v_fileMap_88_; lean_object* v_currRecDepth_89_; lean_object* v_ref_90_; lean_object* v_currNamespace_91_; lean_object* v_openDecls_92_; lean_object* v_initHeartbeats_93_; lean_object* v_maxHeartbeats_94_; lean_object* v_quotContext_95_; lean_object* v_currMacroScope_96_; lean_object* v_cancelTk_x3f_97_; uint8_t v_suppressElabErrors_98_; lean_object* v_inheritedTraceOptions_99_; lean_object* v___y_100_; uint8_t v___y_106_; uint8_t v___x_127_; 
v___x_57_ = lean_st_ref_get(v_a_55_);
v_fileName_58_ = lean_ctor_get(v_a_54_, 0);
v_fileMap_59_ = lean_ctor_get(v_a_54_, 1);
v_options_60_ = lean_ctor_get(v_a_54_, 2);
v_currRecDepth_61_ = lean_ctor_get(v_a_54_, 3);
v_ref_62_ = lean_ctor_get(v_a_54_, 5);
v_currNamespace_63_ = lean_ctor_get(v_a_54_, 6);
v_openDecls_64_ = lean_ctor_get(v_a_54_, 7);
v_initHeartbeats_65_ = lean_ctor_get(v_a_54_, 8);
v_maxHeartbeats_66_ = lean_ctor_get(v_a_54_, 9);
v_quotContext_67_ = lean_ctor_get(v_a_54_, 10);
v_currMacroScope_68_ = lean_ctor_get(v_a_54_, 11);
v_cancelTk_x3f_69_ = lean_ctor_get(v_a_54_, 12);
v_suppressElabErrors_70_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_71_ = lean_ctor_get(v_a_54_, 13);
v_env_72_ = lean_ctor_get(v___x_57_, 0);
lean_inc_ref(v_env_72_);
lean_dec(v___x_57_);
v___x_73_ = lean_box(0);
lean_inc(v_name_51_);
v___x_74_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_74_, 0, v_name_51_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
lean_ctor_set(v___x_74_, 2, v_type_53_);
v___x_75_ = lean_box(1);
v___x_76_ = 1;
v___x_77_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_77_, 0, v_name_51_);
lean_ctor_set(v___x_77_, 1, v___x_73_);
v___x_78_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_78_, 0, v___x_74_);
lean_ctor_set(v___x_78_, 1, v_value_52_);
lean_ctor_set(v___x_78_, 2, v___x_75_);
lean_ctor_set(v___x_78_, 3, v___x_77_);
lean_ctor_set_uint8(v___x_78_, sizeof(void*)*4, v___x_76_);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
v___x_80_ = 1;
v___x_81_ = 0;
v___x_82_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__2));
lean_inc_ref(v_options_60_);
v___x_83_ = l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_options_60_, v___x_82_, v___x_81_);
v___x_84_ = l_Lean_diagnostics;
v___x_85_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___x_83_, v___x_84_);
v___x_127_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_72_);
lean_dec_ref(v_env_72_);
if (v___x_127_ == 0)
{
if (v___x_85_ == 0)
{
v_fileName_87_ = v_fileName_58_;
v_fileMap_88_ = v_fileMap_59_;
v_currRecDepth_89_ = v_currRecDepth_61_;
v_ref_90_ = v_ref_62_;
v_currNamespace_91_ = v_currNamespace_63_;
v_openDecls_92_ = v_openDecls_64_;
v_initHeartbeats_93_ = v_initHeartbeats_65_;
v_maxHeartbeats_94_ = v_maxHeartbeats_66_;
v_quotContext_95_ = v_quotContext_67_;
v_currMacroScope_96_ = v_currMacroScope_68_;
v_cancelTk_x3f_97_ = v_cancelTk_x3f_69_;
v_suppressElabErrors_98_ = v_suppressElabErrors_70_;
v_inheritedTraceOptions_99_ = v_inheritedTraceOptions_71_;
v___y_100_ = v_a_55_;
goto v___jp_86_;
}
else
{
v___y_106_ = v___x_127_;
goto v___jp_105_;
}
}
else
{
v___y_106_ = v___x_85_;
goto v___jp_105_;
}
v___jp_86_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_101_ = l_Lean_maxRecDepth;
v___x_102_ = l_Lean_Option_get___at___00Lean_Meta_Grind_checkUnusedActivations_spec__0(v___x_83_, v___x_101_);
lean_inc_ref(v_inheritedTraceOptions_99_);
lean_inc(v_cancelTk_x3f_97_);
lean_inc(v_currMacroScope_96_);
lean_inc(v_quotContext_95_);
lean_inc(v_maxHeartbeats_94_);
lean_inc(v_initHeartbeats_93_);
lean_inc(v_openDecls_92_);
lean_inc(v_currNamespace_91_);
lean_inc(v_ref_90_);
lean_inc(v_currRecDepth_89_);
lean_inc_ref(v_fileMap_88_);
lean_inc_ref(v_fileName_87_);
v___x_103_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_103_, 0, v_fileName_87_);
lean_ctor_set(v___x_103_, 1, v_fileMap_88_);
lean_ctor_set(v___x_103_, 2, v___x_83_);
lean_ctor_set(v___x_103_, 3, v_currRecDepth_89_);
lean_ctor_set(v___x_103_, 4, v___x_102_);
lean_ctor_set(v___x_103_, 5, v_ref_90_);
lean_ctor_set(v___x_103_, 6, v_currNamespace_91_);
lean_ctor_set(v___x_103_, 7, v_openDecls_92_);
lean_ctor_set(v___x_103_, 8, v_initHeartbeats_93_);
lean_ctor_set(v___x_103_, 9, v_maxHeartbeats_94_);
lean_ctor_set(v___x_103_, 10, v_quotContext_95_);
lean_ctor_set(v___x_103_, 11, v_currMacroScope_96_);
lean_ctor_set(v___x_103_, 12, v_cancelTk_x3f_97_);
lean_ctor_set(v___x_103_, 13, v_inheritedTraceOptions_99_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*14, v___x_85_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*14 + 1, v_suppressElabErrors_98_);
v___x_104_ = l_Lean_addAndCompile(v___x_79_, v___x_80_, v___x_81_, v___x_103_, v___y_100_);
lean_dec_ref_known(v___x_103_, 14);
return v___x_104_;
}
v___jp_105_:
{
if (v___y_106_ == 0)
{
lean_object* v___x_107_; lean_object* v_env_108_; lean_object* v_nextMacroScope_109_; lean_object* v_ngen_110_; lean_object* v_auxDeclNGen_111_; lean_object* v_traceState_112_; lean_object* v_messages_113_; lean_object* v_infoState_114_; lean_object* v_snapshotTasks_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_125_; 
v___x_107_ = lean_st_ref_take(v_a_55_);
v_env_108_ = lean_ctor_get(v___x_107_, 0);
v_nextMacroScope_109_ = lean_ctor_get(v___x_107_, 1);
v_ngen_110_ = lean_ctor_get(v___x_107_, 2);
v_auxDeclNGen_111_ = lean_ctor_get(v___x_107_, 3);
v_traceState_112_ = lean_ctor_get(v___x_107_, 4);
v_messages_113_ = lean_ctor_get(v___x_107_, 6);
v_infoState_114_ = lean_ctor_get(v___x_107_, 7);
v_snapshotTasks_115_ = lean_ctor_get(v___x_107_, 8);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_125_ == 0)
{
lean_object* v_unused_126_; 
v_unused_126_ = lean_ctor_get(v___x_107_, 5);
lean_dec(v_unused_126_);
v___x_117_ = v___x_107_;
v_isShared_118_ = v_isSharedCheck_125_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_snapshotTasks_115_);
lean_inc(v_infoState_114_);
lean_inc(v_messages_113_);
lean_inc(v_traceState_112_);
lean_inc(v_auxDeclNGen_111_);
lean_inc(v_ngen_110_);
lean_inc(v_nextMacroScope_109_);
lean_inc(v_env_108_);
lean_dec(v___x_107_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_125_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = l_Lean_Kernel_enableDiag(v_env_108_, v___x_85_);
v___x_120_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__5, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__5_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___closed__5);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 5, v___x_120_);
lean_ctor_set(v___x_117_, 0, v___x_119_);
v___x_122_ = v___x_117_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v_nextMacroScope_109_);
lean_ctor_set(v_reuseFailAlloc_124_, 2, v_ngen_110_);
lean_ctor_set(v_reuseFailAlloc_124_, 3, v_auxDeclNGen_111_);
lean_ctor_set(v_reuseFailAlloc_124_, 4, v_traceState_112_);
lean_ctor_set(v_reuseFailAlloc_124_, 5, v___x_120_);
lean_ctor_set(v_reuseFailAlloc_124_, 6, v_messages_113_);
lean_ctor_set(v_reuseFailAlloc_124_, 7, v_infoState_114_);
lean_ctor_set(v_reuseFailAlloc_124_, 8, v_snapshotTasks_115_);
v___x_122_ = v_reuseFailAlloc_124_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; 
v___x_123_ = lean_st_ref_set(v_a_55_, v___x_122_);
v_fileName_87_ = v_fileName_58_;
v_fileMap_88_ = v_fileMap_59_;
v_currRecDepth_89_ = v_currRecDepth_61_;
v_ref_90_ = v_ref_62_;
v_currNamespace_91_ = v_currNamespace_63_;
v_openDecls_92_ = v_openDecls_64_;
v_initHeartbeats_93_ = v_initHeartbeats_65_;
v_maxHeartbeats_94_ = v_maxHeartbeats_66_;
v_quotContext_95_ = v_quotContext_67_;
v_currMacroScope_96_ = v_currMacroScope_68_;
v_cancelTk_x3f_97_ = v_cancelTk_x3f_69_;
v_suppressElabErrors_98_ = v_suppressElabErrors_70_;
v_inheritedTraceOptions_99_ = v_inheritedTraceOptions_71_;
v___y_100_ = v_a_55_;
goto v___jp_86_;
}
}
}
else
{
v_fileName_87_ = v_fileName_58_;
v_fileMap_88_ = v_fileMap_59_;
v_currRecDepth_89_ = v_currRecDepth_61_;
v_ref_90_ = v_ref_62_;
v_currNamespace_91_ = v_currNamespace_63_;
v_openDecls_92_ = v_openDecls_64_;
v_initHeartbeats_93_ = v_initHeartbeats_65_;
v_maxHeartbeats_94_ = v_maxHeartbeats_66_;
v_quotContext_95_ = v_quotContext_67_;
v_currMacroScope_96_ = v_currMacroScope_68_;
v_cancelTk_x3f_97_ = v_cancelTk_x3f_69_;
v_suppressElabErrors_98_ = v_suppressElabErrors_70_;
v_inheritedTraceOptions_99_ = v_inheritedTraceOptions_71_;
v___y_100_ = v_a_55_;
goto v___jp_86_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl___boxed(lean_object* v_name_128_, lean_object* v_value_129_, lean_object* v_type_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_name_128_, v_value_129_, v_type_130_, v_a_131_, v_a_132_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
return v_res_134_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__2(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__1));
v___x_139_ = l_Lean_MessageData_ofFormat(v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0(lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___closed__2);
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0___boxed(lean_object* v_x_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__0(v_x_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec_ref(v_x_148_);
return v_res_154_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__2(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__1));
v___x_159_ = l_Lean_MessageData_ofFormat(v___x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1(lean_object* v_x_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___closed__2);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1___boxed(lean_object* v_x_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__1(v_x_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec_ref(v_x_168_);
return v_res_174_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__2(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__1));
v___x_179_ = l_Lean_MessageData_ofFormat(v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2(lean_object* v_x_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___closed__2);
v___x_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2___boxed(lean_object* v_x_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___lam__2(v_x_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec_ref(v_x_188_);
return v_res_194_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__9(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_box(0);
v___x_212_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__8));
v___x_213_ = l_Lean_Expr_const___override(v___x_212_, v___x_211_);
return v___x_213_;
}
}
static double _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11(void){
_start:
{
lean_object* v___x_215_; double v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(1000000000u);
v___x_216_ = lean_float_of_nat(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__15));
v___x_223_ = l_Lean_stringToMessageData(v___x_222_);
return v___x_223_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__20(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_box(0);
v___x_233_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__19));
v___x_234_ = l_Lean_Expr_const___override(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_box(0);
v___x_242_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__21));
v___x_243_ = l_Lean_Expr_const___override(v___x_242_, v___x_241_);
return v___x_243_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2));
v___x_248_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
v___x_249_ = l_Lean_Name_append(v___x_248_, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__28(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = lean_box(0);
v___x_254_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__27));
v___x_255_ = l_Lean_Expr_const___override(v___x_254_, v___x_253_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(lean_object* v_cert_257_, lean_object* v_ctx_258_, lean_object* v_reflectionResult_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_options_265_; lean_object* v_exprDef_266_; lean_object* v_certDef_267_; lean_object* v_expr_268_; lean_object* v_ref_269_; lean_object* v_inheritedTraceOptions_270_; uint8_t v_hasTrace_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; uint8_t v___x_280_; lean_object* v___x_281_; lean_object* v___y_283_; lean_object* v___y_284_; lean_object* v___y_285_; uint8_t v___y_286_; lean_object* v_a_287_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; uint8_t v___y_303_; lean_object* v_a_304_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; uint8_t v___y_310_; lean_object* v_a_311_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; uint8_t v___y_317_; lean_object* v_a_318_; lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; uint8_t v___y_331_; lean_object* v_a_332_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; uint8_t v___y_338_; lean_object* v_a_339_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; uint8_t v___y_345_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_394_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; uint8_t v___y_468_; lean_object* v_a_469_; lean_object* v___y_482_; lean_object* v___y_483_; uint8_t v___y_484_; lean_object* v___y_485_; lean_object* v_a_486_; lean_object* v___y_496_; lean_object* v___y_497_; uint8_t v___y_498_; lean_object* v___y_499_; lean_object* v___y_541_; 
v_options_265_ = lean_ctor_get(v_a_262_, 2);
v_exprDef_266_ = lean_ctor_get(v_ctx_258_, 0);
lean_inc(v_exprDef_266_);
v_certDef_267_ = lean_ctor_get(v_ctx_258_, 1);
lean_inc(v_certDef_267_);
lean_dec_ref(v_ctx_258_);
v_expr_268_ = lean_ctor_get(v_reflectionResult_259_, 3);
lean_inc_ref(v_expr_268_);
lean_dec_ref(v_reflectionResult_259_);
v_ref_269_ = lean_ctor_get(v_a_262_, 5);
v_inheritedTraceOptions_270_ = lean_ctor_get(v_a_262_, 13);
v_hasTrace_271_ = lean_ctor_get_uint8(v_options_265_, sizeof(void*)*1);
v___x_272_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2));
v___x_273_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2));
v___f_274_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__3));
v___f_275_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__4));
v___x_276_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__5));
v___x_277_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__6));
v___x_278_ = lean_box(0);
v___x_279_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__9, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__9_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__9);
v___x_280_ = 1;
v___x_281_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10));
if (v_hasTrace_271_ == 0)
{
lean_object* v___x_558_; 
lean_inc(v_exprDef_266_);
v___x_558_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_exprDef_266_, v_expr_268_, v___x_279_, v_a_262_, v_a_263_);
v___y_541_ = v___x_558_;
goto v___jp_540_;
}
else
{
lean_object* v___f_559_; lean_object* v___x_560_; uint8_t v___x_561_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v_a_565_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v_a_580_; 
v___f_559_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__29));
v___x_560_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25);
v___x_561_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_270_, v_options_265_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_630_ = l_Lean_trace_profiler;
v___x_631_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_265_, v___x_630_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; 
lean_inc(v_exprDef_266_);
v___x_632_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_exprDef_266_, v_expr_268_, v___x_279_, v_a_262_, v_a_263_);
v___y_541_ = v___x_632_;
goto v___jp_540_;
}
else
{
goto v___jp_589_;
}
}
else
{
goto v___jp_589_;
}
v___jp_562_:
{
lean_object* v___x_566_; double v___x_567_; double v___x_568_; double v___x_569_; double v___x_570_; double v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_566_ = lean_io_mono_nanos_now();
v___x_567_ = lean_float_of_nat(v___y_564_);
v___x_568_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_569_ = lean_float_div(v___x_567_, v___x_568_);
v___x_570_ = lean_float_of_nat(v___x_566_);
v___x_571_ = lean_float_div(v___x_570_, v___x_568_);
v___x_572_ = lean_box_float(v___x_569_);
v___x_573_ = lean_box_float(v___x_571_);
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v_a_565_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___x_273_, v___x_280_, v___x_281_, v_options_265_, v___x_561_, v___y_563_, v___f_559_, v___x_575_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
v___y_541_ = v___x_576_;
goto v___jp_540_;
}
v___jp_577_:
{
lean_object* v___x_581_; double v___x_582_; double v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_581_ = lean_io_get_num_heartbeats();
v___x_582_ = lean_float_of_nat(v___y_579_);
v___x_583_ = lean_float_of_nat(v___x_581_);
v___x_584_ = lean_box_float(v___x_582_);
v___x_585_ = lean_box_float(v___x_583_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_a_580_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___x_273_, v___x_280_, v___x_281_, v_options_265_, v___x_561_, v___y_578_, v___f_559_, v___x_587_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
v___y_541_ = v___x_588_;
goto v___jp_540_;
}
v___jp_589_:
{
lean_object* v___x_590_; lean_object* v_a_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_590_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_263_);
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref(v___x_590_);
v___x_592_ = l_Lean_trace_profiler_useHeartbeats;
v___x_593_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_265_, v___x_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_io_mono_nanos_now();
lean_inc(v_exprDef_266_);
v___x_595_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_exprDef_266_, v_expr_268_, v___x_279_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
lean_ctor_set_tag(v___x_598_, 1);
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
v___y_563_ = v_a_591_;
v___y_564_ = v___x_594_;
v_a_565_ = v___x_601_;
goto v___jp_562_;
}
}
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
v_a_604_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_595_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_595_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set_tag(v___x_606_, 0);
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
v___y_563_ = v_a_591_;
v___y_564_ = v___x_594_;
v_a_565_ = v___x_609_;
goto v___jp_562_;
}
}
}
}
else
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_io_get_num_heartbeats();
lean_inc(v_exprDef_266_);
v___x_613_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_exprDef_266_, v_expr_268_, v___x_279_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set_tag(v___x_616_, 1);
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
v___y_578_ = v_a_591_;
v___y_579_ = v___x_612_;
v_a_580_ = v___x_619_;
goto v___jp_577_;
}
}
}
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
v_a_622_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___x_613_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_613_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
lean_ctor_set_tag(v___x_624_, 0);
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
v___y_578_ = v_a_591_;
v___y_579_ = v___x_612_;
v_a_580_ = v___x_627_;
goto v___jp_577_;
}
}
}
}
}
}
v___jp_282_:
{
lean_object* v___x_288_; double v___x_289_; double v___x_290_; double v___x_291_; double v___x_292_; double v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_288_ = lean_io_mono_nanos_now();
v___x_289_ = lean_float_of_nat(v___y_284_);
v___x_290_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_291_ = lean_float_div(v___x_289_, v___x_290_);
v___x_292_ = lean_float_of_nat(v___x_288_);
v___x_293_ = lean_float_div(v___x_292_, v___x_290_);
v___x_294_ = lean_box_float(v___x_291_);
v___x_295_ = lean_box_float(v___x_293_);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v_a_287_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___x_273_, v___x_280_, v___x_281_, v___y_283_, v___y_286_, v___y_285_, v___f_275_, v___x_297_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
return v___x_298_;
}
v___jp_299_:
{
lean_object* v___x_305_; 
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v_a_304_);
v___y_283_ = v___y_300_;
v___y_284_ = v___y_301_;
v___y_285_ = v___y_302_;
v___y_286_ = v___y_303_;
v_a_287_ = v___x_305_;
goto v___jp_282_;
}
v___jp_306_:
{
lean_object* v___x_312_; 
v___x_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_312_, 0, v_a_311_);
v___y_283_ = v___y_307_;
v___y_284_ = v___y_308_;
v___y_285_ = v___y_309_;
v___y_286_ = v___y_310_;
v_a_287_ = v___x_312_;
goto v___jp_282_;
}
v___jp_313_:
{
lean_object* v___x_319_; double v___x_320_; double v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_319_ = lean_io_get_num_heartbeats();
v___x_320_ = lean_float_of_nat(v___y_316_);
v___x_321_ = lean_float_of_nat(v___x_319_);
v___x_322_ = lean_box_float(v___x_320_);
v___x_323_ = lean_box_float(v___x_321_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_322_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v_a_318_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___x_273_, v___x_280_, v___x_281_, v___y_314_, v___y_317_, v___y_315_, v___f_275_, v___x_325_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
return v___x_326_;
}
v___jp_327_:
{
lean_object* v___x_333_; 
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v_a_332_);
v___y_314_ = v___y_328_;
v___y_315_ = v___y_329_;
v___y_316_ = v___y_330_;
v___y_317_ = v___y_331_;
v_a_318_ = v___x_333_;
goto v___jp_313_;
}
v___jp_334_:
{
lean_object* v___x_340_; 
v___x_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_340_, 0, v_a_339_);
v___y_314_ = v___y_335_;
v___y_315_ = v___y_336_;
v___y_316_ = v___y_337_;
v___y_317_ = v___y_338_;
v_a_318_ = v___x_340_;
goto v___jp_313_;
}
v___jp_341_:
{
lean_object* v___x_349_; lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_392_; 
v___x_349_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_263_);
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_392_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_392_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_392_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = l_Lean_trace_profiler_useHeartbeats;
v___x_355_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_342_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_356_ = lean_io_mono_nanos_now();
v___x_357_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13));
lean_inc(v___y_344_);
if (v_isShared_353_ == 0)
{
lean_ctor_set_tag(v___x_352_, 1);
lean_ctor_set(v___x_352_, 0, v___y_344_);
v___x_359_ = v___x_352_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___y_344_);
v___x_359_ = v_reuseFailAlloc_373_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; 
lean_inc_ref(v___y_346_);
v___x_360_ = l_Lean_Meta_nativeEqTrue(v___x_357_, v___y_346_, v___x_359_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
lean_dec_ref(v___x_359_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref_known(v___x_360_, 1);
if (lean_obj_tag(v_a_361_) == 0)
{
lean_object* v_prf_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___y_346_);
v_prf_362_ = lean_ctor_get(v_a_361_, 0);
lean_inc_ref(v_prf_362_);
lean_dec_ref_known(v_a_361_, 1);
v___x_363_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__14));
lean_inc_ref(v___y_343_);
v___x_364_ = l_Lean_Name_mkStr5(v___x_276_, v___x_272_, v___x_277_, v___y_343_, v___x_363_);
v___x_365_ = l_Lean_Expr_const___override(v___x_364_, v___x_278_);
v___x_366_ = l_Lean_mkApp3(v___x_365_, v___y_347_, v___y_348_, v_prf_362_);
v___y_307_ = v___y_342_;
v___y_308_ = v___x_356_;
v___y_309_ = v_a_350_;
v___y_310_ = v___y_345_;
v_a_311_ = v___x_366_;
goto v___jp_306_;
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_a_371_; 
lean_dec_ref(v___y_348_);
lean_dec_ref(v___y_347_);
v___x_367_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16);
v___x_368_ = l_Lean_indentExpr(v___y_346_);
v___x_369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_resolveDelayedMVarAssignments_spec__0___redArg(v___x_369_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref(v___x_370_);
v___y_300_ = v___y_342_;
v___y_301_ = v___x_356_;
v___y_302_ = v_a_350_;
v___y_303_ = v___y_345_;
v_a_304_ = v_a_371_;
goto v___jp_299_;
}
}
else
{
lean_object* v_a_372_; 
lean_dec_ref(v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec_ref(v___y_346_);
v_a_372_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_372_);
lean_dec_ref_known(v___x_360_, 1);
v___y_300_ = v___y_342_;
v___y_301_ = v___x_356_;
v___y_302_ = v_a_350_;
v___y_303_ = v___y_345_;
v_a_304_ = v_a_372_;
goto v___jp_299_;
}
}
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_374_ = lean_io_get_num_heartbeats();
v___x_375_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13));
lean_inc(v___y_344_);
if (v_isShared_353_ == 0)
{
lean_ctor_set_tag(v___x_352_, 1);
lean_ctor_set(v___x_352_, 0, v___y_344_);
v___x_377_ = v___x_352_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___y_344_);
v___x_377_ = v_reuseFailAlloc_391_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_378_; 
lean_inc_ref(v___y_346_);
v___x_378_ = l_Lean_Meta_nativeEqTrue(v___x_375_, v___y_346_, v___x_377_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
lean_dec_ref(v___x_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref_known(v___x_378_, 1);
if (lean_obj_tag(v_a_379_) == 0)
{
lean_object* v_prf_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
lean_dec_ref(v___y_346_);
v_prf_380_ = lean_ctor_get(v_a_379_, 0);
lean_inc_ref(v_prf_380_);
lean_dec_ref_known(v_a_379_, 1);
v___x_381_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__14));
lean_inc_ref(v___y_343_);
v___x_382_ = l_Lean_Name_mkStr5(v___x_276_, v___x_272_, v___x_277_, v___y_343_, v___x_381_);
v___x_383_ = l_Lean_Expr_const___override(v___x_382_, v___x_278_);
v___x_384_ = l_Lean_mkApp3(v___x_383_, v___y_347_, v___y_348_, v_prf_380_);
v___y_335_ = v___y_342_;
v___y_336_ = v_a_350_;
v___y_337_ = v___x_374_;
v___y_338_ = v___y_345_;
v_a_339_ = v___x_384_;
goto v___jp_334_;
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v_a_389_; 
lean_dec_ref(v___y_348_);
lean_dec_ref(v___y_347_);
v___x_385_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16);
v___x_386_ = l_Lean_indentExpr(v___y_346_);
v___x_387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_385_);
lean_ctor_set(v___x_387_, 1, v___x_386_);
v___x_388_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_resolveDelayedMVarAssignments_spec__0___redArg(v___x_387_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref(v___x_388_);
v___y_328_ = v___y_342_;
v___y_329_ = v_a_350_;
v___y_330_ = v___x_374_;
v___y_331_ = v___y_345_;
v_a_332_ = v_a_389_;
goto v___jp_327_;
}
}
else
{
lean_object* v_a_390_; 
lean_dec_ref(v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec_ref(v___y_346_);
v_a_390_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_390_);
lean_dec_ref_known(v___x_378_, 1);
v___y_328_ = v___y_342_;
v___y_329_ = v_a_350_;
v___y_330_ = v___x_374_;
v___y_331_ = v___y_345_;
v_a_332_ = v_a_390_;
goto v___jp_327_;
}
}
}
}
}
v___jp_393_:
{
if (lean_obj_tag(v___y_394_) == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec_ref_known(v___y_394_, 1);
v___x_395_ = l_Lean_Expr_const___override(v_exprDef_266_, v___x_278_);
v___x_396_ = l_Lean_Expr_const___override(v_certDef_267_, v___x_278_);
v___x_397_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__17));
v___x_398_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__20, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__20_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__20);
lean_inc_ref(v___x_396_);
lean_inc_ref(v___x_395_);
v___x_399_ = l_Lean_mkAppB(v___x_398_, v___x_395_, v___x_396_);
if (v_hasTrace_271_ == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13));
lean_inc(v_ref_269_);
v___x_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_401_, 0, v_ref_269_);
lean_inc_ref(v___x_399_);
v___x_402_ = l_Lean_Meta_nativeEqTrue(v___x_400_, v___x_399_, v___x_401_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
lean_dec_ref_known(v___x_401_, 1);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_417_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_417_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_417_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_417_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
if (lean_obj_tag(v_a_403_) == 0)
{
lean_object* v_prf_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_411_; 
lean_dec_ref(v___x_399_);
v_prf_407_ = lean_ctor_get(v_a_403_, 0);
lean_inc_ref(v_prf_407_);
lean_dec_ref_known(v_a_403_, 1);
v___x_408_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22);
v___x_409_ = l_Lean_mkApp3(v___x_408_, v___x_395_, v___x_396_, v_prf_407_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_409_);
v___x_411_ = v___x_405_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
lean_del_object(v___x_405_);
lean_dec_ref(v___x_396_);
lean_dec_ref(v___x_395_);
v___x_413_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16);
v___x_414_ = l_Lean_indentExpr(v___x_399_);
v___x_415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_resolveDelayedMVarAssignments_spec__0___redArg(v___x_415_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
return v___x_416_;
}
}
}
else
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
lean_dec_ref(v___x_399_);
lean_dec_ref(v___x_396_);
lean_dec_ref(v___x_395_);
v_a_418_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_425_ == 0)
{
v___x_420_ = v___x_402_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_402_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_a_418_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
else
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25);
v___x_427_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_270_, v_options_265_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = l_Lean_trace_profiler;
v___x_429_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_265_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__13));
lean_inc(v_ref_269_);
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v_ref_269_);
lean_inc_ref(v___x_399_);
v___x_432_ = l_Lean_Meta_nativeEqTrue(v___x_430_, v___x_399_, v___x_431_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
lean_dec_ref_known(v___x_431_, 1);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_447_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_447_ == 0)
{
v___x_435_ = v___x_432_;
v_isShared_436_ = v_isSharedCheck_447_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_432_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_447_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
if (lean_obj_tag(v_a_433_) == 0)
{
lean_object* v_prf_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
lean_dec_ref(v___x_399_);
v_prf_437_ = lean_ctor_get(v_a_433_, 0);
lean_inc_ref(v_prf_437_);
lean_dec_ref_known(v_a_433_, 1);
v___x_438_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__22);
v___x_439_ = l_Lean_mkApp3(v___x_438_, v___x_395_, v___x_396_, v_prf_437_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 0, v___x_439_);
v___x_441_ = v___x_435_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_del_object(v___x_435_);
lean_dec_ref(v___x_396_);
lean_dec_ref(v___x_395_);
v___x_443_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__16);
v___x_444_ = l_Lean_indentExpr(v___x_399_);
v___x_445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_resolveDelayedMVarAssignments_spec__0___redArg(v___x_445_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
return v___x_446_;
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v___x_399_);
lean_dec_ref(v___x_396_);
lean_dec_ref(v___x_395_);
v_a_448_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_432_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_432_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
v___y_342_ = v_options_265_;
v___y_343_ = v___x_397_;
v___y_344_ = v_ref_269_;
v___y_345_ = v___x_427_;
v___y_346_ = v___x_399_;
v___y_347_ = v___x_395_;
v___y_348_ = v___x_396_;
goto v___jp_341_;
}
}
else
{
v___y_342_ = v_options_265_;
v___y_343_ = v___x_397_;
v___y_344_ = v_ref_269_;
v___y_345_ = v___x_427_;
v___y_346_ = v___x_399_;
v___y_347_ = v___x_395_;
v___y_348_ = v___x_396_;
goto v___jp_341_;
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec(v_certDef_267_);
lean_dec(v_exprDef_266_);
v_a_456_ = lean_ctor_get(v___y_394_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___y_394_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___y_394_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___y_394_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
v___jp_464_:
{
lean_object* v___x_470_; double v___x_471_; double v___x_472_; double v___x_473_; double v___x_474_; double v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_470_ = lean_io_mono_nanos_now();
v___x_471_ = lean_float_of_nat(v___y_465_);
v___x_472_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_473_ = lean_float_div(v___x_471_, v___x_472_);
v___x_474_ = lean_float_of_nat(v___x_470_);
v___x_475_ = lean_float_div(v___x_474_, v___x_472_);
v___x_476_ = lean_box_float(v___x_473_);
v___x_477_ = lean_box_float(v___x_475_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_a_469_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___x_273_, v___x_280_, v___x_281_, v___y_467_, v___y_468_, v___y_466_, v___f_274_, v___x_479_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
v___y_394_ = v___x_480_;
goto v___jp_393_;
}
v___jp_481_:
{
lean_object* v___x_487_; double v___x_488_; double v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_487_ = lean_io_get_num_heartbeats();
v___x_488_ = lean_float_of_nat(v___y_485_);
v___x_489_ = lean_float_of_nat(v___x_487_);
v___x_490_ = lean_box_float(v___x_488_);
v___x_491_ = lean_box_float(v___x_489_);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v_a_486_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___x_273_, v___x_280_, v___x_281_, v___y_483_, v___y_484_, v___y_482_, v___f_274_, v___x_493_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
v___y_394_ = v___x_494_;
goto v___jp_393_;
}
v___jp_495_:
{
lean_object* v___x_500_; lean_object* v_a_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_500_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_263_);
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref(v___x_500_);
v___x_502_ = l_Lean_trace_profiler_useHeartbeats;
v___x_503_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_497_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_io_mono_nanos_now();
lean_inc(v_certDef_267_);
v___x_505_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_certDef_267_, v___y_496_, v___y_499_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set_tag(v___x_508_, 1);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v___y_465_ = v___x_504_;
v___y_466_ = v_a_501_;
v___y_467_ = v___y_497_;
v___y_468_ = v___y_498_;
v_a_469_ = v___x_511_;
goto v___jp_464_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
v_a_514_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_505_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_505_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set_tag(v___x_516_, 0);
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
v___y_465_ = v___x_504_;
v___y_466_ = v_a_501_;
v___y_467_ = v___y_497_;
v___y_468_ = v___y_498_;
v_a_469_ = v___x_519_;
goto v___jp_464_;
}
}
}
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_io_get_num_heartbeats();
lean_inc(v_certDef_267_);
v___x_523_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_certDef_267_, v___y_496_, v___y_499_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_523_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_523_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 1);
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v___y_482_ = v_a_501_;
v___y_483_ = v___y_497_;
v___y_484_ = v___y_498_;
v___y_485_ = v___x_522_;
v_a_486_ = v___x_529_;
goto v___jp_481_;
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_523_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_523_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 0);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
v___y_482_ = v_a_501_;
v___y_483_ = v___y_497_;
v___y_484_ = v___y_498_;
v___y_485_ = v___x_522_;
v_a_486_ = v___x_537_;
goto v___jp_481_;
}
}
}
}
}
v___jp_540_:
{
if (lean_obj_tag(v___y_541_) == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec_ref_known(v___y_541_, 1);
v___x_542_ = l_Lean_mkStrLit(v_cert_257_);
v___x_543_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__28, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__28_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__28);
if (v_hasTrace_271_ == 0)
{
lean_object* v___x_544_; 
lean_inc(v_certDef_267_);
v___x_544_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_certDef_267_, v___x_542_, v___x_543_, v_a_262_, v_a_263_);
v___y_394_ = v___x_544_;
goto v___jp_393_;
}
else
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25);
v___x_546_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_270_, v_options_265_, v___x_545_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_547_ = l_Lean_trace_profiler;
v___x_548_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_265_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; 
lean_inc(v_certDef_267_);
v___x_549_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof_mkAuxDecl(v_certDef_267_, v___x_542_, v___x_543_, v_a_262_, v_a_263_);
v___y_394_ = v___x_549_;
goto v___jp_393_;
}
else
{
v___y_496_ = v___x_542_;
v___y_497_ = v_options_265_;
v___y_498_ = v___x_546_;
v___y_499_ = v___x_543_;
goto v___jp_495_;
}
}
else
{
v___y_496_ = v___x_542_;
v___y_497_ = v_options_265_;
v___y_498_ = v___x_546_;
v___y_499_ = v___x_543_;
goto v___jp_495_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec(v_certDef_267_);
lean_dec(v_exprDef_266_);
lean_dec_ref(v_cert_257_);
v_a_550_ = lean_ctor_get(v___y_541_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___y_541_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___y_541_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___y_541_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___boxed(lean_object* v_cert_633_, lean_object* v_ctx_634_, lean_object* v_reflectionResult_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(v_cert_633_, v_ctx_634_, v_reflectionResult_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(lean_object* v_fileName_643_, lean_object* v_duration_644_){
_start:
{
uint8_t v___x_646_; lean_object* v___x_647_; 
v___x_646_ = 4;
v___x_647_ = lean_io_prim_handle_mk(v_fileName_643_, v___x_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_a_648_);
lean_dec_ref_known(v___x_647_, 1);
v___x_649_ = l_Nat_reprFast(v_duration_644_);
v___x_650_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV___closed__0));
v___x_651_ = lean_string_append(v___x_649_, v___x_650_);
v___x_652_ = lean_io_prim_handle_put_str(v_a_648_, v___x_651_);
lean_dec_ref(v___x_651_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v___x_653_; 
lean_dec_ref_known(v___x_652_, 1);
v___x_653_ = lean_io_prim_handle_flush(v_a_648_);
lean_dec(v_a_648_);
return v___x_653_;
}
else
{
lean_dec(v_a_648_);
return v___x_652_;
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec(v_duration_644_);
v_a_654_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_647_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_647_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV___boxed(lean_object* v_fileName_662_, lean_object* v_duration_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_fileName_662_, v_duration_663_);
lean_dec_ref(v_fileName_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline(lean_object* v_fileName_666_){
_start:
{
uint8_t v___x_668_; lean_object* v___x_669_; 
v___x_668_ = 4;
v___x_669_ = lean_io_prim_handle_mk(v_fileName_666_, v___x_668_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v___x_671_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10));
v___x_672_ = l_IO_FS_Handle_putStrLn(v_a_670_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v___x_673_; 
lean_dec_ref_known(v___x_672_, 1);
v___x_673_ = lean_io_prim_handle_flush(v_a_670_);
lean_dec(v_a_670_);
return v___x_673_;
}
else
{
lean_dec(v_a_670_);
return v___x_672_;
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
v_a_674_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_669_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_669_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline___boxed(lean_object* v_fileName_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline(v_fileName_682_);
lean_dec_ref(v_fileName_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_io_mono_ms_now();
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0___boxed(lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v___y_692_, v___y_693_, v___y_694_, v___y_695_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__1(lean_object* v_bvExpr_698_, lean_object* v_x_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Std_Tactic_BVDecide_BVLogicalExpr_bitblast(v_bvExpr_698_);
return v___x_700_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__2(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__1));
v___x_705_ = l_Lean_MessageData_ofFormat(v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2(lean_object* v_x_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___closed__2);
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2___boxed(lean_object* v_x_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__2(v_x_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v_x_714_);
return v_res_720_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__2(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__1));
v___x_725_ = l_Lean_MessageData_ofFormat(v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3(lean_object* v_x_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___closed__2);
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3___boxed(lean_object* v_x_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__3(v_x_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec_ref(v_x_734_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__4(lean_object* v_a_741_, lean_object* v_x_742_){
_start:
{
lean_object* v___x_743_; lean_object* v_fst_744_; lean_object* v_snd_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_753_; 
v___x_743_ = l_Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(v_a_741_);
v_fst_744_ = lean_ctor_get(v___x_743_, 0);
v_snd_745_ = lean_ctor_get(v___x_743_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_753_ == 0)
{
v___x_747_ = v___x_743_;
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_snd_745_);
lean_inc(v_fst_744_);
lean_dec(v___x_743_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = l_Std_Sat_AIG_toCNF(v_fst_744_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v___x_749_);
v___x_751_ = v___x_747_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_749_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_snd_745_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__2(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__1));
v___x_758_ = l_Lean_MessageData_ofFormat(v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7(lean_object* v_x_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___closed__2);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7___boxed(lean_object* v_x_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__7(v_x_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec_ref(v_x_767_);
return v_res_773_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__2(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__1));
v___x_778_ = l_Lean_MessageData_ofFormat(v___x_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9(lean_object* v_x_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___closed__2);
v___x_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9___boxed(lean_object* v_x_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__9(v_x_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec_ref(v_x_787_);
return v_res_793_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__0));
v___x_796_ = l_Lean_stringToMessageData(v___x_795_);
return v___x_796_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__2));
v___x_799_ = l_Lean_stringToMessageData(v___x_798_);
return v___x_799_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_802_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__5));
v___x_803_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__4));
v___x_804_ = l_System_FilePath_join(v___x_803_, v___x_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6(lean_object* v___f_805_, lean_object* v_csv_806_, lean_object* v_ctx_807_, lean_object* v___x_808_, lean_object* v_atomsAssignment_809_, lean_object* v_goal_810_, lean_object* v_unusedHypotheses_811_, lean_object* v_reflectionResult_812_, uint8_t v_hasTrace_813_, lean_object* v___x_814_, lean_object* v___f_815_, lean_object* v___x_816_, lean_object* v___f_817_, lean_object* v___f_818_, lean_object* v___x_819_, lean_object* v___x_820_, lean_object* v_a_821_, lean_object* v_____r_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; uint8_t v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v_a_924_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; uint8_t v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v_a_947_; lean_object* v___y_957_; lean_object* v___y_958_; uint8_t v___y_959_; uint8_t v___y_960_; uint8_t v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; uint8_t v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___x_1011_; 
lean_inc(v___y_826_);
lean_inc_ref(v___y_825_);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
v___x_1011_ = lean_apply_5(v___f_805_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, lean_box(0));
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1013_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1013_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_806_, v_a_1012_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_config_1014_; lean_object* v_solver_1015_; lean_object* v_lratPath_1016_; lean_object* v_timeout_1017_; uint8_t v_trimProofs_1018_; uint8_t v_binaryProofs_1019_; uint8_t v_graphviz_1020_; uint8_t v_solverMode_1021_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v_a_1028_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; uint8_t v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v_a_1088_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; uint8_t v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v_a_1107_; lean_object* v___y_1120_; lean_object* v___y_1121_; uint8_t v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; 
lean_dec_ref_known(v___x_1013_, 1);
v_config_1014_ = lean_ctor_get(v_ctx_807_, 5);
v_solver_1015_ = lean_ctor_get(v_ctx_807_, 3);
v_lratPath_1016_ = lean_ctor_get(v_ctx_807_, 4);
v_timeout_1017_ = lean_ctor_get(v_config_1014_, 0);
v_trimProofs_1018_ = lean_ctor_get_uint8(v_config_1014_, sizeof(void*)*2);
v_binaryProofs_1019_ = lean_ctor_get_uint8(v_config_1014_, sizeof(void*)*2 + 1);
v_graphviz_1020_ = lean_ctor_get_uint8(v_config_1014_, sizeof(void*)*2 + 8);
v_solverMode_1021_ = lean_ctor_get_uint8(v_config_1014_, sizeof(void*)*2 + 10);
if (v_graphviz_1020_ == 0)
{
lean_dec_ref(v_a_821_);
v___y_1152_ = v___y_823_;
v___y_1153_ = v___y_824_;
v___y_1154_ = v___y_825_;
v___y_1155_ = v___y_826_;
goto v___jp_1151_;
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6);
v___x_1172_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v_a_821_);
v___x_1173_ = l_IO_FS_writeFile(v___x_1171_, v___x_1172_);
lean_dec_ref(v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_dec_ref_known(v___x_1173_, 1);
v___y_1152_ = v___y_823_;
v___y_1153_ = v___y_824_;
v___y_1154_ = v___y_825_;
v___y_1155_ = v___y_826_;
goto v___jp_1151_;
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v___x_820_);
lean_dec_ref(v___x_819_);
lean_dec_ref(v___f_818_);
lean_dec_ref(v___f_817_);
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
lean_dec_ref(v_ctx_807_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v_ref_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v_ref_1178_ = lean_ctor_get(v___y_825_, 5);
v___x_1179_ = lean_io_error_to_string(v_a_1174_);
v___x_1180_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
v___x_1181_ = l_Lean_MessageData_ofFormat(v___x_1180_);
lean_inc(v_ref_1178_);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v_ref_1178_);
lean_ctor_set(v___x_1182_, 1, v___x_1181_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1182_);
v___x_1184_ = v___x_1176_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
v___jp_1022_:
{
lean_object* v_fst_1029_; lean_object* v_snd_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1061_; 
v_fst_1029_ = lean_ctor_get(v_a_1028_, 0);
v_snd_1030_ = lean_ctor_get(v_a_1028_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_a_1028_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1032_ = v_a_1028_;
v_isShared_1033_ = v_isSharedCheck_1061_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_snd_1030_);
lean_inc(v_fst_1029_);
lean_dec(v_a_1028_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1061_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = lean_io_mono_ms_now();
v___x_1035_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_806_, v___x_1034_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_options_1036_; uint8_t v_hasTrace_1037_; 
lean_dec_ref_known(v___x_1035_, 1);
lean_del_object(v___x_1032_);
v_options_1036_ = lean_ctor_get(v___y_1027_, 2);
v_hasTrace_1037_ = lean_ctor_get_uint8(v_options_1036_, sizeof(void*)*1);
if (v_hasTrace_1037_ == 0)
{
lean_object* v___x_1038_; 
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_inc(v_timeout_1017_);
lean_inc_ref(v_lratPath_1016_);
lean_inc_ref(v_solver_1015_);
v___x_1038_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_1029_, v_solver_1015_, v_lratPath_1016_, v_trimProofs_1018_, v_timeout_1017_, v_binaryProofs_1019_, v_solverMode_1021_, v___y_1027_, v___y_1023_);
v___y_861_ = v_snd_1030_;
v___y_862_ = v___y_1023_;
v___y_863_ = v___y_1026_;
v___y_864_ = v___y_1025_;
v___y_865_ = v___y_1024_;
v___y_866_ = v___y_1027_;
v___y_867_ = v___x_1038_;
goto v___jp_860_;
}
else
{
lean_object* v_inheritedTraceOptions_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; 
v_inheritedTraceOptions_1039_ = lean_ctor_get(v___y_1027_, 13);
v___x_1040_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1024_);
v___x_1041_ = l_Lean_Name_append(v___x_1040_, v___y_1024_);
v___x_1042_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1039_, v_options_1036_, v___x_1041_);
lean_dec(v___x_1041_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1043_ = l_Lean_trace_profiler;
v___x_1044_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1036_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_inc(v_timeout_1017_);
lean_inc_ref(v_lratPath_1016_);
lean_inc_ref(v_solver_1015_);
v___x_1045_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_1029_, v_solver_1015_, v_lratPath_1016_, v_trimProofs_1018_, v_timeout_1017_, v_binaryProofs_1019_, v_solverMode_1021_, v___y_1027_, v___y_1023_);
v___y_861_ = v_snd_1030_;
v___y_862_ = v___y_1023_;
v___y_863_ = v___y_1026_;
v___y_864_ = v___y_1025_;
v___y_865_ = v___y_1024_;
v___y_866_ = v___y_1027_;
v___y_867_ = v___x_1045_;
goto v___jp_860_;
}
else
{
lean_inc_ref(v_lratPath_1016_);
lean_inc_ref(v_solver_1015_);
lean_inc(v_timeout_1017_);
v___y_957_ = v_snd_1030_;
v___y_958_ = v_options_1036_;
v___y_959_ = v_trimProofs_1018_;
v___y_960_ = v_binaryProofs_1019_;
v___y_961_ = v___x_1042_;
v___y_962_ = v_fst_1029_;
v___y_963_ = v___y_1025_;
v___y_964_ = v_timeout_1017_;
v___y_965_ = v_solverMode_1021_;
v___y_966_ = v___y_1023_;
v___y_967_ = v___y_1026_;
v___y_968_ = v___y_1024_;
v___y_969_ = v_solver_1015_;
v___y_970_ = v_lratPath_1016_;
v___y_971_ = v___y_1027_;
goto v___jp_956_;
}
}
else
{
lean_inc_ref(v_lratPath_1016_);
lean_inc_ref(v_solver_1015_);
lean_inc(v_timeout_1017_);
v___y_957_ = v_snd_1030_;
v___y_958_ = v_options_1036_;
v___y_959_ = v_trimProofs_1018_;
v___y_960_ = v_binaryProofs_1019_;
v___y_961_ = v___x_1042_;
v___y_962_ = v_fst_1029_;
v___y_963_ = v___y_1025_;
v___y_964_ = v_timeout_1017_;
v___y_965_ = v_solverMode_1021_;
v___y_966_ = v___y_1023_;
v___y_967_ = v___y_1026_;
v___y_968_ = v___y_1024_;
v___y_969_ = v_solver_1015_;
v___y_970_ = v_lratPath_1016_;
v___y_971_ = v___y_1027_;
goto v___jp_956_;
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1060_; 
lean_dec(v_snd_1030_);
lean_dec(v_fst_1029_);
lean_dec(v___y_1024_);
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
lean_dec_ref(v_ctx_807_);
v_a_1046_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1048_ = v___x_1035_;
v_isShared_1049_ = v_isSharedCheck_1060_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1035_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1060_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v_ref_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
v_ref_1050_ = lean_ctor_get(v___y_1027_, 5);
v___x_1051_ = lean_io_error_to_string(v_a_1046_);
v___x_1052_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
v___x_1053_ = l_Lean_MessageData_ofFormat(v___x_1052_);
lean_inc(v_ref_1050_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 1, v___x_1053_);
lean_ctor_set(v___x_1032_, 0, v_ref_1050_);
v___x_1055_ = v___x_1032_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_ref_1050_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v___x_1053_);
v___x_1055_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1057_; 
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1055_);
v___x_1057_ = v___x_1048_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
}
v___jp_1062_:
{
if (lean_obj_tag(v___y_1068_) == 0)
{
lean_object* v_a_1069_; 
v_a_1069_ = lean_ctor_get(v___y_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___y_1068_, 1);
v___y_1023_ = v___y_1063_;
v___y_1024_ = v___y_1066_;
v___y_1025_ = v___y_1065_;
v___y_1026_ = v___y_1064_;
v___y_1027_ = v___y_1067_;
v_a_1028_ = v_a_1069_;
goto v___jp_1022_;
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
lean_dec(v___y_1066_);
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
lean_dec_ref(v_ctx_807_);
v_a_1070_ = lean_ctor_get(v___y_1068_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___y_1068_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___y_1068_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___y_1068_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_a_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
v___jp_1078_:
{
lean_object* v___x_1089_; double v___x_1090_; double v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1089_ = lean_io_get_num_heartbeats();
v___x_1090_ = lean_float_of_nat(v___y_1087_);
v___x_1091_ = lean_float_of_nat(v___x_1089_);
v___x_1092_ = lean_box_float(v___x_1090_);
v___x_1093_ = lean_box_float(v___x_1091_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v_a_1088_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
lean_inc_ref(v___x_814_);
lean_inc(v___y_1084_);
v___x_1096_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_1084_, v_hasTrace_813_, v___x_814_, v___y_1086_, v___y_1083_, v___y_1080_, v___f_817_, v___x_1095_, v___y_1082_, v___y_1081_, v___y_1085_, v___y_1079_);
v___y_1063_ = v___y_1079_;
v___y_1064_ = v___y_1081_;
v___y_1065_ = v___y_1082_;
v___y_1066_ = v___y_1084_;
v___y_1067_ = v___y_1085_;
v___y_1068_ = v___x_1096_;
goto v___jp_1062_;
}
v___jp_1097_:
{
lean_object* v___x_1108_; double v___x_1109_; double v___x_1110_; double v___x_1111_; double v___x_1112_; double v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1108_ = lean_io_mono_nanos_now();
v___x_1109_ = lean_float_of_nat(v___y_1099_);
v___x_1110_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_1111_ = lean_float_div(v___x_1109_, v___x_1110_);
v___x_1112_ = lean_float_of_nat(v___x_1108_);
v___x_1113_ = lean_float_div(v___x_1112_, v___x_1110_);
v___x_1114_ = lean_box_float(v___x_1111_);
v___x_1115_ = lean_box_float(v___x_1113_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1117_, 0, v_a_1107_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
lean_inc_ref(v___x_814_);
lean_inc(v___y_1104_);
v___x_1118_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_1104_, v_hasTrace_813_, v___x_814_, v___y_1106_, v___y_1103_, v___y_1100_, v___f_817_, v___x_1117_, v___y_1102_, v___y_1101_, v___y_1105_, v___y_1098_);
v___y_1063_ = v___y_1098_;
v___y_1064_ = v___y_1101_;
v___y_1065_ = v___y_1102_;
v___y_1066_ = v___y_1104_;
v___y_1067_ = v___y_1105_;
v___y_1068_ = v___x_1118_;
goto v___jp_1062_;
}
v___jp_1119_:
{
lean_object* v___x_1128_; lean_object* v_a_1129_; uint8_t v___x_1130_; 
v___x_1128_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_1120_);
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref(v___x_1128_);
v___x_1130_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_1126_, v___x_816_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
v___x_1131_ = lean_io_mono_nanos_now();
v___x_1132_ = l_IO_lazyPure___redArg(v___f_818_);
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v___x_1132_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1132_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 1);
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
v___y_1098_ = v___y_1120_;
v___y_1099_ = v___x_1131_;
v___y_1100_ = v_a_1129_;
v___y_1101_ = v___y_1124_;
v___y_1102_ = v___y_1123_;
v___y_1103_ = v___y_1122_;
v___y_1104_ = v___y_1121_;
v___y_1105_ = v___y_1125_;
v___y_1106_ = v___y_1126_;
v_a_1107_ = v___x_1138_;
goto v___jp_1097_;
}
}
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v___x_1141_ = lean_io_get_num_heartbeats();
v___x_1142_ = l_IO_lazyPure___redArg(v___f_818_);
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 1);
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
v___y_1079_ = v___y_1120_;
v___y_1080_ = v_a_1129_;
v___y_1081_ = v___y_1124_;
v___y_1082_ = v___y_1123_;
v___y_1083_ = v___y_1122_;
v___y_1084_ = v___y_1121_;
v___y_1085_ = v___y_1125_;
v___y_1086_ = v___y_1126_;
v___y_1087_ = v___x_1141_;
v_a_1088_ = v___x_1148_;
goto v___jp_1078_;
}
}
}
}
v___jp_1151_:
{
lean_object* v_options_1156_; lean_object* v_ref_1157_; lean_object* v_inheritedTraceOptions_1158_; uint8_t v_hasTrace_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_options_1156_ = lean_ctor_get(v___y_1154_, 2);
v_ref_1157_ = lean_ctor_get(v___y_1154_, 5);
v_inheritedTraceOptions_1158_ = lean_ctor_get(v___y_1154_, 13);
v_hasTrace_1159_ = lean_ctor_get_uint8(v_options_1156_, sizeof(void*)*1);
v___x_1160_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__1));
v___x_1161_ = l_Lean_Name_mkStr3(v___x_819_, v___x_820_, v___x_1160_);
if (v_hasTrace_1159_ == 0)
{
lean_object* v___x_1162_; lean_object* v_a_1163_; 
lean_dec_ref(v___f_817_);
v___x_1162_ = l_IO_lazyPure___redArg(v___f_818_);
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_a_1163_);
lean_dec_ref(v___x_1162_);
v___y_1023_ = v___y_1155_;
v___y_1024_ = v___x_1161_;
v___y_1025_ = v___y_1152_;
v___y_1026_ = v___y_1153_;
v___y_1027_ = v___y_1154_;
v_a_1028_ = v_a_1163_;
goto v___jp_1022_;
}
else
{
lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1164_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___x_1161_);
v___x_1165_ = l_Lean_Name_append(v___x_1164_, v___x_1161_);
v___x_1166_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1158_, v_options_1156_, v___x_1165_);
lean_dec(v___x_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = l_Lean_trace_profiler;
v___x_1168_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1156_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v_a_1170_; 
lean_dec_ref(v___f_817_);
v___x_1169_ = l_IO_lazyPure___redArg(v___f_818_);
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref(v___x_1169_);
v___y_1023_ = v___y_1155_;
v___y_1024_ = v___x_1161_;
v___y_1025_ = v___y_1152_;
v___y_1026_ = v___y_1153_;
v___y_1027_ = v___y_1154_;
v_a_1028_ = v_a_1170_;
goto v___jp_1022_;
}
else
{
v___y_1120_ = v___y_1155_;
v___y_1121_ = v___x_1161_;
v___y_1122_ = v___x_1166_;
v___y_1123_ = v___y_1152_;
v___y_1124_ = v___y_1153_;
v___y_1125_ = v___y_1154_;
v___y_1126_ = v_options_1156_;
v___y_1127_ = v_ref_1157_;
goto v___jp_1119_;
}
}
else
{
v___y_1120_ = v___y_1155_;
v___y_1121_ = v___x_1161_;
v___y_1122_ = v___x_1166_;
v___y_1123_ = v___y_1152_;
v___y_1124_ = v___y_1153_;
v___y_1125_ = v___y_1154_;
v___y_1126_ = v_options_1156_;
v___y_1127_ = v_ref_1157_;
goto v___jp_1119_;
}
}
}
}
else
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_a_821_);
lean_dec_ref(v___x_820_);
lean_dec_ref(v___x_819_);
lean_dec_ref(v___f_818_);
lean_dec_ref(v___f_817_);
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
lean_dec_ref(v_ctx_807_);
v_a_1187_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1189_ = v___x_1013_;
v_isShared_1190_ = v_isSharedCheck_1199_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1013_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1199_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v_ref_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v_ref_1191_ = lean_ctor_get(v___y_825_, 5);
v___x_1192_ = lean_io_error_to_string(v_a_1187_);
v___x_1193_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
v___x_1194_ = l_Lean_MessageData_ofFormat(v___x_1193_);
lean_inc(v_ref_1191_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v_ref_1191_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 0, v___x_1195_);
v___x_1197_ = v___x_1189_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v_a_821_);
lean_dec_ref(v___x_820_);
lean_dec_ref(v___x_819_);
lean_dec_ref(v___f_818_);
lean_dec_ref(v___f_817_);
lean_dec_ref(v___f_815_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
lean_dec_ref(v_ctx_807_);
v_a_1200_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1011_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1011_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
v___jp_828_:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_831_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_829_, v___y_830_, v___x_808_, v_atomsAssignment_809_);
lean_dec_ref(v___y_830_);
v___x_832_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_832_, 0, v_goal_810_);
lean_ctor_set(v___x_832_, 1, v_unusedHypotheses_811_);
lean_ctor_set(v___x_832_, 2, v___x_831_);
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
v___x_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
return v___x_834_;
}
v___jp_835_:
{
lean_object* v___x_841_; 
lean_inc_ref(v___y_836_);
v___x_841_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(v___y_836_, v_ctx_807_, v_reflectionResult_812_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_851_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_851_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_851_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_851_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_849_; 
v___x_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_846_, 0, v_a_842_);
lean_ctor_set(v___x_846_, 1, v___y_836_);
v___x_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_847_);
v___x_849_ = v___x_844_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
lean_dec_ref(v___y_836_);
v_a_852_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_841_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_841_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_852_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
v___jp_860_:
{
if (lean_obj_tag(v___y_867_) == 0)
{
lean_object* v_a_868_; 
v_a_868_ = lean_ctor_get(v___y_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___y_867_, 1);
if (lean_obj_tag(v_a_868_) == 0)
{
lean_object* v_options_869_; uint8_t v_hasTrace_870_; 
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_ctx_807_);
v_options_869_ = lean_ctor_get(v___y_866_, 2);
v_hasTrace_870_ = lean_ctor_get_uint8(v_options_869_, sizeof(void*)*1);
if (v_hasTrace_870_ == 0)
{
lean_object* v_a_871_; 
lean_dec(v___y_865_);
v_a_871_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v_a_868_, 1);
v___y_829_ = v___y_861_;
v___y_830_ = v_a_871_;
goto v___jp_828_;
}
else
{
lean_object* v_a_872_; lean_object* v_inheritedTraceOptions_873_; lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_a_872_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v_a_868_, 1);
v_inheritedTraceOptions_873_ = lean_ctor_get(v___y_866_, 13);
v___x_874_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_865_);
v___x_875_ = l_Lean_Name_append(v___x_874_, v___y_865_);
v___x_876_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_873_, v_options_869_, v___x_875_);
lean_dec(v___x_875_);
if (v___x_876_ == 0)
{
lean_dec(v___y_865_);
v___y_829_ = v___y_861_;
v___y_830_ = v_a_872_;
goto v___jp_828_;
}
else
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1);
v___x_878_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_865_, v___x_877_, v___y_864_, v___y_863_, v___y_866_, v___y_862_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_dec_ref_known(v___x_878_, 1);
v___y_829_ = v___y_861_;
v___y_830_ = v_a_872_;
goto v___jp_828_;
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_dec(v_a_872_);
lean_dec_ref(v___y_861_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
v_a_879_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_878_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
}
else
{
lean_object* v_options_887_; uint8_t v_hasTrace_888_; 
lean_dec_ref(v___y_861_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
v_options_887_ = lean_ctor_get(v___y_866_, 2);
v_hasTrace_888_ = lean_ctor_get_uint8(v_options_887_, sizeof(void*)*1);
if (v_hasTrace_888_ == 0)
{
lean_object* v_a_889_; 
lean_dec(v___y_865_);
v_a_889_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v_a_868_, 1);
v___y_836_ = v_a_889_;
v___y_837_ = v___y_864_;
v___y_838_ = v___y_863_;
v___y_839_ = v___y_866_;
v___y_840_ = v___y_862_;
goto v___jp_835_;
}
else
{
lean_object* v_a_890_; lean_object* v_inheritedTraceOptions_891_; lean_object* v___x_892_; lean_object* v___x_893_; uint8_t v___x_894_; 
v_a_890_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v_a_868_, 1);
v_inheritedTraceOptions_891_ = lean_ctor_get(v___y_866_, 13);
v___x_892_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_865_);
v___x_893_ = l_Lean_Name_append(v___x_892_, v___y_865_);
v___x_894_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_891_, v_options_887_, v___x_893_);
lean_dec(v___x_893_);
if (v___x_894_ == 0)
{
lean_dec(v___y_865_);
v___y_836_ = v_a_890_;
v___y_837_ = v___y_864_;
v___y_838_ = v___y_863_;
v___y_839_ = v___y_866_;
v___y_840_ = v___y_862_;
goto v___jp_835_;
}
else
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3);
v___x_896_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_865_, v___x_895_, v___y_864_, v___y_863_, v___y_866_, v___y_862_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_dec_ref_known(v___x_896_, 1);
v___y_836_ = v_a_890_;
v___y_837_ = v___y_864_;
v___y_838_ = v___y_863_;
v___y_839_ = v___y_866_;
v___y_840_ = v___y_862_;
goto v___jp_835_;
}
else
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec(v_a_890_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_ctx_807_);
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec(v___y_865_);
lean_dec_ref(v___y_861_);
lean_dec_ref(v_reflectionResult_812_);
lean_dec_ref(v_unusedHypotheses_811_);
lean_dec(v_goal_810_);
lean_dec_ref(v_ctx_807_);
v_a_905_ = lean_ctor_get(v___y_867_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___y_867_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___y_867_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___y_867_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
v___jp_913_:
{
lean_object* v___x_925_; double v___x_926_; double v___x_927_; double v___x_928_; double v___x_929_; double v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_925_ = lean_io_mono_nanos_now();
v___x_926_ = lean_float_of_nat(v___y_921_);
v___x_927_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_928_ = lean_float_div(v___x_926_, v___x_927_);
v___x_929_ = lean_float_of_nat(v___x_925_);
v___x_930_ = lean_float_div(v___x_929_, v___x_927_);
v___x_931_ = lean_box_float(v___x_928_);
v___x_932_ = lean_box_float(v___x_930_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_934_, 0, v_a_924_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
lean_inc(v___y_920_);
v___x_935_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_920_, v_hasTrace_813_, v___x_814_, v___y_915_, v___y_917_, v___y_923_, v___f_815_, v___x_934_, v___y_919_, v___y_918_, v___y_922_, v___y_916_);
v___y_861_ = v___y_914_;
v___y_862_ = v___y_916_;
v___y_863_ = v___y_918_;
v___y_864_ = v___y_919_;
v___y_865_ = v___y_920_;
v___y_866_ = v___y_922_;
v___y_867_ = v___x_935_;
goto v___jp_860_;
}
v___jp_936_:
{
lean_object* v___x_948_; double v___x_949_; double v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_948_ = lean_io_get_num_heartbeats();
v___x_949_ = lean_float_of_nat(v___y_946_);
v___x_950_ = lean_float_of_nat(v___x_948_);
v___x_951_ = lean_box_float(v___x_949_);
v___x_952_ = lean_box_float(v___x_950_);
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_951_);
lean_ctor_set(v___x_953_, 1, v___x_952_);
v___x_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_954_, 0, v_a_947_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
lean_inc(v___y_943_);
v___x_955_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_943_, v_hasTrace_813_, v___x_814_, v___y_938_, v___y_940_, v___y_945_, v___f_815_, v___x_954_, v___y_942_, v___y_941_, v___y_944_, v___y_939_);
v___y_861_ = v___y_937_;
v___y_862_ = v___y_939_;
v___y_863_ = v___y_941_;
v___y_864_ = v___y_942_;
v___y_865_ = v___y_943_;
v___y_866_ = v___y_944_;
v___y_867_ = v___x_955_;
goto v___jp_860_;
}
v___jp_956_:
{
lean_object* v___x_972_; lean_object* v_a_973_; uint8_t v___x_974_; 
v___x_972_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_966_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref(v___x_972_);
v___x_974_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_958_, v___x_816_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_io_mono_nanos_now();
v___x_976_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_962_, v___y_969_, v___y_970_, v___y_959_, v___y_964_, v___y_960_, v___y_965_, v___y_971_, v___y_966_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_976_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_976_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set_tag(v___x_979_, 1);
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
v___y_914_ = v___y_957_;
v___y_915_ = v___y_958_;
v___y_916_ = v___y_966_;
v___y_917_ = v___y_961_;
v___y_918_ = v___y_967_;
v___y_919_ = v___y_963_;
v___y_920_ = v___y_968_;
v___y_921_ = v___x_975_;
v___y_922_ = v___y_971_;
v___y_923_ = v_a_973_;
v_a_924_ = v___x_982_;
goto v___jp_913_;
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
v_a_985_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_976_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_976_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set_tag(v___x_987_, 0);
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
v___y_914_ = v___y_957_;
v___y_915_ = v___y_958_;
v___y_916_ = v___y_966_;
v___y_917_ = v___y_961_;
v___y_918_ = v___y_967_;
v___y_919_ = v___y_963_;
v___y_920_ = v___y_968_;
v___y_921_ = v___x_975_;
v___y_922_ = v___y_971_;
v___y_923_ = v_a_973_;
v_a_924_ = v___x_990_;
goto v___jp_913_;
}
}
}
}
else
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_io_get_num_heartbeats();
v___x_994_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_962_, v___y_969_, v___y_970_, v___y_959_, v___y_964_, v___y_960_, v___y_965_, v___y_971_, v___y_966_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set_tag(v___x_997_, 1);
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
v___y_937_ = v___y_957_;
v___y_938_ = v___y_958_;
v___y_939_ = v___y_966_;
v___y_940_ = v___y_961_;
v___y_941_ = v___y_967_;
v___y_942_ = v___y_963_;
v___y_943_ = v___y_968_;
v___y_944_ = v___y_971_;
v___y_945_ = v_a_973_;
v___y_946_ = v___x_993_;
v_a_947_ = v___x_1000_;
goto v___jp_936_;
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
v_a_1003_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_994_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_994_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
lean_ctor_set_tag(v___x_1005_, 0);
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
v___y_937_ = v___y_957_;
v___y_938_ = v___y_958_;
v___y_939_ = v___y_966_;
v___y_940_ = v___y_961_;
v___y_941_ = v___y_967_;
v___y_942_ = v___y_963_;
v___y_943_ = v___y_968_;
v___y_944_ = v___y_971_;
v___y_945_ = v_a_973_;
v___y_946_ = v___x_993_;
v_a_947_ = v___x_1008_;
goto v___jp_936_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___boxed(lean_object** _args){
lean_object* v___f_1208_ = _args[0];
lean_object* v_csv_1209_ = _args[1];
lean_object* v_ctx_1210_ = _args[2];
lean_object* v___x_1211_ = _args[3];
lean_object* v_atomsAssignment_1212_ = _args[4];
lean_object* v_goal_1213_ = _args[5];
lean_object* v_unusedHypotheses_1214_ = _args[6];
lean_object* v_reflectionResult_1215_ = _args[7];
lean_object* v_hasTrace_1216_ = _args[8];
lean_object* v___x_1217_ = _args[9];
lean_object* v___f_1218_ = _args[10];
lean_object* v___x_1219_ = _args[11];
lean_object* v___f_1220_ = _args[12];
lean_object* v___f_1221_ = _args[13];
lean_object* v___x_1222_ = _args[14];
lean_object* v___x_1223_ = _args[15];
lean_object* v_a_1224_ = _args[16];
lean_object* v_____r_1225_ = _args[17];
lean_object* v___y_1226_ = _args[18];
lean_object* v___y_1227_ = _args[19];
lean_object* v___y_1228_ = _args[20];
lean_object* v___y_1229_ = _args[21];
lean_object* v___y_1230_ = _args[22];
_start:
{
uint8_t v_hasTrace_boxed_1231_; lean_object* v_res_1232_; 
v_hasTrace_boxed_1231_ = lean_unbox(v_hasTrace_1216_);
v_res_1232_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6(v___f_1208_, v_csv_1209_, v_ctx_1210_, v___x_1211_, v_atomsAssignment_1212_, v_goal_1213_, v_unusedHypotheses_1214_, v_reflectionResult_1215_, v_hasTrace_boxed_1231_, v___x_1217_, v___f_1218_, v___x_1219_, v___f_1220_, v___f_1221_, v___x_1222_, v___x_1223_, v_a_1224_, v_____r_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___x_1219_);
lean_dec_ref(v_atomsAssignment_1212_);
lean_dec(v___x_1211_);
lean_dec_ref(v_csv_1209_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10(lean_object* v___f_1233_, lean_object* v_csv_1234_, lean_object* v_ctx_1235_, lean_object* v___x_1236_, lean_object* v_atomsAssignment_1237_, lean_object* v_goal_1238_, lean_object* v_unusedHypotheses_1239_, lean_object* v_reflectionResult_1240_, uint8_t v___x_1241_, lean_object* v___x_1242_, lean_object* v___f_1243_, lean_object* v___x_1244_, lean_object* v___f_1245_, lean_object* v___f_1246_, lean_object* v___x_1247_, lean_object* v___x_1248_, lean_object* v_a_1249_, lean_object* v_____r_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; lean_object* v___y_1295_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; uint8_t v___y_1351_; lean_object* v_a_1352_; lean_object* v___y_1365_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; uint8_t v___y_1374_; lean_object* v_a_1375_; lean_object* v___y_1385_; uint8_t v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; uint8_t v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; uint8_t v___y_1397_; lean_object* v___y_1398_; uint8_t v___y_1399_; lean_object* v___x_1439_; 
lean_inc(v___y_1254_);
lean_inc_ref(v___y_1253_);
lean_inc(v___y_1252_);
lean_inc_ref(v___y_1251_);
v___x_1439_ = lean_apply_5(v___f_1233_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, lean_box(0));
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1441_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1441_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1234_, v_a_1440_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_config_1442_; lean_object* v_solver_1443_; lean_object* v_lratPath_1444_; lean_object* v_timeout_1445_; uint8_t v_trimProofs_1446_; uint8_t v_binaryProofs_1447_; uint8_t v_graphviz_1448_; uint8_t v_solverMode_1449_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v_a_1456_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1507_; lean_object* v___y_1508_; lean_object* v___y_1509_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; uint8_t v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1515_; lean_object* v_a_1516_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v___y_1531_; uint8_t v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v_a_1535_; lean_object* v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; uint8_t v___y_1553_; lean_object* v___y_1554_; lean_object* v___y_1555_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; 
lean_dec_ref_known(v___x_1441_, 1);
v_config_1442_ = lean_ctor_get(v_ctx_1235_, 5);
v_solver_1443_ = lean_ctor_get(v_ctx_1235_, 3);
v_lratPath_1444_ = lean_ctor_get(v_ctx_1235_, 4);
v_timeout_1445_ = lean_ctor_get(v_config_1442_, 0);
v_trimProofs_1446_ = lean_ctor_get_uint8(v_config_1442_, sizeof(void*)*2);
v_binaryProofs_1447_ = lean_ctor_get_uint8(v_config_1442_, sizeof(void*)*2 + 1);
v_graphviz_1448_ = lean_ctor_get_uint8(v_config_1442_, sizeof(void*)*2 + 8);
v_solverMode_1449_ = lean_ctor_get_uint8(v_config_1442_, sizeof(void*)*2 + 10);
if (v_graphviz_1448_ == 0)
{
lean_dec_ref(v_a_1249_);
v___y_1580_ = v___y_1251_;
v___y_1581_ = v___y_1252_;
v___y_1582_ = v___y_1253_;
v___y_1583_ = v___y_1254_;
goto v___jp_1579_;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1599_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6);
v___x_1600_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v_a_1249_);
v___x_1601_ = l_IO_FS_writeFile(v___x_1599_, v___x_1600_);
lean_dec_ref(v___x_1600_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_dec_ref_known(v___x_1601_, 1);
v___y_1580_ = v___y_1251_;
v___y_1581_ = v___y_1252_;
v___y_1582_ = v___y_1253_;
v___y_1583_ = v___y_1254_;
goto v___jp_1579_;
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___f_1246_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
lean_dec_ref(v_ctx_1235_);
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1614_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1614_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v_ref_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1612_; 
v_ref_1606_ = lean_ctor_get(v___y_1253_, 5);
v___x_1607_ = lean_io_error_to_string(v_a_1602_);
v___x_1608_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
v___x_1609_ = l_Lean_MessageData_ofFormat(v___x_1608_);
lean_inc(v_ref_1606_);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v_ref_1606_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v___x_1610_);
v___x_1612_ = v___x_1604_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
v___jp_1450_:
{
lean_object* v_fst_1457_; lean_object* v_snd_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1489_; 
v_fst_1457_ = lean_ctor_get(v_a_1456_, 0);
v_snd_1458_ = lean_ctor_get(v_a_1456_, 1);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_a_1456_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1460_ = v_a_1456_;
v_isShared_1461_ = v_isSharedCheck_1489_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_snd_1458_);
lean_inc(v_fst_1457_);
lean_dec(v_a_1456_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1489_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_io_mono_ms_now();
v___x_1463_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1234_, v___x_1462_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_options_1464_; uint8_t v_hasTrace_1465_; 
lean_dec_ref_known(v___x_1463_, 1);
lean_del_object(v___x_1460_);
v_options_1464_ = lean_ctor_get(v___y_1452_, 2);
v_hasTrace_1465_ = lean_ctor_get_uint8(v_options_1464_, sizeof(void*)*1);
if (v_hasTrace_1465_ == 0)
{
lean_object* v___x_1466_; 
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_inc(v_timeout_1445_);
lean_inc_ref(v_lratPath_1444_);
lean_inc_ref(v_solver_1443_);
v___x_1466_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_1457_, v_solver_1443_, v_lratPath_1444_, v_trimProofs_1446_, v_timeout_1445_, v_binaryProofs_1447_, v_solverMode_1449_, v___y_1452_, v___y_1454_);
v___y_1289_ = v___y_1451_;
v___y_1290_ = v___y_1453_;
v___y_1291_ = v___y_1452_;
v___y_1292_ = v_snd_1458_;
v___y_1293_ = v___y_1454_;
v___y_1294_ = v___y_1455_;
v___y_1295_ = v___x_1466_;
goto v___jp_1288_;
}
else
{
lean_object* v_inheritedTraceOptions_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v_inheritedTraceOptions_1467_ = lean_ctor_get(v___y_1452_, 13);
v___x_1468_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1451_);
v___x_1469_ = l_Lean_Name_append(v___x_1468_, v___y_1451_);
v___x_1470_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1467_, v_options_1464_, v___x_1469_);
lean_dec(v___x_1469_);
if (v___x_1470_ == 0)
{
lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1471_ = l_Lean_trace_profiler;
v___x_1472_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1464_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; 
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_inc(v_timeout_1445_);
lean_inc_ref(v_lratPath_1444_);
lean_inc_ref(v_solver_1443_);
v___x_1473_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_1457_, v_solver_1443_, v_lratPath_1444_, v_trimProofs_1446_, v_timeout_1445_, v_binaryProofs_1447_, v_solverMode_1449_, v___y_1452_, v___y_1454_);
v___y_1289_ = v___y_1451_;
v___y_1290_ = v___y_1453_;
v___y_1291_ = v___y_1452_;
v___y_1292_ = v_snd_1458_;
v___y_1293_ = v___y_1454_;
v___y_1294_ = v___y_1455_;
v___y_1295_ = v___x_1473_;
goto v___jp_1288_;
}
else
{
lean_inc(v_timeout_1445_);
lean_inc_ref(v_solver_1443_);
lean_inc_ref(v_lratPath_1444_);
v___y_1385_ = v_lratPath_1444_;
v___y_1386_ = v_solverMode_1449_;
v___y_1387_ = v___y_1453_;
v___y_1388_ = v_snd_1458_;
v___y_1389_ = v___y_1455_;
v___y_1390_ = v_fst_1457_;
v___y_1391_ = v_options_1464_;
v___y_1392_ = v_solver_1443_;
v___y_1393_ = v___y_1451_;
v___y_1394_ = v_binaryProofs_1447_;
v___y_1395_ = v___y_1452_;
v___y_1396_ = v___y_1454_;
v___y_1397_ = v_trimProofs_1446_;
v___y_1398_ = v_timeout_1445_;
v___y_1399_ = v___x_1470_;
goto v___jp_1384_;
}
}
else
{
lean_inc(v_timeout_1445_);
lean_inc_ref(v_solver_1443_);
lean_inc_ref(v_lratPath_1444_);
v___y_1385_ = v_lratPath_1444_;
v___y_1386_ = v_solverMode_1449_;
v___y_1387_ = v___y_1453_;
v___y_1388_ = v_snd_1458_;
v___y_1389_ = v___y_1455_;
v___y_1390_ = v_fst_1457_;
v___y_1391_ = v_options_1464_;
v___y_1392_ = v_solver_1443_;
v___y_1393_ = v___y_1451_;
v___y_1394_ = v_binaryProofs_1447_;
v___y_1395_ = v___y_1452_;
v___y_1396_ = v___y_1454_;
v___y_1397_ = v_trimProofs_1446_;
v___y_1398_ = v_timeout_1445_;
v___y_1399_ = v___x_1470_;
goto v___jp_1384_;
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1488_; 
lean_dec(v_snd_1458_);
lean_dec(v_fst_1457_);
lean_dec(v___y_1451_);
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
lean_dec_ref(v_ctx_1235_);
v_a_1474_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1476_ = v___x_1463_;
v_isShared_1477_ = v_isSharedCheck_1488_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1463_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1488_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v_ref_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v_ref_1478_ = lean_ctor_get(v___y_1452_, 5);
v___x_1479_ = lean_io_error_to_string(v_a_1474_);
v___x_1480_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1479_);
v___x_1481_ = l_Lean_MessageData_ofFormat(v___x_1480_);
lean_inc(v_ref_1478_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 1, v___x_1481_);
lean_ctor_set(v___x_1460_, 0, v_ref_1478_);
v___x_1483_ = v___x_1460_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_ref_1478_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1483_);
v___x_1485_ = v___x_1476_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
}
v___jp_1490_:
{
if (lean_obj_tag(v___y_1496_) == 0)
{
lean_object* v_a_1497_; 
v_a_1497_ = lean_ctor_get(v___y_1496_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___y_1496_, 1);
v___y_1451_ = v___y_1491_;
v___y_1452_ = v___y_1493_;
v___y_1453_ = v___y_1492_;
v___y_1454_ = v___y_1494_;
v___y_1455_ = v___y_1495_;
v_a_1456_ = v_a_1497_;
goto v___jp_1450_;
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec(v___y_1491_);
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
lean_dec_ref(v_ctx_1235_);
v_a_1498_ = lean_ctor_get(v___y_1496_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___y_1496_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___y_1496_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___y_1496_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
v___jp_1506_:
{
lean_object* v___x_1517_; double v___x_1518_; double v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1517_ = lean_io_get_num_heartbeats();
v___x_1518_ = lean_float_of_nat(v___y_1515_);
v___x_1519_ = lean_float_of_nat(v___x_1517_);
v___x_1520_ = lean_box_float(v___x_1518_);
v___x_1521_ = lean_box_float(v___x_1519_);
v___x_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1520_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v_a_1516_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
lean_inc_ref(v___x_1242_);
lean_inc(v___y_1508_);
v___x_1524_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_1508_, v___x_1241_, v___x_1242_, v___y_1512_, v___y_1513_, v___y_1507_, v___f_1245_, v___x_1523_, v___y_1510_, v___y_1514_, v___y_1509_, v___y_1511_);
v___y_1491_ = v___y_1508_;
v___y_1492_ = v___y_1510_;
v___y_1493_ = v___y_1509_;
v___y_1494_ = v___y_1511_;
v___y_1495_ = v___y_1514_;
v___y_1496_ = v___x_1524_;
goto v___jp_1490_;
}
v___jp_1525_:
{
lean_object* v___x_1536_; double v___x_1537_; double v___x_1538_; double v___x_1539_; double v___x_1540_; double v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1536_ = lean_io_mono_nanos_now();
v___x_1537_ = lean_float_of_nat(v___y_1533_);
v___x_1538_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_1539_ = lean_float_div(v___x_1537_, v___x_1538_);
v___x_1540_ = lean_float_of_nat(v___x_1536_);
v___x_1541_ = lean_float_div(v___x_1540_, v___x_1538_);
v___x_1542_ = lean_box_float(v___x_1539_);
v___x_1543_ = lean_box_float(v___x_1541_);
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1545_, 0, v_a_1535_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
lean_inc_ref(v___x_1242_);
lean_inc(v___y_1527_);
v___x_1546_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_1527_, v___x_1241_, v___x_1242_, v___y_1531_, v___y_1532_, v___y_1526_, v___f_1245_, v___x_1545_, v___y_1529_, v___y_1534_, v___y_1528_, v___y_1530_);
v___y_1491_ = v___y_1527_;
v___y_1492_ = v___y_1529_;
v___y_1493_ = v___y_1528_;
v___y_1494_ = v___y_1530_;
v___y_1495_ = v___y_1534_;
v___y_1496_ = v___x_1546_;
goto v___jp_1490_;
}
v___jp_1547_:
{
lean_object* v___x_1556_; lean_object* v_a_1557_; uint8_t v___x_1558_; 
v___x_1556_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_1552_);
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref(v___x_1556_);
v___x_1558_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_1551_, v___x_1244_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
v___x_1559_ = lean_io_mono_nanos_now();
v___x_1560_ = l_IO_lazyPure___redArg(v___f_1246_);
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1560_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1560_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
lean_ctor_set_tag(v___x_1563_, 1);
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
v___y_1526_ = v_a_1557_;
v___y_1527_ = v___y_1548_;
v___y_1528_ = v___y_1550_;
v___y_1529_ = v___y_1549_;
v___y_1530_ = v___y_1552_;
v___y_1531_ = v___y_1551_;
v___y_1532_ = v___y_1553_;
v___y_1533_ = v___x_1559_;
v___y_1534_ = v___y_1554_;
v_a_1535_ = v___x_1566_;
goto v___jp_1525_;
}
}
}
else
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
v___x_1569_ = lean_io_get_num_heartbeats();
v___x_1570_ = l_IO_lazyPure___redArg(v___f_1246_);
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
lean_ctor_set_tag(v___x_1573_, 1);
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
v___y_1507_ = v_a_1557_;
v___y_1508_ = v___y_1548_;
v___y_1509_ = v___y_1550_;
v___y_1510_ = v___y_1549_;
v___y_1511_ = v___y_1552_;
v___y_1512_ = v___y_1551_;
v___y_1513_ = v___y_1553_;
v___y_1514_ = v___y_1554_;
v___y_1515_ = v___x_1569_;
v_a_1516_ = v___x_1576_;
goto v___jp_1506_;
}
}
}
}
v___jp_1579_:
{
lean_object* v_options_1584_; lean_object* v_ref_1585_; lean_object* v_inheritedTraceOptions_1586_; uint8_t v_hasTrace_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v_options_1584_ = lean_ctor_get(v___y_1582_, 2);
v_ref_1585_ = lean_ctor_get(v___y_1582_, 5);
v_inheritedTraceOptions_1586_ = lean_ctor_get(v___y_1582_, 13);
v_hasTrace_1587_ = lean_ctor_get_uint8(v_options_1584_, sizeof(void*)*1);
v___x_1588_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__1));
v___x_1589_ = l_Lean_Name_mkStr3(v___x_1247_, v___x_1248_, v___x_1588_);
if (v_hasTrace_1587_ == 0)
{
lean_object* v___x_1590_; lean_object* v_a_1591_; 
lean_dec_ref(v___f_1245_);
v___x_1590_ = l_IO_lazyPure___redArg(v___f_1246_);
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1591_);
lean_dec_ref(v___x_1590_);
v___y_1451_ = v___x_1589_;
v___y_1452_ = v___y_1582_;
v___y_1453_ = v___y_1580_;
v___y_1454_ = v___y_1583_;
v___y_1455_ = v___y_1581_;
v_a_1456_ = v_a_1591_;
goto v___jp_1450_;
}
else
{
lean_object* v___x_1592_; lean_object* v___x_1593_; uint8_t v___x_1594_; 
v___x_1592_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___x_1589_);
v___x_1593_ = l_Lean_Name_append(v___x_1592_, v___x_1589_);
v___x_1594_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1586_, v_options_1584_, v___x_1593_);
lean_dec(v___x_1593_);
if (v___x_1594_ == 0)
{
lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1595_ = l_Lean_trace_profiler;
v___x_1596_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1584_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v_a_1598_; 
lean_dec_ref(v___f_1245_);
v___x_1597_ = l_IO_lazyPure___redArg(v___f_1246_);
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref(v___x_1597_);
v___y_1451_ = v___x_1589_;
v___y_1452_ = v___y_1582_;
v___y_1453_ = v___y_1580_;
v___y_1454_ = v___y_1583_;
v___y_1455_ = v___y_1581_;
v_a_1456_ = v_a_1598_;
goto v___jp_1450_;
}
else
{
v___y_1548_ = v___x_1589_;
v___y_1549_ = v___y_1580_;
v___y_1550_ = v___y_1582_;
v___y_1551_ = v_options_1584_;
v___y_1552_ = v___y_1583_;
v___y_1553_ = v___x_1594_;
v___y_1554_ = v___y_1581_;
v___y_1555_ = v_ref_1585_;
goto v___jp_1547_;
}
}
else
{
v___y_1548_ = v___x_1589_;
v___y_1549_ = v___y_1580_;
v___y_1550_ = v___y_1582_;
v___y_1551_ = v_options_1584_;
v___y_1552_ = v___y_1583_;
v___y_1553_ = v___x_1594_;
v___y_1554_ = v___y_1581_;
v___y_1555_ = v_ref_1585_;
goto v___jp_1547_;
}
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1627_; 
lean_dec_ref(v_a_1249_);
lean_dec_ref(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___f_1246_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
lean_dec_ref(v_ctx_1235_);
v_a_1615_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1617_ = v___x_1441_;
v_isShared_1618_ = v_isSharedCheck_1627_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1441_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1627_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v_ref_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1625_; 
v_ref_1619_ = lean_ctor_get(v___y_1253_, 5);
v___x_1620_ = lean_io_error_to_string(v_a_1615_);
v___x_1621_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
v___x_1622_ = l_Lean_MessageData_ofFormat(v___x_1621_);
lean_inc(v_ref_1619_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_ref_1619_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 0, v___x_1623_);
v___x_1625_ = v___x_1617_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec_ref(v_a_1249_);
lean_dec_ref(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___f_1246_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v___f_1243_);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
lean_dec_ref(v_ctx_1235_);
v_a_1628_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1439_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1439_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
v___jp_1256_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1259_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_1257_, v___y_1258_, v___x_1236_, v_atomsAssignment_1237_);
lean_dec_ref(v___y_1258_);
v___x_1260_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1260_, 0, v_goal_1238_);
lean_ctor_set(v___x_1260_, 1, v_unusedHypotheses_1239_);
lean_ctor_set(v___x_1260_, 2, v___x_1259_);
v___x_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
v___jp_1263_:
{
lean_object* v___x_1269_; 
lean_inc_ref(v___y_1264_);
v___x_1269_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(v___y_1264_, v_ctx_1235_, v_reflectionResult_1240_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1279_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1279_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1279_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v_a_1270_);
lean_ctor_set(v___x_1274_, 1, v___y_1264_);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1277_ = v___x_1272_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec_ref(v___y_1264_);
v_a_1280_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1269_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1269_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
v___jp_1288_:
{
if (lean_obj_tag(v___y_1295_) == 0)
{
lean_object* v_a_1296_; 
v_a_1296_ = lean_ctor_get(v___y_1295_, 0);
lean_inc(v_a_1296_);
lean_dec_ref_known(v___y_1295_, 1);
if (lean_obj_tag(v_a_1296_) == 0)
{
lean_object* v_options_1297_; uint8_t v_hasTrace_1298_; 
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_ctx_1235_);
v_options_1297_ = lean_ctor_get(v___y_1291_, 2);
v_hasTrace_1298_ = lean_ctor_get_uint8(v_options_1297_, sizeof(void*)*1);
if (v_hasTrace_1298_ == 0)
{
lean_object* v_a_1299_; 
lean_dec(v___y_1289_);
v_a_1299_ = lean_ctor_get(v_a_1296_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v_a_1296_, 1);
v___y_1257_ = v___y_1292_;
v___y_1258_ = v_a_1299_;
goto v___jp_1256_;
}
else
{
lean_object* v_a_1300_; lean_object* v_inheritedTraceOptions_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v_a_1300_ = lean_ctor_get(v_a_1296_, 0);
lean_inc(v_a_1300_);
lean_dec_ref_known(v_a_1296_, 1);
v_inheritedTraceOptions_1301_ = lean_ctor_get(v___y_1291_, 13);
v___x_1302_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1289_);
v___x_1303_ = l_Lean_Name_append(v___x_1302_, v___y_1289_);
v___x_1304_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1301_, v_options_1297_, v___x_1303_);
lean_dec(v___x_1303_);
if (v___x_1304_ == 0)
{
lean_dec(v___y_1289_);
v___y_1257_ = v___y_1292_;
v___y_1258_ = v_a_1300_;
goto v___jp_1256_;
}
else
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1);
v___x_1306_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_1289_, v___x_1305_, v___y_1290_, v___y_1294_, v___y_1291_, v___y_1293_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_dec_ref_known(v___x_1306_, 1);
v___y_1257_ = v___y_1292_;
v___y_1258_ = v_a_1300_;
goto v___jp_1256_;
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
lean_dec(v_a_1300_);
lean_dec_ref(v___y_1292_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1306_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1306_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
}
}
else
{
lean_object* v_options_1315_; uint8_t v_hasTrace_1316_; 
lean_dec_ref(v___y_1292_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
v_options_1315_ = lean_ctor_get(v___y_1291_, 2);
v_hasTrace_1316_ = lean_ctor_get_uint8(v_options_1315_, sizeof(void*)*1);
if (v_hasTrace_1316_ == 0)
{
lean_object* v_a_1317_; 
lean_dec(v___y_1289_);
v_a_1317_ = lean_ctor_get(v_a_1296_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v_a_1296_, 1);
v___y_1264_ = v_a_1317_;
v___y_1265_ = v___y_1290_;
v___y_1266_ = v___y_1294_;
v___y_1267_ = v___y_1291_;
v___y_1268_ = v___y_1293_;
goto v___jp_1263_;
}
else
{
lean_object* v_a_1318_; lean_object* v_inheritedTraceOptions_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v_a_1318_ = lean_ctor_get(v_a_1296_, 0);
lean_inc(v_a_1318_);
lean_dec_ref_known(v_a_1296_, 1);
v_inheritedTraceOptions_1319_ = lean_ctor_get(v___y_1291_, 13);
v___x_1320_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1289_);
v___x_1321_ = l_Lean_Name_append(v___x_1320_, v___y_1289_);
v___x_1322_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1319_, v_options_1315_, v___x_1321_);
lean_dec(v___x_1321_);
if (v___x_1322_ == 0)
{
lean_dec(v___y_1289_);
v___y_1264_ = v_a_1318_;
v___y_1265_ = v___y_1290_;
v___y_1266_ = v___y_1294_;
v___y_1267_ = v___y_1291_;
v___y_1268_ = v___y_1293_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3);
v___x_1324_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_1289_, v___x_1323_, v___y_1290_, v___y_1294_, v___y_1291_, v___y_1293_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_dec_ref_known(v___x_1324_, 1);
v___y_1264_ = v_a_1318_;
v___y_1265_ = v___y_1290_;
v___y_1266_ = v___y_1294_;
v___y_1267_ = v___y_1291_;
v___y_1268_ = v___y_1293_;
goto v___jp_1263_;
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v_a_1318_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_ctx_1235_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1289_);
lean_dec_ref(v_reflectionResult_1240_);
lean_dec_ref(v_unusedHypotheses_1239_);
lean_dec(v_goal_1238_);
lean_dec_ref(v_ctx_1235_);
v_a_1333_ = lean_ctor_get(v___y_1295_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___y_1295_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___y_1295_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___y_1295_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
v___jp_1341_:
{
lean_object* v___x_1353_; double v___x_1354_; double v___x_1355_; double v___x_1356_; double v___x_1357_; double v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1353_ = lean_io_mono_nanos_now();
v___x_1354_ = lean_float_of_nat(v___y_1350_);
v___x_1355_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_1356_ = lean_float_div(v___x_1354_, v___x_1355_);
v___x_1357_ = lean_float_of_nat(v___x_1353_);
v___x_1358_ = lean_float_div(v___x_1357_, v___x_1355_);
v___x_1359_ = lean_box_float(v___x_1356_);
v___x_1360_ = lean_box_float(v___x_1358_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1362_, 0, v_a_1352_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
lean_inc(v___y_1343_);
v___x_1363_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_1343_, v___x_1241_, v___x_1242_, v___y_1342_, v___y_1351_, v___y_1349_, v___f_1243_, v___x_1362_, v___y_1345_, v___y_1348_, v___y_1344_, v___y_1347_);
v___y_1289_ = v___y_1343_;
v___y_1290_ = v___y_1345_;
v___y_1291_ = v___y_1344_;
v___y_1292_ = v___y_1346_;
v___y_1293_ = v___y_1347_;
v___y_1294_ = v___y_1348_;
v___y_1295_ = v___x_1363_;
goto v___jp_1288_;
}
v___jp_1364_:
{
lean_object* v___x_1376_; double v___x_1377_; double v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1376_ = lean_io_get_num_heartbeats();
v___x_1377_ = lean_float_of_nat(v___y_1370_);
v___x_1378_ = lean_float_of_nat(v___x_1376_);
v___x_1379_ = lean_box_float(v___x_1377_);
v___x_1380_ = lean_box_float(v___x_1378_);
v___x_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1379_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_a_1375_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
lean_inc(v___y_1366_);
v___x_1383_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_1366_, v___x_1241_, v___x_1242_, v___y_1365_, v___y_1374_, v___y_1373_, v___f_1243_, v___x_1382_, v___y_1368_, v___y_1372_, v___y_1367_, v___y_1371_);
v___y_1289_ = v___y_1366_;
v___y_1290_ = v___y_1368_;
v___y_1291_ = v___y_1367_;
v___y_1292_ = v___y_1369_;
v___y_1293_ = v___y_1371_;
v___y_1294_ = v___y_1372_;
v___y_1295_ = v___x_1383_;
goto v___jp_1288_;
}
v___jp_1384_:
{
lean_object* v___x_1400_; lean_object* v_a_1401_; uint8_t v___x_1402_; 
v___x_1400_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_1396_);
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1401_);
lean_dec_ref(v___x_1400_);
v___x_1402_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_1391_, v___x_1244_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_io_mono_nanos_now();
v___x_1404_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_1390_, v___y_1392_, v___y_1385_, v___y_1397_, v___y_1398_, v___y_1394_, v___y_1386_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1404_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1404_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
lean_ctor_set_tag(v___x_1407_, 1);
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
v___y_1342_ = v___y_1391_;
v___y_1343_ = v___y_1393_;
v___y_1344_ = v___y_1395_;
v___y_1345_ = v___y_1387_;
v___y_1346_ = v___y_1388_;
v___y_1347_ = v___y_1396_;
v___y_1348_ = v___y_1389_;
v___y_1349_ = v_a_1401_;
v___y_1350_ = v___x_1403_;
v___y_1351_ = v___y_1399_;
v_a_1352_ = v___x_1410_;
goto v___jp_1341_;
}
}
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
v_a_1413_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1404_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1404_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
lean_ctor_set_tag(v___x_1415_, 0);
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
v___y_1342_ = v___y_1391_;
v___y_1343_ = v___y_1393_;
v___y_1344_ = v___y_1395_;
v___y_1345_ = v___y_1387_;
v___y_1346_ = v___y_1388_;
v___y_1347_ = v___y_1396_;
v___y_1348_ = v___y_1389_;
v___y_1349_ = v_a_1401_;
v___y_1350_ = v___x_1403_;
v___y_1351_ = v___y_1399_;
v_a_1352_ = v___x_1418_;
goto v___jp_1341_;
}
}
}
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_io_get_num_heartbeats();
v___x_1422_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_1390_, v___y_1392_, v___y_1385_, v___y_1397_, v___y_1398_, v___y_1394_, v___y_1386_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1422_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1422_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set_tag(v___x_1425_, 1);
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
v___y_1365_ = v___y_1391_;
v___y_1366_ = v___y_1393_;
v___y_1367_ = v___y_1395_;
v___y_1368_ = v___y_1387_;
v___y_1369_ = v___y_1388_;
v___y_1370_ = v___x_1421_;
v___y_1371_ = v___y_1396_;
v___y_1372_ = v___y_1389_;
v___y_1373_ = v_a_1401_;
v___y_1374_ = v___y_1399_;
v_a_1375_ = v___x_1428_;
goto v___jp_1364_;
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
v_a_1431_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1422_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1422_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 0);
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
v___y_1365_ = v___y_1391_;
v___y_1366_ = v___y_1393_;
v___y_1367_ = v___y_1395_;
v___y_1368_ = v___y_1387_;
v___y_1369_ = v___y_1388_;
v___y_1370_ = v___x_1421_;
v___y_1371_ = v___y_1396_;
v___y_1372_ = v___y_1389_;
v___y_1373_ = v_a_1401_;
v___y_1374_ = v___y_1399_;
v_a_1375_ = v___x_1436_;
goto v___jp_1364_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10___boxed(lean_object** _args){
lean_object* v___f_1636_ = _args[0];
lean_object* v_csv_1637_ = _args[1];
lean_object* v_ctx_1638_ = _args[2];
lean_object* v___x_1639_ = _args[3];
lean_object* v_atomsAssignment_1640_ = _args[4];
lean_object* v_goal_1641_ = _args[5];
lean_object* v_unusedHypotheses_1642_ = _args[6];
lean_object* v_reflectionResult_1643_ = _args[7];
lean_object* v___x_1644_ = _args[8];
lean_object* v___x_1645_ = _args[9];
lean_object* v___f_1646_ = _args[10];
lean_object* v___x_1647_ = _args[11];
lean_object* v___f_1648_ = _args[12];
lean_object* v___f_1649_ = _args[13];
lean_object* v___x_1650_ = _args[14];
lean_object* v___x_1651_ = _args[15];
lean_object* v_a_1652_ = _args[16];
lean_object* v_____r_1653_ = _args[17];
lean_object* v___y_1654_ = _args[18];
lean_object* v___y_1655_ = _args[19];
lean_object* v___y_1656_ = _args[20];
lean_object* v___y_1657_ = _args[21];
lean_object* v___y_1658_ = _args[22];
_start:
{
uint8_t v___x_88069__boxed_1659_; lean_object* v_res_1660_; 
v___x_88069__boxed_1659_ = lean_unbox(v___x_1644_);
v_res_1660_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10(v___f_1636_, v_csv_1637_, v_ctx_1638_, v___x_1639_, v_atomsAssignment_1640_, v_goal_1641_, v_unusedHypotheses_1642_, v_reflectionResult_1643_, v___x_88069__boxed_1659_, v___x_1645_, v___f_1646_, v___x_1647_, v___f_1648_, v___f_1649_, v___x_1650_, v___x_1651_, v_a_1652_, v_____r_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec_ref(v___x_1647_);
lean_dec_ref(v_atomsAssignment_1640_);
lean_dec(v___x_1639_);
lean_dec_ref(v_csv_1637_);
return v_res_1660_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__7(void){
_start:
{
lean_object* v_cls_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_cls_1671_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6));
v___x_1672_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
v___x_1673_ = l_Lean_Name_append(v___x_1672_, v_cls_1671_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert(lean_object* v_ctx_1676_, lean_object* v_csv_1677_, lean_object* v_goal_1678_, lean_object* v_reflectionResult_1679_, lean_object* v_atomsAssignment_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_){
_start:
{
lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v_options_1736_; lean_object* v_ref_1737_; lean_object* v_inheritedTraceOptions_1738_; uint8_t v_hasTrace_1739_; lean_object* v___f_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v_options_1736_ = lean_ctor_get(v_a_1683_, 2);
v_ref_1737_ = lean_ctor_get(v_a_1683_, 5);
v_inheritedTraceOptions_1738_ = lean_ctor_get(v_a_1683_, 13);
v_hasTrace_1739_ = lean_ctor_get_uint8(v_options_1736_, sizeof(void*)*1);
v___f_1740_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__0));
v___x_1741_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__0));
v___x_1742_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__2));
if (v_hasTrace_1739_ == 0)
{
lean_object* v___x_1743_; lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_2153_; 
v___x_1743_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_1746_ = v___x_1743_;
v_isShared_1747_ = v_isSharedCheck_2153_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1743_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_2153_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1748_; 
v___x_1748_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v_a_1744_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_bvExpr_1749_; lean_object* v_unusedHypotheses_1750_; lean_object* v___f_1751_; lean_object* v___x_1752_; lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_2138_; 
lean_dec_ref_known(v___x_1748_, 1);
v_bvExpr_1749_ = lean_ctor_get(v_reflectionResult_1679_, 0);
v_unusedHypotheses_1750_ = lean_ctor_get(v_reflectionResult_1679_, 2);
lean_inc_ref(v_bvExpr_1749_);
v___f_1751_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__1), 2, 1);
lean_closure_set(v___f_1751_, 0, v_bvExpr_1749_);
v___x_1752_ = l_IO_lazyPure___redArg(v___f_1751_);
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_1755_ = v___x_1752_;
v_isShared_1756_ = v_isSharedCheck_2138_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1752_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_2138_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v_aig_1757_; lean_object* v_decls_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_2136_; 
v_aig_1757_ = lean_ctor_get(v_a_1753_, 0);
lean_inc_ref(v_aig_1757_);
v_decls_1758_ = lean_ctor_get(v_aig_1757_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v_aig_1757_);
if (v_isSharedCheck_2136_ == 0)
{
lean_object* v_unused_2137_; 
v_unused_2137_ = lean_ctor_get(v_aig_1757_, 1);
lean_dec(v_unused_2137_);
v___x_1760_ = v_aig_1757_;
v_isShared_1761_ = v_isSharedCheck_2136_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_decls_1758_);
lean_dec(v_aig_1757_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_2136_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_2135_; 
v___x_1762_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_1765_ = v___x_1762_;
v_isShared_1766_ = v_isSharedCheck_2135_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1762_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_2135_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v_a_1763_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_2117_; 
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_2117_ == 0)
{
lean_object* v_unused_2118_; 
v_unused_2118_ = lean_ctor_get(v___x_1767_, 0);
lean_dec(v_unused_2118_);
v___x_1769_ = v___x_1767_;
v_isShared_1770_ = v_isSharedCheck_2117_;
goto v_resetjp_1768_;
}
else
{
lean_dec(v___x_1767_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_2117_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v_config_1771_; lean_object* v_solver_1772_; lean_object* v_lratPath_1773_; lean_object* v_timeout_1774_; uint8_t v_trimProofs_1775_; uint8_t v_binaryProofs_1776_; uint8_t v_graphviz_1777_; uint8_t v_solverMode_1778_; lean_object* v___f_1779_; lean_object* v___f_1780_; uint8_t v___x_1781_; lean_object* v___x_1782_; lean_object* v___f_1783_; lean_object* v___x_1784_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; uint8_t v___y_1859_; lean_object* v_a_1860_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; uint8_t v___y_1884_; lean_object* v_a_1885_; lean_object* v___y_1895_; uint8_t v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; uint8_t v___y_1899_; lean_object* v___y_1900_; uint8_t v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; uint8_t v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v_a_1956_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; lean_object* v___y_1998_; uint8_t v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v_a_2018_; uint8_t v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2039_; lean_object* v_a_2040_; lean_object* v___y_2050_; uint8_t v___y_2051_; lean_object* v___y_2052_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v_options_2086_; uint8_t v_hasTrace_2087_; lean_object* v_ref_2088_; lean_object* v_inheritedTraceOptions_2089_; lean_object* v___y_2090_; 
v_config_1771_ = lean_ctor_get(v_ctx_1676_, 5);
v_solver_1772_ = lean_ctor_get(v_ctx_1676_, 3);
v_lratPath_1773_ = lean_ctor_get(v_ctx_1676_, 4);
v_timeout_1774_ = lean_ctor_get(v_config_1771_, 0);
v_trimProofs_1775_ = lean_ctor_get_uint8(v_config_1771_, sizeof(void*)*2);
v_binaryProofs_1776_ = lean_ctor_get_uint8(v_config_1771_, sizeof(void*)*2 + 1);
v_graphviz_1777_ = lean_ctor_get_uint8(v_config_1771_, sizeof(void*)*2 + 8);
v_solverMode_1778_ = lean_ctor_get_uint8(v_config_1771_, sizeof(void*)*2 + 10);
v___f_1779_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__1));
v___f_1780_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__2));
v___x_1781_ = 1;
v___x_1782_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10));
lean_inc(v_a_1753_);
v___f_1783_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__4), 2, 1);
lean_closure_set(v___f_1783_, 0, v_a_1753_);
v___x_1784_ = lean_array_get_size(v_decls_1758_);
lean_dec_ref(v_decls_1758_);
if (v_graphviz_1777_ == 0)
{
lean_dec(v_a_1753_);
lean_del_object(v___x_1746_);
v___y_2083_ = v_a_1681_;
v___y_2084_ = v_a_1682_;
v___y_2085_ = v_a_1683_;
v_options_2086_ = v_options_1736_;
v_hasTrace_2087_ = v_hasTrace_1739_;
v_ref_2088_ = v_ref_1737_;
v_inheritedTraceOptions_2089_ = v_inheritedTraceOptions_1738_;
v___y_2090_ = v_a_1684_;
goto v___jp_2082_;
}
else
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2100_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6);
v___x_2101_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v_a_1753_);
v___x_2102_ = l_IO_FS_writeFile(v___x_2100_, v___x_2101_);
lean_dec_ref(v___x_2101_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_dec_ref_known(v___x_2102_, 1);
lean_del_object(v___x_1746_);
v___y_2083_ = v_a_1681_;
v___y_2084_ = v_a_1682_;
v___y_2085_ = v_a_1683_;
v_options_2086_ = v_options_1736_;
v_hasTrace_2087_ = v_hasTrace_1739_;
v_ref_2088_ = v_ref_1737_;
v_inheritedTraceOptions_2089_ = v_inheritedTraceOptions_1738_;
v___y_2090_ = v_a_1684_;
goto v___jp_2082_;
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2116_; 
lean_dec_ref(v___f_1783_);
lean_del_object(v___x_1769_);
lean_del_object(v___x_1765_);
lean_del_object(v___x_1760_);
lean_del_object(v___x_1755_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2116_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2116_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2107_ = lean_io_error_to_string(v_a_2103_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set_tag(v___x_1746_, 3);
lean_ctor_set(v___x_1746_, 0, v___x_2107_);
v___x_2109_ = v___x_1746_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2110_ = l_Lean_MessageData_ofFormat(v___x_2109_);
lean_inc(v_ref_1737_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v_ref_1737_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2111_);
v___x_2113_ = v___x_2105_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
}
}
v___jp_1785_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1788_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_1786_, v___y_1787_, v___x_1784_, v_atomsAssignment_1680_);
lean_dec_ref(v___y_1787_);
v___x_1789_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1789_, 0, v_goal_1678_);
lean_ctor_set(v___x_1789_, 1, v_unusedHypotheses_1750_);
lean_ctor_set(v___x_1789_, 2, v___x_1788_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1789_);
v___x_1791_ = v___x_1765_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1793_; 
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 0, v___x_1791_);
v___x_1793_ = v___x_1769_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
v___jp_1796_:
{
if (lean_obj_tag(v___y_1803_) == 0)
{
lean_object* v_a_1804_; 
v_a_1804_ = lean_ctor_get(v___y_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___y_1803_, 1);
if (lean_obj_tag(v_a_1804_) == 0)
{
lean_object* v_options_1805_; uint8_t v_hasTrace_1806_; 
lean_inc_ref(v_unusedHypotheses_1750_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec_ref(v_ctx_1676_);
v_options_1805_ = lean_ctor_get(v___y_1800_, 2);
v_hasTrace_1806_ = lean_ctor_get_uint8(v_options_1805_, sizeof(void*)*1);
if (v_hasTrace_1806_ == 0)
{
lean_object* v_a_1807_; 
v_a_1807_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_a_1807_);
lean_dec_ref_known(v_a_1804_, 1);
v___y_1786_ = v___y_1797_;
v___y_1787_ = v_a_1807_;
goto v___jp_1785_;
}
else
{
lean_object* v_a_1808_; lean_object* v_inheritedTraceOptions_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; uint8_t v___x_1812_; 
v_a_1808_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v_a_1804_, 1);
v_inheritedTraceOptions_1809_ = lean_ctor_get(v___y_1800_, 13);
v___x_1810_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1799_);
v___x_1811_ = l_Lean_Name_append(v___x_1810_, v___y_1799_);
v___x_1812_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1809_, v_options_1805_, v___x_1811_);
lean_dec(v___x_1811_);
if (v___x_1812_ == 0)
{
v___y_1786_ = v___y_1797_;
v___y_1787_ = v_a_1808_;
goto v___jp_1785_;
}
else
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1);
lean_inc(v___y_1799_);
v___x_1814_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_1799_, v___x_1813_, v___y_1798_, v___y_1802_, v___y_1800_, v___y_1801_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_dec_ref_known(v___x_1814_, 1);
v___y_1786_ = v___y_1797_;
v___y_1787_ = v_a_1808_;
goto v___jp_1785_;
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
lean_dec(v_a_1808_);
lean_dec_ref(v___y_1797_);
lean_del_object(v___x_1769_);
lean_del_object(v___x_1765_);
lean_dec_ref(v_unusedHypotheses_1750_);
lean_dec(v_goal_1678_);
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1814_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1814_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
}
}
else
{
lean_object* v_options_1823_; uint8_t v_hasTrace_1824_; 
lean_dec_ref(v___y_1797_);
lean_del_object(v___x_1769_);
lean_del_object(v___x_1765_);
lean_dec(v_goal_1678_);
v_options_1823_ = lean_ctor_get(v___y_1800_, 2);
v_hasTrace_1824_ = lean_ctor_get_uint8(v_options_1823_, sizeof(void*)*1);
if (v_hasTrace_1824_ == 0)
{
lean_object* v_a_1825_; 
v_a_1825_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v_a_1804_, 1);
v___y_1687_ = v_a_1825_;
v___y_1688_ = v___y_1798_;
v___y_1689_ = v___y_1802_;
v___y_1690_ = v___y_1800_;
v___y_1691_ = v___y_1801_;
goto v___jp_1686_;
}
else
{
lean_object* v_a_1826_; lean_object* v_inheritedTraceOptions_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v_a_1826_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v_a_1804_, 1);
v_inheritedTraceOptions_1827_ = lean_ctor_get(v___y_1800_, 13);
v___x_1828_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1799_);
v___x_1829_ = l_Lean_Name_append(v___x_1828_, v___y_1799_);
v___x_1830_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1827_, v_options_1823_, v___x_1829_);
lean_dec(v___x_1829_);
if (v___x_1830_ == 0)
{
v___y_1687_ = v_a_1826_;
v___y_1688_ = v___y_1798_;
v___y_1689_ = v___y_1802_;
v___y_1690_ = v___y_1800_;
v___y_1691_ = v___y_1801_;
goto v___jp_1686_;
}
else
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3);
lean_inc(v___y_1799_);
v___x_1832_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_1799_, v___x_1831_, v___y_1798_, v___y_1802_, v___y_1800_, v___y_1801_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_dec_ref_known(v___x_1832_, 1);
v___y_1687_ = v_a_1826_;
v___y_1688_ = v___y_1798_;
v___y_1689_ = v___y_1802_;
v___y_1690_ = v___y_1800_;
v___y_1691_ = v___y_1801_;
goto v___jp_1686_;
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
lean_dec(v_a_1826_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec_ref(v_ctx_1676_);
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1832_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1832_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec_ref(v___y_1797_);
lean_del_object(v___x_1769_);
lean_del_object(v___x_1765_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_1841_ = lean_ctor_get(v___y_1803_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___y_1803_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___y_1803_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___y_1803_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
v___jp_1849_:
{
lean_object* v___x_1861_; double v___x_1862_; double v___x_1863_; double v___x_1864_; double v___x_1865_; double v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1870_; 
v___x_1861_ = lean_io_mono_nanos_now();
v___x_1862_ = lean_float_of_nat(v___y_1853_);
v___x_1863_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_1864_ = lean_float_div(v___x_1862_, v___x_1863_);
v___x_1865_ = lean_float_of_nat(v___x_1861_);
v___x_1866_ = lean_float_div(v___x_1865_, v___x_1863_);
v___x_1867_ = lean_box_float(v___x_1864_);
v___x_1868_ = lean_box_float(v___x_1866_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 1, v___x_1868_);
lean_ctor_set(v___x_1760_, 0, v___x_1867_);
v___x_1870_ = v___x_1760_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1867_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1871_, 0, v_a_1860_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
lean_inc(v___y_1855_);
v___x_1872_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_1855_, v___x_1781_, v___x_1782_, v___y_1852_, v___y_1859_, v___y_1851_, v___f_1779_, v___x_1871_, v___y_1854_, v___y_1858_, v___y_1856_, v___y_1857_);
v___y_1797_ = v___y_1850_;
v___y_1798_ = v___y_1854_;
v___y_1799_ = v___y_1855_;
v___y_1800_ = v___y_1856_;
v___y_1801_ = v___y_1857_;
v___y_1802_ = v___y_1858_;
v___y_1803_ = v___x_1872_;
goto v___jp_1796_;
}
}
v___jp_1874_:
{
lean_object* v___x_1886_; double v___x_1887_; double v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1886_ = lean_io_get_num_heartbeats();
v___x_1887_ = lean_float_of_nat(v___y_1878_);
v___x_1888_ = lean_float_of_nat(v___x_1886_);
v___x_1889_ = lean_box_float(v___x_1887_);
v___x_1890_ = lean_box_float(v___x_1888_);
v___x_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1889_);
lean_ctor_set(v___x_1891_, 1, v___x_1890_);
v___x_1892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1892_, 0, v_a_1885_);
lean_ctor_set(v___x_1892_, 1, v___x_1891_);
lean_inc(v___y_1880_);
v___x_1893_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_1880_, v___x_1781_, v___x_1782_, v___y_1877_, v___y_1884_, v___y_1876_, v___f_1779_, v___x_1892_, v___y_1879_, v___y_1883_, v___y_1881_, v___y_1882_);
v___y_1797_ = v___y_1875_;
v___y_1798_ = v___y_1879_;
v___y_1799_ = v___y_1880_;
v___y_1800_ = v___y_1881_;
v___y_1801_ = v___y_1882_;
v___y_1802_ = v___y_1883_;
v___y_1803_ = v___x_1893_;
goto v___jp_1796_;
}
v___jp_1894_:
{
lean_object* v___x_1910_; lean_object* v_a_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1910_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_1908_);
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref(v___x_1910_);
v___x_1912_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1913_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_1903_, v___x_1912_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1914_ = lean_io_mono_nanos_now();
v___x_1915_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_1902_, v___y_1898_, v___y_1905_, v___y_1906_, v___y_1895_, v___y_1896_, v___y_1899_, v___y_1907_, v___y_1908_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1915_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1915_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
lean_ctor_set_tag(v___x_1918_, 1);
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
v___y_1850_ = v___y_1897_;
v___y_1851_ = v_a_1911_;
v___y_1852_ = v___y_1903_;
v___y_1853_ = v___x_1914_;
v___y_1854_ = v___y_1900_;
v___y_1855_ = v___y_1904_;
v___y_1856_ = v___y_1907_;
v___y_1857_ = v___y_1908_;
v___y_1858_ = v___y_1909_;
v___y_1859_ = v___y_1901_;
v_a_1860_ = v___x_1921_;
goto v___jp_1849_;
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
v_a_1924_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1915_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1915_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set_tag(v___x_1926_, 0);
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
v___y_1850_ = v___y_1897_;
v___y_1851_ = v_a_1911_;
v___y_1852_ = v___y_1903_;
v___y_1853_ = v___x_1914_;
v___y_1854_ = v___y_1900_;
v___y_1855_ = v___y_1904_;
v___y_1856_ = v___y_1907_;
v___y_1857_ = v___y_1908_;
v___y_1858_ = v___y_1909_;
v___y_1859_ = v___y_1901_;
v_a_1860_ = v___x_1929_;
goto v___jp_1849_;
}
}
}
}
else
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
lean_del_object(v___x_1760_);
v___x_1932_ = lean_io_get_num_heartbeats();
v___x_1933_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_1902_, v___y_1898_, v___y_1905_, v___y_1906_, v___y_1895_, v___y_1896_, v___y_1899_, v___y_1907_, v___y_1908_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1933_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1933_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
lean_ctor_set_tag(v___x_1936_, 1);
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
v___y_1875_ = v___y_1897_;
v___y_1876_ = v_a_1911_;
v___y_1877_ = v___y_1903_;
v___y_1878_ = v___x_1932_;
v___y_1879_ = v___y_1900_;
v___y_1880_ = v___y_1904_;
v___y_1881_ = v___y_1907_;
v___y_1882_ = v___y_1908_;
v___y_1883_ = v___y_1909_;
v___y_1884_ = v___y_1901_;
v_a_1885_ = v___x_1939_;
goto v___jp_1874_;
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1933_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1933_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
lean_ctor_set_tag(v___x_1944_, 0);
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
v___y_1875_ = v___y_1897_;
v___y_1876_ = v_a_1911_;
v___y_1877_ = v___y_1903_;
v___y_1878_ = v___x_1932_;
v___y_1879_ = v___y_1900_;
v___y_1880_ = v___y_1904_;
v___y_1881_ = v___y_1907_;
v___y_1882_ = v___y_1908_;
v___y_1883_ = v___y_1909_;
v___y_1884_ = v___y_1901_;
v_a_1885_ = v___x_1947_;
goto v___jp_1874_;
}
}
}
}
}
v___jp_1950_:
{
lean_object* v_fst_1957_; lean_object* v_snd_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1991_; 
v_fst_1957_ = lean_ctor_get(v_a_1956_, 0);
v_snd_1958_ = lean_ctor_get(v_a_1956_, 1);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_a_1956_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1960_ = v_a_1956_;
v_isShared_1961_ = v_isSharedCheck_1991_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_snd_1958_);
lean_inc(v_fst_1957_);
lean_dec(v_a_1956_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1991_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = lean_io_mono_ms_now();
v___x_1963_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v___x_1962_);
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_object* v_options_1964_; uint8_t v_hasTrace_1965_; 
lean_dec_ref_known(v___x_1963_, 1);
lean_del_object(v___x_1960_);
lean_del_object(v___x_1755_);
v_options_1964_ = lean_ctor_get(v___y_1953_, 2);
v_hasTrace_1965_ = lean_ctor_get_uint8(v_options_1964_, sizeof(void*)*1);
if (v_hasTrace_1965_ == 0)
{
lean_object* v___x_1966_; 
lean_del_object(v___x_1760_);
lean_inc(v_timeout_1774_);
lean_inc_ref(v_lratPath_1773_);
lean_inc_ref(v_solver_1772_);
v___x_1966_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_1957_, v_solver_1772_, v_lratPath_1773_, v_trimProofs_1775_, v_timeout_1774_, v_binaryProofs_1776_, v_solverMode_1778_, v___y_1953_, v___y_1954_);
v___y_1797_ = v_snd_1958_;
v___y_1798_ = v___y_1951_;
v___y_1799_ = v___y_1952_;
v___y_1800_ = v___y_1953_;
v___y_1801_ = v___y_1954_;
v___y_1802_ = v___y_1955_;
v___y_1803_ = v___x_1966_;
goto v___jp_1796_;
}
else
{
lean_object* v_inheritedTraceOptions_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; uint8_t v___x_1970_; 
v_inheritedTraceOptions_1967_ = lean_ctor_get(v___y_1953_, 13);
v___x_1968_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
lean_inc(v___y_1952_);
v___x_1969_ = l_Lean_Name_append(v___x_1968_, v___y_1952_);
v___x_1970_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1967_, v_options_1964_, v___x_1969_);
lean_dec(v___x_1969_);
if (v___x_1970_ == 0)
{
lean_object* v___x_1971_; uint8_t v___x_1972_; 
v___x_1971_ = l_Lean_trace_profiler;
v___x_1972_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1964_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; 
lean_del_object(v___x_1760_);
lean_inc(v_timeout_1774_);
lean_inc_ref(v_lratPath_1773_);
lean_inc_ref(v_solver_1772_);
v___x_1973_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_1957_, v_solver_1772_, v_lratPath_1773_, v_trimProofs_1775_, v_timeout_1774_, v_binaryProofs_1776_, v_solverMode_1778_, v___y_1953_, v___y_1954_);
v___y_1797_ = v_snd_1958_;
v___y_1798_ = v___y_1951_;
v___y_1799_ = v___y_1952_;
v___y_1800_ = v___y_1953_;
v___y_1801_ = v___y_1954_;
v___y_1802_ = v___y_1955_;
v___y_1803_ = v___x_1973_;
goto v___jp_1796_;
}
else
{
lean_inc_ref(v_lratPath_1773_);
lean_inc_ref(v_solver_1772_);
lean_inc(v_timeout_1774_);
v___y_1895_ = v_timeout_1774_;
v___y_1896_ = v_binaryProofs_1776_;
v___y_1897_ = v_snd_1958_;
v___y_1898_ = v_solver_1772_;
v___y_1899_ = v_solverMode_1778_;
v___y_1900_ = v___y_1951_;
v___y_1901_ = v___x_1970_;
v___y_1902_ = v_fst_1957_;
v___y_1903_ = v_options_1964_;
v___y_1904_ = v___y_1952_;
v___y_1905_ = v_lratPath_1773_;
v___y_1906_ = v_trimProofs_1775_;
v___y_1907_ = v___y_1953_;
v___y_1908_ = v___y_1954_;
v___y_1909_ = v___y_1955_;
goto v___jp_1894_;
}
}
else
{
lean_inc_ref(v_lratPath_1773_);
lean_inc_ref(v_solver_1772_);
lean_inc(v_timeout_1774_);
v___y_1895_ = v_timeout_1774_;
v___y_1896_ = v_binaryProofs_1776_;
v___y_1897_ = v_snd_1958_;
v___y_1898_ = v_solver_1772_;
v___y_1899_ = v_solverMode_1778_;
v___y_1900_ = v___y_1951_;
v___y_1901_ = v___x_1970_;
v___y_1902_ = v_fst_1957_;
v___y_1903_ = v_options_1964_;
v___y_1904_ = v___y_1952_;
v___y_1905_ = v_lratPath_1773_;
v___y_1906_ = v_trimProofs_1775_;
v___y_1907_ = v___y_1953_;
v___y_1908_ = v___y_1954_;
v___y_1909_ = v___y_1955_;
goto v___jp_1894_;
}
}
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1990_; 
lean_dec(v_snd_1958_);
lean_dec(v_fst_1957_);
lean_del_object(v___x_1769_);
lean_del_object(v___x_1765_);
lean_del_object(v___x_1760_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_1974_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1976_ = v___x_1963_;
v_isShared_1977_ = v_isSharedCheck_1990_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1963_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1990_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v_ref_1978_; lean_object* v___x_1979_; lean_object* v___x_1981_; 
v_ref_1978_ = lean_ctor_get(v___y_1953_, 5);
v___x_1979_ = lean_io_error_to_string(v_a_1974_);
if (v_isShared_1756_ == 0)
{
lean_ctor_set_tag(v___x_1755_, 3);
lean_ctor_set(v___x_1755_, 0, v___x_1979_);
v___x_1981_ = v___x_1755_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1979_);
v___x_1981_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1984_; 
v___x_1982_ = l_Lean_MessageData_ofFormat(v___x_1981_);
lean_inc(v_ref_1978_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 1, v___x_1982_);
lean_ctor_set(v___x_1960_, 0, v_ref_1978_);
v___x_1984_ = v___x_1960_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_ref_1978_);
lean_ctor_set(v_reuseFailAlloc_1988_, 1, v___x_1982_);
v___x_1984_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1986_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_1984_);
v___x_1986_ = v___x_1976_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1984_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
}
}
}
v___jp_1992_:
{
if (lean_obj_tag(v___y_1998_) == 0)
{
lean_object* v_a_1999_; 
v_a_1999_ = lean_ctor_get(v___y_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___y_1998_, 1);
v___y_1951_ = v___y_1993_;
v___y_1952_ = v___y_1994_;
v___y_1953_ = v___y_1995_;
v___y_1954_ = v___y_1996_;
v___y_1955_ = v___y_1997_;
v_a_1956_ = v_a_1999_;
goto v___jp_1950_;
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_del_object(v___x_1769_);
lean_del_object(v___x_1765_);
lean_del_object(v___x_1760_);
lean_del_object(v___x_1755_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2000_ = lean_ctor_get(v___y_1998_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___y_1998_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___y_1998_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___y_1998_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
v___jp_2008_:
{
lean_object* v___x_2019_; double v___x_2020_; double v___x_2021_; double v___x_2022_; double v___x_2023_; double v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2019_ = lean_io_mono_nanos_now();
v___x_2020_ = lean_float_of_nat(v___y_2015_);
v___x_2021_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2022_ = lean_float_div(v___x_2020_, v___x_2021_);
v___x_2023_ = lean_float_of_nat(v___x_2019_);
v___x_2024_ = lean_float_div(v___x_2023_, v___x_2021_);
v___x_2025_ = lean_box_float(v___x_2022_);
v___x_2026_ = lean_box_float(v___x_2024_);
v___x_2027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2025_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2028_, 0, v_a_2018_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
lean_inc(v___y_2011_);
v___x_2029_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2011_, v___x_1781_, v___x_1782_, v___y_2014_, v___y_2009_, v___y_2017_, v___f_1780_, v___x_2028_, v___y_2010_, v___y_2016_, v___y_2012_, v___y_2013_);
v___y_1993_ = v___y_2010_;
v___y_1994_ = v___y_2011_;
v___y_1995_ = v___y_2012_;
v___y_1996_ = v___y_2013_;
v___y_1997_ = v___y_2016_;
v___y_1998_ = v___x_2029_;
goto v___jp_1992_;
}
v___jp_2030_:
{
lean_object* v___x_2041_; double v___x_2042_; double v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2041_ = lean_io_get_num_heartbeats();
v___x_2042_ = lean_float_of_nat(v___y_2033_);
v___x_2043_ = lean_float_of_nat(v___x_2041_);
v___x_2044_ = lean_box_float(v___x_2042_);
v___x_2045_ = lean_box_float(v___x_2043_);
v___x_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2044_);
lean_ctor_set(v___x_2046_, 1, v___x_2045_);
v___x_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2047_, 0, v_a_2040_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
lean_inc(v___y_2034_);
v___x_2048_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2034_, v___x_1781_, v___x_1782_, v___y_2037_, v___y_2031_, v___y_2039_, v___f_1780_, v___x_2047_, v___y_2032_, v___y_2038_, v___y_2035_, v___y_2036_);
v___y_1993_ = v___y_2032_;
v___y_1994_ = v___y_2034_;
v___y_1995_ = v___y_2035_;
v___y_1996_ = v___y_2036_;
v___y_1997_ = v___y_2038_;
v___y_1998_ = v___x_2048_;
goto v___jp_1992_;
}
v___jp_2049_:
{
lean_object* v___x_2058_; lean_object* v_a_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v___x_2058_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2056_);
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref(v___x_2058_);
v___x_2060_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2061_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_2055_, v___x_2060_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
v___x_2062_ = lean_io_mono_nanos_now();
v___x_2063_ = l_IO_lazyPure___redArg(v___f_1783_);
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2063_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2063_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
lean_ctor_set_tag(v___x_2066_, 1);
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
v___y_2009_ = v___y_2051_;
v___y_2010_ = v___y_2052_;
v___y_2011_ = v___y_2053_;
v___y_2012_ = v___y_2054_;
v___y_2013_ = v___y_2056_;
v___y_2014_ = v___y_2055_;
v___y_2015_ = v___x_2062_;
v___y_2016_ = v___y_2057_;
v___y_2017_ = v_a_2059_;
v_a_2018_ = v___x_2069_;
goto v___jp_2008_;
}
}
}
else
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
v___x_2072_ = lean_io_get_num_heartbeats();
v___x_2073_ = l_IO_lazyPure___redArg(v___f_1783_);
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2073_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2073_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set_tag(v___x_2076_, 1);
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
v___y_2031_ = v___y_2051_;
v___y_2032_ = v___y_2052_;
v___y_2033_ = v___x_2072_;
v___y_2034_ = v___y_2053_;
v___y_2035_ = v___y_2054_;
v___y_2036_ = v___y_2056_;
v___y_2037_ = v___y_2055_;
v___y_2038_ = v___y_2057_;
v___y_2039_ = v_a_2059_;
v_a_2040_ = v___x_2079_;
goto v___jp_2030_;
}
}
}
}
v___jp_2082_:
{
lean_object* v___x_2091_; 
v___x_2091_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2));
if (v_hasTrace_2087_ == 0)
{
lean_object* v___x_2092_; lean_object* v_a_2093_; 
v___x_2092_ = l_IO_lazyPure___redArg(v___f_1783_);
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_a_2093_);
lean_dec_ref(v___x_2092_);
v___y_1951_ = v___y_2083_;
v___y_1952_ = v___x_2091_;
v___y_1953_ = v___y_2085_;
v___y_1954_ = v___y_2090_;
v___y_1955_ = v___y_2084_;
v_a_1956_ = v_a_2093_;
goto v___jp_1950_;
}
else
{
lean_object* v___x_2094_; uint8_t v___x_2095_; 
v___x_2094_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25);
v___x_2095_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2089_, v_options_2086_, v___x_2094_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; uint8_t v___x_2097_; 
v___x_2096_ = l_Lean_trace_profiler;
v___x_2097_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_2086_, v___x_2096_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; lean_object* v_a_2099_; 
v___x_2098_ = l_IO_lazyPure___redArg(v___f_1783_);
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref(v___x_2098_);
v___y_1951_ = v___y_2083_;
v___y_1952_ = v___x_2091_;
v___y_1953_ = v___y_2085_;
v___y_1954_ = v___y_2090_;
v___y_1955_ = v___y_2084_;
v_a_1956_ = v_a_2099_;
goto v___jp_1950_;
}
else
{
v___y_2050_ = v_ref_2088_;
v___y_2051_ = v___x_2095_;
v___y_2052_ = v___y_2083_;
v___y_2053_ = v___x_2091_;
v___y_2054_ = v___y_2085_;
v___y_2055_ = v_options_2086_;
v___y_2056_ = v___y_2090_;
v___y_2057_ = v___y_2084_;
goto v___jp_2049_;
}
}
else
{
v___y_2050_ = v_ref_2088_;
v___y_2051_ = v___x_2095_;
v___y_2052_ = v___y_2083_;
v___y_2053_ = v___x_2091_;
v___y_2054_ = v___y_2085_;
v___y_2055_ = v_options_2086_;
v___y_2056_ = v___y_2090_;
v___y_2057_ = v___y_2084_;
goto v___jp_2049_;
}
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2134_; 
lean_dec_ref(v_decls_1758_);
lean_del_object(v___x_1755_);
lean_dec(v_a_1753_);
lean_del_object(v___x_1746_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2119_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2121_ = v___x_1767_;
v_isShared_2122_ = v_isSharedCheck_2134_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_1767_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2134_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2123_ = lean_io_error_to_string(v_a_2119_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set_tag(v___x_1765_, 3);
lean_ctor_set(v___x_1765_, 0, v___x_2123_);
v___x_2125_ = v___x_1765_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2126_ = l_Lean_MessageData_ofFormat(v___x_2125_);
lean_inc(v_ref_1737_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 1, v___x_2126_);
lean_ctor_set(v___x_1760_, 0, v_ref_1737_);
v___x_2128_ = v___x_1760_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_ref_1737_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v___x_2126_);
v___x_2128_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2130_; 
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2128_);
v___x_2130_ = v___x_2121_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2128_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2152_; 
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2139_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2141_ = v___x_1748_;
v_isShared_2142_ = v_isSharedCheck_2152_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_1748_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2152_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2145_; 
v___x_2143_ = lean_io_error_to_string(v_a_2139_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set_tag(v___x_1746_, 3);
lean_ctor_set(v___x_1746_, 0, v___x_2143_);
v___x_2145_ = v___x_1746_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2149_; 
v___x_2146_ = l_Lean_MessageData_ofFormat(v___x_2145_);
lean_inc(v_ref_1737_);
v___x_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2147_, 0, v_ref_1737_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2147_);
v___x_2149_ = v___x_2141_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2147_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
}
}
else
{
lean_object* v___f_2154_; lean_object* v___f_2155_; lean_object* v___f_2156_; lean_object* v___f_2157_; lean_object* v_cls_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; uint8_t v___x_2162_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v_a_2166_; lean_object* v___y_2176_; lean_object* v___y_2177_; lean_object* v_a_2178_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2194_; lean_object* v___y_2195_; uint8_t v___y_2196_; lean_object* v___y_2197_; lean_object* v___y_2198_; lean_object* v_a_2199_; lean_object* v___y_2218_; lean_object* v___y_2219_; uint8_t v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2227_; lean_object* v___y_2228_; uint8_t v___y_2229_; lean_object* v___y_2230_; uint8_t v___y_2231_; lean_object* v___y_2232_; uint8_t v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; lean_object* v_a_2236_; lean_object* v___y_2246_; lean_object* v___y_2247_; uint8_t v___y_2248_; lean_object* v___y_2249_; uint8_t v___y_2250_; lean_object* v___y_2251_; uint8_t v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v_a_2255_; lean_object* v___y_2268_; lean_object* v___y_2269_; uint8_t v___y_2270_; lean_object* v___y_2271_; uint8_t v___y_2272_; uint8_t v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v_a_2302_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v_a_2317_; lean_object* v___y_2320_; lean_object* v___y_2321_; lean_object* v___y_2322_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v_a_2337_; lean_object* v___y_2356_; lean_object* v___y_2357_; lean_object* v___y_2358_; lean_object* v___y_2359_; lean_object* v___y_2360_; lean_object* v___y_2364_; lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___y_2367_; uint8_t v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; lean_object* v_a_2371_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; uint8_t v___y_2384_; lean_object* v___y_2385_; lean_object* v___y_2386_; lean_object* v___y_2387_; lean_object* v_a_2388_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; uint8_t v___y_2404_; uint8_t v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; 
v___f_2154_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__1));
v___f_2155_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__2));
v___f_2156_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__3));
v___f_2157_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__4));
v_cls_2158_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__6));
v___x_2159_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__10));
v___x_2160_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__24));
v___x_2161_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__7, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__7_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__7);
v___x_2162_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1738_, v_options_1736_, v___x_2161_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2480_; uint8_t v___x_2481_; 
v___x_2480_ = l_Lean_trace_profiler;
v___x_2481_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1736_, v___x_2480_);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2980_; 
v___x_2482_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2980_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2980_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2487_; 
v___x_2487_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v_a_2483_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2964_; 
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2964_ == 0)
{
lean_object* v_unused_2965_; 
v_unused_2965_ = lean_ctor_get(v___x_2487_, 0);
lean_dec(v_unused_2965_);
v___x_2489_ = v___x_2487_;
v_isShared_2490_ = v_isSharedCheck_2964_;
goto v_resetjp_2488_;
}
else
{
lean_dec(v___x_2487_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2964_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v_bvExpr_2491_; lean_object* v_unusedHypotheses_2492_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; uint8_t v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v_a_2569_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; uint8_t v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v_a_2593_; uint8_t v___y_2603_; lean_object* v___y_2604_; uint8_t v___y_2605_; uint8_t v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; uint8_t v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v_a_2666_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2730_; uint8_t v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v_a_2740_; lean_object* v___y_2753_; uint8_t v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v_a_2763_; lean_object* v___y_2773_; uint8_t v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2808_; lean_object* v___y_2809_; lean_object* v___y_2810_; lean_object* v___y_2811_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v_a_2877_; lean_object* v___y_2899_; lean_object* v___f_2909_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v_a_2913_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v_a_2928_; 
v_bvExpr_2491_ = lean_ctor_get(v_reflectionResult_1679_, 0);
v_unusedHypotheses_2492_ = lean_ctor_get(v_reflectionResult_1679_, 2);
lean_inc_ref(v_bvExpr_2491_);
v___f_2909_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__1), 2, 1);
lean_closure_set(v___f_2909_, 0, v_bvExpr_2491_);
if (v___x_2162_ == 0)
{
if (v___x_2481_ == 0)
{
lean_object* v___x_2962_; lean_object* v_a_2963_; 
v___x_2962_ = l_IO_lazyPure___redArg(v___f_2909_);
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref(v___x_2962_);
v_a_2877_ = v_a_2963_;
goto v___jp_2876_;
}
else
{
goto v___jp_2937_;
}
}
else
{
goto v___jp_2937_;
}
v___jp_2493_:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2497_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_2496_, v___y_2494_, v___y_2495_, v_atomsAssignment_1680_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
v___x_2498_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2498_, 0, v_goal_1678_);
lean_ctor_set(v___x_2498_, 1, v_unusedHypotheses_2492_);
lean_ctor_set(v___x_2498_, 2, v___x_2497_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 0, v___x_2498_);
v___x_2500_ = v___x_2485_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
lean_object* v___x_2502_; 
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2500_);
v___x_2502_ = v___x_2489_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2500_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
v___jp_2505_:
{
if (lean_obj_tag(v___y_2513_) == 0)
{
lean_object* v_a_2514_; 
v_a_2514_ = lean_ctor_get(v___y_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___y_2513_, 1);
if (lean_obj_tag(v_a_2514_) == 0)
{
lean_object* v_options_2515_; uint8_t v_hasTrace_2516_; 
lean_inc_ref(v_unusedHypotheses_2492_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec_ref(v_ctx_1676_);
v_options_2515_ = lean_ctor_get(v___y_2507_, 2);
v_hasTrace_2516_ = lean_ctor_get_uint8(v_options_2515_, sizeof(void*)*1);
if (v_hasTrace_2516_ == 0)
{
lean_object* v_a_2517_; 
v_a_2517_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v_a_2514_, 1);
v___y_2494_ = v_a_2517_;
v___y_2495_ = v___y_2509_;
v___y_2496_ = v___y_2508_;
goto v___jp_2493_;
}
else
{
lean_object* v_a_2518_; lean_object* v_inheritedTraceOptions_2519_; lean_object* v___x_2520_; uint8_t v___x_2521_; 
v_a_2518_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v_a_2514_, 1);
v_inheritedTraceOptions_2519_ = lean_ctor_get(v___y_2507_, 13);
lean_inc(v___y_2512_);
v___x_2520_ = l_Lean_Name_append(v___x_2160_, v___y_2512_);
v___x_2521_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2519_, v_options_2515_, v___x_2520_);
lean_dec(v___x_2520_);
if (v___x_2521_ == 0)
{
v___y_2494_ = v_a_2518_;
v___y_2495_ = v___y_2509_;
v___y_2496_ = v___y_2508_;
goto v___jp_2493_;
}
else
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__1);
lean_inc(v___y_2512_);
v___x_2523_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_2512_, v___x_2522_, v___y_2511_, v___y_2506_, v___y_2507_, v___y_2510_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_dec_ref_known(v___x_2523_, 1);
v___y_2494_ = v_a_2518_;
v___y_2495_ = v___y_2509_;
v___y_2496_ = v___y_2508_;
goto v___jp_2493_;
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
lean_dec(v_a_2518_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec_ref(v_unusedHypotheses_2492_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec(v_goal_1678_);
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2523_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2523_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
}
}
else
{
lean_object* v_options_2532_; uint8_t v_hasTrace_2533_; 
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec(v_goal_1678_);
v_options_2532_ = lean_ctor_get(v___y_2507_, 2);
v_hasTrace_2533_ = lean_ctor_get_uint8(v_options_2532_, sizeof(void*)*1);
if (v_hasTrace_2533_ == 0)
{
lean_object* v_a_2534_; 
v_a_2534_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v_a_2514_, 1);
v___y_1712_ = v_a_2534_;
v___y_1713_ = v___y_2511_;
v___y_1714_ = v___y_2506_;
v___y_1715_ = v___y_2507_;
v___y_1716_ = v___y_2510_;
goto v___jp_1711_;
}
else
{
lean_object* v_a_2535_; lean_object* v_inheritedTraceOptions_2536_; lean_object* v___x_2537_; uint8_t v___x_2538_; 
v_a_2535_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v_a_2514_, 1);
v_inheritedTraceOptions_2536_ = lean_ctor_get(v___y_2507_, 13);
lean_inc(v___y_2512_);
v___x_2537_ = l_Lean_Name_append(v___x_2160_, v___y_2512_);
v___x_2538_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2536_, v_options_2532_, v___x_2537_);
lean_dec(v___x_2537_);
if (v___x_2538_ == 0)
{
v___y_1712_ = v_a_2535_;
v___y_1713_ = v___y_2511_;
v___y_1714_ = v___y_2506_;
v___y_1715_ = v___y_2507_;
v___y_1716_ = v___y_2510_;
goto v___jp_1711_;
}
else
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__3);
lean_inc(v___y_2512_);
v___x_2540_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v___y_2512_, v___x_2539_, v___y_2511_, v___y_2506_, v___y_2507_, v___y_2510_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_dec_ref_known(v___x_2540_, 1);
v___y_1712_ = v_a_2535_;
v___y_1713_ = v___y_2511_;
v___y_1714_ = v___y_2506_;
v___y_1715_ = v___y_2507_;
v___y_1716_ = v___y_2510_;
goto v___jp_1711_;
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v_a_2535_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec_ref(v_ctx_1676_);
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2540_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2540_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2549_ = lean_ctor_get(v___y_2513_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___y_2513_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___y_2513_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___y_2513_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
}
v___jp_2557_:
{
lean_object* v___x_2570_; double v___x_2571_; double v___x_2572_; double v___x_2573_; double v___x_2574_; double v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2570_ = lean_io_mono_nanos_now();
v___x_2571_ = lean_float_of_nat(v___y_2566_);
v___x_2572_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2573_ = lean_float_div(v___x_2571_, v___x_2572_);
v___x_2574_ = lean_float_of_nat(v___x_2570_);
v___x_2575_ = lean_float_div(v___x_2574_, v___x_2572_);
v___x_2576_ = lean_box_float(v___x_2573_);
v___x_2577_ = lean_box_float(v___x_2575_);
v___x_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2579_, 0, v_a_2569_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
lean_inc(v___y_2568_);
v___x_2580_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_2568_, v_hasTrace_1739_, v___x_2159_, v___y_2563_, v___y_2562_, v___y_2565_, v___f_2154_, v___x_2579_, v___y_2567_, v___y_2558_, v___y_2559_, v___y_2564_);
v___y_2506_ = v___y_2558_;
v___y_2507_ = v___y_2559_;
v___y_2508_ = v___y_2561_;
v___y_2509_ = v___y_2560_;
v___y_2510_ = v___y_2564_;
v___y_2511_ = v___y_2567_;
v___y_2512_ = v___y_2568_;
v___y_2513_ = v___x_2580_;
goto v___jp_2505_;
}
v___jp_2581_:
{
lean_object* v___x_2594_; double v___x_2595_; double v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2594_ = lean_io_get_num_heartbeats();
v___x_2595_ = lean_float_of_nat(v___y_2588_);
v___x_2596_ = lean_float_of_nat(v___x_2594_);
v___x_2597_ = lean_box_float(v___x_2595_);
v___x_2598_ = lean_box_float(v___x_2596_);
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2597_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
v___x_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2600_, 0, v_a_2593_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
lean_inc(v___y_2592_);
v___x_2601_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_2592_, v_hasTrace_1739_, v___x_2159_, v___y_2587_, v___y_2586_, v___y_2590_, v___f_2154_, v___x_2600_, v___y_2591_, v___y_2582_, v___y_2583_, v___y_2589_);
v___y_2506_ = v___y_2582_;
v___y_2507_ = v___y_2583_;
v___y_2508_ = v___y_2585_;
v___y_2509_ = v___y_2584_;
v___y_2510_ = v___y_2589_;
v___y_2511_ = v___y_2591_;
v___y_2512_ = v___y_2592_;
v___y_2513_ = v___x_2601_;
goto v___jp_2505_;
}
v___jp_2602_:
{
lean_object* v___x_2619_; lean_object* v_a_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2619_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2618_);
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref(v___x_2619_);
v___x_2621_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2622_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_2607_, v___x_2621_);
if (v___x_2622_ == 0)
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2623_ = lean_io_mono_nanos_now();
v___x_2624_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_2609_, v___y_2613_, v___y_2608_, v___y_2603_, v___y_2617_, v___y_2605_, v___y_2616_, v___y_2604_, v___y_2618_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2624_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2624_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
lean_ctor_set_tag(v___x_2627_, 1);
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
v___y_2558_ = v___y_2612_;
v___y_2559_ = v___y_2604_;
v___y_2560_ = v___y_2614_;
v___y_2561_ = v___y_2615_;
v___y_2562_ = v___y_2606_;
v___y_2563_ = v___y_2607_;
v___y_2564_ = v___y_2618_;
v___y_2565_ = v_a_2620_;
v___y_2566_ = v___x_2623_;
v___y_2567_ = v___y_2610_;
v___y_2568_ = v___y_2611_;
v_a_2569_ = v___x_2630_;
goto v___jp_2557_;
}
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
v_a_2633_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2624_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2624_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
lean_ctor_set_tag(v___x_2635_, 0);
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
v___y_2558_ = v___y_2612_;
v___y_2559_ = v___y_2604_;
v___y_2560_ = v___y_2614_;
v___y_2561_ = v___y_2615_;
v___y_2562_ = v___y_2606_;
v___y_2563_ = v___y_2607_;
v___y_2564_ = v___y_2618_;
v___y_2565_ = v_a_2620_;
v___y_2566_ = v___x_2623_;
v___y_2567_ = v___y_2610_;
v___y_2568_ = v___y_2611_;
v_a_2569_ = v___x_2638_;
goto v___jp_2557_;
}
}
}
}
else
{
lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2641_ = lean_io_get_num_heartbeats();
v___x_2642_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_2609_, v___y_2613_, v___y_2608_, v___y_2603_, v___y_2617_, v___y_2605_, v___y_2616_, v___y_2604_, v___y_2618_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2642_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2642_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
lean_ctor_set_tag(v___x_2645_, 1);
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
v___y_2582_ = v___y_2612_;
v___y_2583_ = v___y_2604_;
v___y_2584_ = v___y_2614_;
v___y_2585_ = v___y_2615_;
v___y_2586_ = v___y_2606_;
v___y_2587_ = v___y_2607_;
v___y_2588_ = v___x_2641_;
v___y_2589_ = v___y_2618_;
v___y_2590_ = v_a_2620_;
v___y_2591_ = v___y_2610_;
v___y_2592_ = v___y_2611_;
v_a_2593_ = v___x_2648_;
goto v___jp_2581_;
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
v_a_2651_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2642_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2642_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
lean_ctor_set_tag(v___x_2653_, 0);
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
v___y_2582_ = v___y_2612_;
v___y_2583_ = v___y_2604_;
v___y_2584_ = v___y_2614_;
v___y_2585_ = v___y_2615_;
v___y_2586_ = v___y_2606_;
v___y_2587_ = v___y_2607_;
v___y_2588_ = v___x_2641_;
v___y_2589_ = v___y_2618_;
v___y_2590_ = v_a_2620_;
v___y_2591_ = v___y_2610_;
v___y_2592_ = v___y_2611_;
v_a_2593_ = v___x_2656_;
goto v___jp_2581_;
}
}
}
}
}
v___jp_2659_:
{
lean_object* v_fst_2667_; lean_object* v_snd_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2711_; 
v_fst_2667_ = lean_ctor_get(v_a_2666_, 0);
v_snd_2668_ = lean_ctor_get(v_a_2666_, 1);
v_isSharedCheck_2711_ = !lean_is_exclusive(v_a_2666_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2670_ = v_a_2666_;
v_isShared_2671_ = v_isSharedCheck_2711_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_snd_2668_);
lean_inc(v_fst_2667_);
lean_dec(v_a_2666_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2711_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = lean_io_mono_ms_now();
v___x_2673_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v___x_2672_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_options_2674_; uint8_t v_hasTrace_2675_; 
lean_dec_ref_known(v___x_2673_, 1);
lean_del_object(v___x_2670_);
v_options_2674_ = lean_ctor_get(v___y_2661_, 2);
v_hasTrace_2675_ = lean_ctor_get_uint8(v_options_2674_, sizeof(void*)*1);
if (v_hasTrace_2675_ == 0)
{
lean_object* v_config_2676_; lean_object* v_solver_2677_; lean_object* v_lratPath_2678_; lean_object* v_timeout_2679_; uint8_t v_trimProofs_2680_; uint8_t v_binaryProofs_2681_; uint8_t v_solverMode_2682_; lean_object* v___x_2683_; 
v_config_2676_ = lean_ctor_get(v_ctx_1676_, 5);
v_solver_2677_ = lean_ctor_get(v_ctx_1676_, 3);
v_lratPath_2678_ = lean_ctor_get(v_ctx_1676_, 4);
v_timeout_2679_ = lean_ctor_get(v_config_2676_, 0);
v_trimProofs_2680_ = lean_ctor_get_uint8(v_config_2676_, sizeof(void*)*2);
v_binaryProofs_2681_ = lean_ctor_get_uint8(v_config_2676_, sizeof(void*)*2 + 1);
v_solverMode_2682_ = lean_ctor_get_uint8(v_config_2676_, sizeof(void*)*2 + 10);
lean_inc(v_timeout_2679_);
lean_inc_ref(v_lratPath_2678_);
lean_inc_ref(v_solver_2677_);
v___x_2683_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_2667_, v_solver_2677_, v_lratPath_2678_, v_trimProofs_2680_, v_timeout_2679_, v_binaryProofs_2681_, v_solverMode_2682_, v___y_2661_, v___y_2663_);
v___y_2506_ = v___y_2660_;
v___y_2507_ = v___y_2661_;
v___y_2508_ = v_snd_2668_;
v___y_2509_ = v___y_2662_;
v___y_2510_ = v___y_2663_;
v___y_2511_ = v___y_2665_;
v___y_2512_ = v___y_2664_;
v___y_2513_ = v___x_2683_;
goto v___jp_2505_;
}
else
{
lean_object* v_config_2684_; lean_object* v_solver_2685_; lean_object* v_lratPath_2686_; lean_object* v_timeout_2687_; uint8_t v_trimProofs_2688_; uint8_t v_binaryProofs_2689_; uint8_t v_solverMode_2690_; lean_object* v_inheritedTraceOptions_2691_; lean_object* v___x_2692_; uint8_t v___x_2693_; 
v_config_2684_ = lean_ctor_get(v_ctx_1676_, 5);
v_solver_2685_ = lean_ctor_get(v_ctx_1676_, 3);
v_lratPath_2686_ = lean_ctor_get(v_ctx_1676_, 4);
v_timeout_2687_ = lean_ctor_get(v_config_2684_, 0);
v_trimProofs_2688_ = lean_ctor_get_uint8(v_config_2684_, sizeof(void*)*2);
v_binaryProofs_2689_ = lean_ctor_get_uint8(v_config_2684_, sizeof(void*)*2 + 1);
v_solverMode_2690_ = lean_ctor_get_uint8(v_config_2684_, sizeof(void*)*2 + 10);
v_inheritedTraceOptions_2691_ = lean_ctor_get(v___y_2661_, 13);
lean_inc(v___y_2664_);
v___x_2692_ = l_Lean_Name_append(v___x_2160_, v___y_2664_);
v___x_2693_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2691_, v_options_2674_, v___x_2692_);
lean_dec(v___x_2692_);
if (v___x_2693_ == 0)
{
uint8_t v___x_2694_; 
v___x_2694_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_2674_, v___x_2480_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; 
lean_inc(v_timeout_2687_);
lean_inc_ref(v_lratPath_2686_);
lean_inc_ref(v_solver_2685_);
v___x_2695_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_2667_, v_solver_2685_, v_lratPath_2686_, v_trimProofs_2688_, v_timeout_2687_, v_binaryProofs_2689_, v_solverMode_2690_, v___y_2661_, v___y_2663_);
v___y_2506_ = v___y_2660_;
v___y_2507_ = v___y_2661_;
v___y_2508_ = v_snd_2668_;
v___y_2509_ = v___y_2662_;
v___y_2510_ = v___y_2663_;
v___y_2511_ = v___y_2665_;
v___y_2512_ = v___y_2664_;
v___y_2513_ = v___x_2695_;
goto v___jp_2505_;
}
else
{
lean_inc(v_timeout_2687_);
lean_inc_ref(v_solver_2685_);
lean_inc_ref(v_lratPath_2686_);
v___y_2603_ = v_trimProofs_2688_;
v___y_2604_ = v___y_2661_;
v___y_2605_ = v_binaryProofs_2689_;
v___y_2606_ = v___x_2693_;
v___y_2607_ = v_options_2674_;
v___y_2608_ = v_lratPath_2686_;
v___y_2609_ = v_fst_2667_;
v___y_2610_ = v___y_2665_;
v___y_2611_ = v___y_2664_;
v___y_2612_ = v___y_2660_;
v___y_2613_ = v_solver_2685_;
v___y_2614_ = v___y_2662_;
v___y_2615_ = v_snd_2668_;
v___y_2616_ = v_solverMode_2690_;
v___y_2617_ = v_timeout_2687_;
v___y_2618_ = v___y_2663_;
goto v___jp_2602_;
}
}
else
{
lean_inc(v_timeout_2687_);
lean_inc_ref(v_solver_2685_);
lean_inc_ref(v_lratPath_2686_);
v___y_2603_ = v_trimProofs_2688_;
v___y_2604_ = v___y_2661_;
v___y_2605_ = v_binaryProofs_2689_;
v___y_2606_ = v___x_2693_;
v___y_2607_ = v_options_2674_;
v___y_2608_ = v_lratPath_2686_;
v___y_2609_ = v_fst_2667_;
v___y_2610_ = v___y_2665_;
v___y_2611_ = v___y_2664_;
v___y_2612_ = v___y_2660_;
v___y_2613_ = v_solver_2685_;
v___y_2614_ = v___y_2662_;
v___y_2615_ = v_snd_2668_;
v___y_2616_ = v_solverMode_2690_;
v___y_2617_ = v_timeout_2687_;
v___y_2618_ = v___y_2663_;
goto v___jp_2602_;
}
}
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2710_; 
lean_dec(v_snd_2668_);
lean_dec(v_fst_2667_);
lean_dec(v___y_2662_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2696_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2698_ = v___x_2673_;
v_isShared_2699_ = v_isSharedCheck_2710_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2673_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2710_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v_ref_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2705_; 
v_ref_2700_ = lean_ctor_get(v___y_2661_, 5);
v___x_2701_ = lean_io_error_to_string(v_a_2696_);
v___x_2702_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2701_);
v___x_2703_ = l_Lean_MessageData_ofFormat(v___x_2702_);
lean_inc(v_ref_2700_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 1, v___x_2703_);
lean_ctor_set(v___x_2670_, 0, v_ref_2700_);
v___x_2705_ = v___x_2670_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_ref_2700_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2707_; 
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v___x_2705_);
v___x_2707_ = v___x_2698_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
}
v___jp_2712_:
{
if (lean_obj_tag(v___y_2719_) == 0)
{
lean_object* v_a_2720_; 
v_a_2720_ = lean_ctor_get(v___y_2719_, 0);
lean_inc(v_a_2720_);
lean_dec_ref_known(v___y_2719_, 1);
v___y_2660_ = v___y_2713_;
v___y_2661_ = v___y_2714_;
v___y_2662_ = v___y_2715_;
v___y_2663_ = v___y_2716_;
v___y_2664_ = v___y_2718_;
v___y_2665_ = v___y_2717_;
v_a_2666_ = v_a_2720_;
goto v___jp_2659_;
}
else
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2728_; 
lean_dec(v___y_2715_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2721_ = lean_ctor_get(v___y_2719_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___y_2719_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2723_ = v___y_2719_;
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___y_2719_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2726_; 
if (v_isShared_2724_ == 0)
{
v___x_2726_ = v___x_2723_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_a_2721_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
v___jp_2729_:
{
lean_object* v___x_2741_; double v___x_2742_; double v___x_2743_; double v___x_2744_; double v___x_2745_; double v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2741_ = lean_io_mono_nanos_now();
v___x_2742_ = lean_float_of_nat(v___y_2733_);
v___x_2743_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2744_ = lean_float_div(v___x_2742_, v___x_2743_);
v___x_2745_ = lean_float_of_nat(v___x_2741_);
v___x_2746_ = lean_float_div(v___x_2745_, v___x_2743_);
v___x_2747_ = lean_box_float(v___x_2744_);
v___x_2748_ = lean_box_float(v___x_2746_);
v___x_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2747_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
v___x_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2750_, 0, v_a_2740_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
lean_inc(v___y_2739_);
v___x_2751_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2739_, v_hasTrace_1739_, v___x_2159_, v___y_2736_, v___y_2731_, v___y_2735_, v___f_2155_, v___x_2750_, v___y_2738_, v___y_2730_, v___y_2732_, v___y_2737_);
v___y_2713_ = v___y_2730_;
v___y_2714_ = v___y_2732_;
v___y_2715_ = v___y_2734_;
v___y_2716_ = v___y_2737_;
v___y_2717_ = v___y_2738_;
v___y_2718_ = v___y_2739_;
v___y_2719_ = v___x_2751_;
goto v___jp_2712_;
}
v___jp_2752_:
{
lean_object* v___x_2764_; double v___x_2765_; double v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2764_ = lean_io_get_num_heartbeats();
v___x_2765_ = lean_float_of_nat(v___y_2759_);
v___x_2766_ = lean_float_of_nat(v___x_2764_);
v___x_2767_ = lean_box_float(v___x_2765_);
v___x_2768_ = lean_box_float(v___x_2766_);
v___x_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v_a_2763_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
lean_inc(v___y_2762_);
v___x_2771_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2762_, v_hasTrace_1739_, v___x_2159_, v___y_2758_, v___y_2754_, v___y_2757_, v___f_2155_, v___x_2770_, v___y_2761_, v___y_2753_, v___y_2755_, v___y_2760_);
v___y_2713_ = v___y_2753_;
v___y_2714_ = v___y_2755_;
v___y_2715_ = v___y_2756_;
v___y_2716_ = v___y_2760_;
v___y_2717_ = v___y_2761_;
v___y_2718_ = v___y_2762_;
v___y_2719_ = v___x_2771_;
goto v___jp_2712_;
}
v___jp_2772_:
{
lean_object* v___x_2783_; lean_object* v_a_2784_; lean_object* v___x_2785_; uint8_t v___x_2786_; 
v___x_2783_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2780_);
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref(v___x_2783_);
v___x_2785_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2786_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v___y_2779_, v___x_2785_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v___x_2787_ = lean_io_mono_nanos_now();
v___x_2788_ = l_IO_lazyPure___redArg(v___y_2773_);
v_a_2789_ = lean_ctor_get(v___x_2788_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2788_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2788_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
lean_ctor_set_tag(v___x_2791_, 1);
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
v___y_2730_ = v___y_2775_;
v___y_2731_ = v___y_2774_;
v___y_2732_ = v___y_2776_;
v___y_2733_ = v___x_2787_;
v___y_2734_ = v___y_2778_;
v___y_2735_ = v_a_2784_;
v___y_2736_ = v___y_2779_;
v___y_2737_ = v___y_2780_;
v___y_2738_ = v___y_2782_;
v___y_2739_ = v___y_2781_;
v_a_2740_ = v___x_2794_;
goto v___jp_2729_;
}
}
}
else
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
v___x_2797_ = lean_io_get_num_heartbeats();
v___x_2798_ = l_IO_lazyPure___redArg(v___y_2773_);
v_a_2799_ = lean_ctor_get(v___x_2798_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2798_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2798_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
lean_ctor_set_tag(v___x_2801_, 1);
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
v___y_2753_ = v___y_2775_;
v___y_2754_ = v___y_2774_;
v___y_2755_ = v___y_2776_;
v___y_2756_ = v___y_2778_;
v___y_2757_ = v_a_2784_;
v___y_2758_ = v___y_2779_;
v___y_2759_ = v___x_2797_;
v___y_2760_ = v___y_2780_;
v___y_2761_ = v___y_2782_;
v___y_2762_ = v___y_2781_;
v_a_2763_ = v___x_2804_;
goto v___jp_2752_;
}
}
}
}
v___jp_2807_:
{
lean_object* v_options_2814_; lean_object* v_ref_2815_; lean_object* v_inheritedTraceOptions_2816_; uint8_t v_hasTrace_2817_; lean_object* v___x_2818_; 
v_options_2814_ = lean_ctor_get(v___y_2812_, 2);
v_ref_2815_ = lean_ctor_get(v___y_2812_, 5);
v_inheritedTraceOptions_2816_ = lean_ctor_get(v___y_2812_, 13);
v_hasTrace_2817_ = lean_ctor_get_uint8(v_options_2814_, sizeof(void*)*1);
v___x_2818_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__2));
if (v_hasTrace_2817_ == 0)
{
lean_object* v___x_2819_; lean_object* v_a_2820_; 
v___x_2819_ = l_IO_lazyPure___redArg(v___y_2808_);
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2820_);
lean_dec_ref(v___x_2819_);
v___y_2660_ = v___y_2811_;
v___y_2661_ = v___y_2812_;
v___y_2662_ = v___y_2809_;
v___y_2663_ = v___y_2813_;
v___y_2664_ = v___x_2818_;
v___y_2665_ = v___y_2810_;
v_a_2666_ = v_a_2820_;
goto v___jp_2659_;
}
else
{
lean_object* v___x_2821_; uint8_t v___x_2822_; 
v___x_2821_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__25);
v___x_2822_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2816_, v_options_2814_, v___x_2821_);
if (v___x_2822_ == 0)
{
uint8_t v___x_2823_; 
v___x_2823_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_2814_, v___x_2480_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; lean_object* v_a_2825_; 
v___x_2824_ = l_IO_lazyPure___redArg(v___y_2808_);
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref(v___x_2824_);
v___y_2660_ = v___y_2811_;
v___y_2661_ = v___y_2812_;
v___y_2662_ = v___y_2809_;
v___y_2663_ = v___y_2813_;
v___y_2664_ = v___x_2818_;
v___y_2665_ = v___y_2810_;
v_a_2666_ = v_a_2825_;
goto v___jp_2659_;
}
else
{
v___y_2773_ = v___y_2808_;
v___y_2774_ = v___x_2822_;
v___y_2775_ = v___y_2811_;
v___y_2776_ = v___y_2812_;
v___y_2777_ = v_ref_2815_;
v___y_2778_ = v___y_2809_;
v___y_2779_ = v_options_2814_;
v___y_2780_ = v___y_2813_;
v___y_2781_ = v___x_2818_;
v___y_2782_ = v___y_2810_;
goto v___jp_2772_;
}
}
else
{
v___y_2773_ = v___y_2808_;
v___y_2774_ = v___x_2822_;
v___y_2775_ = v___y_2811_;
v___y_2776_ = v___y_2812_;
v___y_2777_ = v_ref_2815_;
v___y_2778_ = v___y_2809_;
v___y_2779_ = v_options_2814_;
v___y_2780_ = v___y_2813_;
v___y_2781_ = v___x_2818_;
v___y_2782_ = v___y_2810_;
goto v___jp_2772_;
}
}
}
v___jp_2826_:
{
lean_object* v___x_2834_; lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2875_; 
v___x_2834_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2837_ = v___x_2834_;
v_isShared_2838_ = v_isSharedCheck_2875_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2834_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2875_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; 
v___x_2839_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v_a_2835_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_config_2840_; uint8_t v_graphviz_2841_; 
lean_dec_ref_known(v___x_2839_, 1);
v_config_2840_ = lean_ctor_get(v_ctx_1676_, 5);
v_graphviz_2841_ = lean_ctor_get_uint8(v_config_2840_, sizeof(void*)*2 + 8);
if (v_graphviz_2841_ == 0)
{
lean_del_object(v___x_2837_);
lean_dec_ref(v___y_2829_);
v___y_2808_ = v___y_2827_;
v___y_2809_ = v___y_2828_;
v___y_2810_ = v___y_2830_;
v___y_2811_ = v___y_2831_;
v___y_2812_ = v___y_2832_;
v___y_2813_ = v___y_2833_;
goto v___jp_2807_;
}
else
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2842_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6___closed__6);
v___x_2843_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v___y_2829_);
v___x_2844_ = l_IO_FS_writeFile(v___x_2842_, v___x_2843_);
lean_dec_ref(v___x_2843_);
if (lean_obj_tag(v___x_2844_) == 0)
{
lean_dec_ref_known(v___x_2844_, 1);
lean_del_object(v___x_2837_);
v___y_2808_ = v___y_2827_;
v___y_2809_ = v___y_2828_;
v___y_2810_ = v___y_2830_;
v___y_2811_ = v___y_2831_;
v___y_2812_ = v___y_2832_;
v___y_2813_ = v___y_2833_;
goto v___jp_2807_;
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2859_; 
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2845_ = lean_ctor_get(v___x_2844_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2844_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2847_ = v___x_2844_;
v_isShared_2848_ = v_isSharedCheck_2859_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2844_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2859_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v_ref_2849_; lean_object* v___x_2850_; lean_object* v___x_2852_; 
v_ref_2849_ = lean_ctor_get(v___y_2832_, 5);
v___x_2850_ = lean_io_error_to_string(v_a_2845_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set_tag(v___x_2837_, 3);
lean_ctor_set(v___x_2837_, 0, v___x_2850_);
v___x_2852_ = v___x_2837_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2850_);
v___x_2852_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2856_; 
v___x_2853_ = l_Lean_MessageData_ofFormat(v___x_2852_);
lean_inc(v_ref_2849_);
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v_ref_2849_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 0, v___x_2854_);
v___x_2856_ = v___x_2847_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2854_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2860_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2862_ = v___x_2839_;
v_isShared_2863_ = v_isSharedCheck_2874_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2839_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2874_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v_ref_2864_; lean_object* v___x_2865_; lean_object* v___x_2867_; 
v_ref_2864_ = lean_ctor_get(v___y_2832_, 5);
v___x_2865_ = lean_io_error_to_string(v_a_2860_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set_tag(v___x_2837_, 3);
lean_ctor_set(v___x_2837_, 0, v___x_2865_);
v___x_2867_ = v___x_2837_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2868_ = l_Lean_MessageData_ofFormat(v___x_2867_);
lean_inc(v_ref_2864_);
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v_ref_2864_);
lean_ctor_set(v___x_2869_, 1, v___x_2868_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v___x_2869_);
v___x_2871_ = v___x_2862_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
}
}
v___jp_2876_:
{
lean_object* v_aig_2878_; lean_object* v_decls_2879_; lean_object* v___f_2880_; lean_object* v___x_2881_; 
v_aig_2878_ = lean_ctor_get(v_a_2877_, 0);
v_decls_2879_ = lean_ctor_get(v_aig_2878_, 0);
lean_inc_ref(v_a_2877_);
v___f_2880_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__4), 2, 1);
lean_closure_set(v___f_2880_, 0, v_a_2877_);
v___x_2881_ = lean_array_get_size(v_decls_2879_);
if (v___x_2162_ == 0)
{
v___y_2827_ = v___f_2880_;
v___y_2828_ = v___x_2881_;
v___y_2829_ = v_a_2877_;
v___y_2830_ = v_a_1681_;
v___y_2831_ = v_a_1682_;
v___y_2832_ = v_a_1683_;
v___y_2833_ = v_a_1684_;
goto v___jp_2826_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2882_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__8));
v___x_2883_ = l_Nat_reprFast(v___x_2881_);
v___x_2884_ = lean_string_append(v___x_2882_, v___x_2883_);
lean_dec_ref(v___x_2883_);
v___x_2885_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__9));
v___x_2886_ = lean_string_append(v___x_2884_, v___x_2885_);
v___x_2887_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
v___x_2888_ = l_Lean_MessageData_ofFormat(v___x_2887_);
v___x_2889_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v_cls_2158_, v___x_2888_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_dec_ref_known(v___x_2889_, 1);
v___y_2827_ = v___f_2880_;
v___y_2828_ = v___x_2881_;
v___y_2829_ = v_a_2877_;
v___y_2830_ = v_a_1681_;
v___y_2831_ = v_a_1682_;
v___y_2832_ = v_a_1683_;
v___y_2833_ = v_a_1684_;
goto v___jp_2826_;
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec_ref(v___f_2880_);
lean_dec_ref(v_a_2877_);
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2889_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2889_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
}
v___jp_2898_:
{
if (lean_obj_tag(v___y_2899_) == 0)
{
lean_object* v_a_2900_; 
v_a_2900_ = lean_ctor_get(v___y_2899_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___y_2899_, 1);
v_a_2877_ = v_a_2900_;
goto v___jp_2876_;
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_del_object(v___x_2489_);
lean_del_object(v___x_2485_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2901_ = lean_ctor_get(v___y_2899_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___y_2899_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___y_2899_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___y_2899_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
v___jp_2910_:
{
lean_object* v___x_2914_; double v___x_2915_; double v___x_2916_; double v___x_2917_; double v___x_2918_; double v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2914_ = lean_io_mono_nanos_now();
v___x_2915_ = lean_float_of_nat(v___y_2912_);
v___x_2916_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2917_ = lean_float_div(v___x_2915_, v___x_2916_);
v___x_2918_ = lean_float_of_nat(v___x_2914_);
v___x_2919_ = lean_float_div(v___x_2918_, v___x_2916_);
v___x_2920_ = lean_box_float(v___x_2917_);
v___x_2921_ = lean_box_float(v___x_2919_);
v___x_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2920_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v_a_2913_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2158_, v_hasTrace_1739_, v___x_2159_, v_options_1736_, v___x_2162_, v___y_2911_, v___f_2156_, v___x_2923_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2899_ = v___x_2924_;
goto v___jp_2898_;
}
v___jp_2925_:
{
lean_object* v___x_2929_; double v___x_2930_; double v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2929_ = lean_io_get_num_heartbeats();
v___x_2930_ = lean_float_of_nat(v___y_2926_);
v___x_2931_ = lean_float_of_nat(v___x_2929_);
v___x_2932_ = lean_box_float(v___x_2930_);
v___x_2933_ = lean_box_float(v___x_2931_);
v___x_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2932_);
lean_ctor_set(v___x_2934_, 1, v___x_2933_);
v___x_2935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2935_, 0, v_a_2928_);
lean_ctor_set(v___x_2935_, 1, v___x_2934_);
v___x_2936_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2158_, v_hasTrace_1739_, v___x_2159_, v_options_1736_, v___x_2162_, v___y_2927_, v___f_2156_, v___x_2935_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2899_ = v___x_2936_;
goto v___jp_2898_;
}
v___jp_2937_:
{
lean_object* v___x_2938_; lean_object* v_a_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2938_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_1684_);
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref(v___x_2938_);
v___x_2940_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2941_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1736_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
v___x_2942_ = lean_io_mono_nanos_now();
v___x_2943_ = l_IO_lazyPure___redArg(v___f_2909_);
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2946_ = v___x_2943_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2943_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
lean_ctor_set_tag(v___x_2946_, 1);
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2944_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
v___y_2911_ = v_a_2939_;
v___y_2912_ = v___x_2942_;
v_a_2913_ = v___x_2949_;
goto v___jp_2910_;
}
}
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v___x_2952_ = lean_io_get_num_heartbeats();
v___x_2953_ = l_IO_lazyPure___redArg(v___f_2909_);
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2953_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2953_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
lean_ctor_set_tag(v___x_2956_, 1);
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
v___y_2926_ = v___x_2952_;
v___y_2927_ = v_a_2939_;
v_a_2928_ = v___x_2959_;
goto v___jp_2925_;
}
}
}
}
}
}
else
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2979_; 
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2966_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2968_ = v___x_2487_;
v_isShared_2969_ = v_isSharedCheck_2979_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2487_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2979_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v___x_2972_; 
v___x_2970_ = lean_io_error_to_string(v_a_2966_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set_tag(v___x_2485_, 3);
lean_ctor_set(v___x_2485_, 0, v___x_2970_);
v___x_2972_ = v___x_2485_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v___x_2970_);
v___x_2972_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2976_; 
v___x_2973_ = l_Lean_MessageData_ofFormat(v___x_2972_);
lean_inc(v_ref_1737_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v_ref_1737_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2974_);
v___x_2976_ = v___x_2968_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
}
}
}
else
{
goto v___jp_2431_;
}
}
else
{
goto v___jp_2431_;
}
v___jp_2163_:
{
lean_object* v___x_2167_; double v___x_2168_; double v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2167_ = lean_io_get_num_heartbeats();
v___x_2168_ = lean_float_of_nat(v___y_2164_);
v___x_2169_ = lean_float_of_nat(v___x_2167_);
v___x_2170_ = lean_box_float(v___x_2168_);
v___x_2171_ = lean_box_float(v___x_2169_);
v___x_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2170_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_a_2166_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v_cls_2158_, v_hasTrace_1739_, v___x_2159_, v_options_1736_, v___x_2162_, v___y_2165_, v___f_2157_, v___x_2173_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
return v___x_2174_;
}
v___jp_2175_:
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2179_, 0, v_a_2178_);
v___y_2164_ = v___y_2176_;
v___y_2165_ = v___y_2177_;
v_a_2166_ = v___x_2179_;
goto v___jp_2163_;
}
v___jp_2180_:
{
if (lean_obj_tag(v___y_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
v_a_2184_ = lean_ctor_get(v___y_2183_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___y_2183_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___y_2183_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___y_2183_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
lean_ctor_set_tag(v___x_2186_, 1);
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
v___y_2164_ = v___y_2181_;
v___y_2165_ = v___y_2182_;
v_a_2166_ = v___x_2189_;
goto v___jp_2163_;
}
}
}
else
{
lean_object* v_a_2192_; 
v_a_2192_ = lean_ctor_get(v___y_2183_, 0);
lean_inc(v_a_2192_);
lean_dec_ref_known(v___y_2183_, 1);
v___y_2176_ = v___y_2181_;
v___y_2177_ = v___y_2182_;
v_a_2178_ = v_a_2192_;
goto v___jp_2175_;
}
}
v___jp_2193_:
{
lean_object* v_aig_2200_; lean_object* v_decls_2201_; lean_object* v___f_2202_; lean_object* v___x_2203_; 
v_aig_2200_ = lean_ctor_get(v_a_2199_, 0);
v_decls_2201_ = lean_ctor_get(v_aig_2200_, 0);
lean_inc_ref(v_a_2199_);
v___f_2202_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__4), 2, 1);
lean_closure_set(v___f_2202_, 0, v_a_2199_);
v___x_2203_ = lean_array_get_size(v_decls_2201_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = lean_box(0);
v___x_2205_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10(v___f_1740_, v_csv_1677_, v_ctx_1676_, v___x_2203_, v_atomsAssignment_1680_, v_goal_1678_, v___y_2195_, v_reflectionResult_1679_, v___y_2196_, v___x_2159_, v___f_2154_, v___y_2194_, v___f_2155_, v___f_2202_, v___x_1741_, v___x_1742_, v_a_2199_, v___x_2204_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2181_ = v___y_2197_;
v___y_2182_ = v___y_2198_;
v___y_2183_ = v___x_2205_;
goto v___jp_2180_;
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2206_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__8));
v___x_2207_ = l_Nat_reprFast(v___x_2203_);
v___x_2208_ = lean_string_append(v___x_2206_, v___x_2207_);
lean_dec_ref(v___x_2207_);
v___x_2209_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__9));
v___x_2210_ = lean_string_append(v___x_2208_, v___x_2209_);
v___x_2211_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2210_);
v___x_2212_ = l_Lean_MessageData_ofFormat(v___x_2211_);
v___x_2213_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v_cls_2158_, v___x_2212_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2215_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_a_2214_);
lean_dec_ref_known(v___x_2213_, 1);
v___x_2215_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__10(v___f_1740_, v_csv_1677_, v_ctx_1676_, v___x_2203_, v_atomsAssignment_1680_, v_goal_1678_, v___y_2195_, v_reflectionResult_1679_, v___y_2196_, v___x_2159_, v___f_2154_, v___y_2194_, v___f_2155_, v___f_2202_, v___x_1741_, v___x_1742_, v_a_2199_, v_a_2214_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2181_ = v___y_2197_;
v___y_2182_ = v___y_2198_;
v___y_2183_ = v___x_2215_;
goto v___jp_2180_;
}
else
{
lean_object* v_a_2216_; 
lean_dec_ref(v___f_2202_);
lean_dec_ref(v_a_2199_);
lean_dec_ref(v___y_2195_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2216_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_a_2216_);
lean_dec_ref_known(v___x_2213_, 1);
v___y_2176_ = v___y_2197_;
v___y_2177_ = v___y_2198_;
v_a_2178_ = v_a_2216_;
goto v___jp_2175_;
}
}
}
v___jp_2217_:
{
if (lean_obj_tag(v___y_2223_) == 0)
{
lean_object* v_a_2224_; 
v_a_2224_ = lean_ctor_get(v___y_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v___y_2223_, 1);
v___y_2194_ = v___y_2218_;
v___y_2195_ = v___y_2219_;
v___y_2196_ = v___y_2220_;
v___y_2197_ = v___y_2221_;
v___y_2198_ = v___y_2222_;
v_a_2199_ = v_a_2224_;
goto v___jp_2193_;
}
else
{
lean_object* v_a_2225_; 
lean_dec_ref(v___y_2219_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2225_ = lean_ctor_get(v___y_2223_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___y_2223_, 1);
v___y_2176_ = v___y_2221_;
v___y_2177_ = v___y_2222_;
v_a_2178_ = v_a_2225_;
goto v___jp_2175_;
}
}
v___jp_2226_:
{
lean_object* v___x_2237_; double v___x_2238_; double v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2237_ = lean_io_get_num_heartbeats();
v___x_2238_ = lean_float_of_nat(v___y_2235_);
v___x_2239_ = lean_float_of_nat(v___x_2237_);
v___x_2240_ = lean_box_float(v___x_2238_);
v___x_2241_ = lean_box_float(v___x_2239_);
v___x_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2240_);
lean_ctor_set(v___x_2242_, 1, v___x_2241_);
v___x_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2243_, 0, v_a_2236_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2158_, v___y_2233_, v___x_2159_, v_options_1736_, v___y_2231_, v___y_2232_, v___f_2156_, v___x_2243_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2218_ = v___y_2227_;
v___y_2219_ = v___y_2228_;
v___y_2220_ = v___y_2229_;
v___y_2221_ = v___y_2230_;
v___y_2222_ = v___y_2234_;
v___y_2223_ = v___x_2244_;
goto v___jp_2217_;
}
v___jp_2245_:
{
lean_object* v___x_2256_; double v___x_2257_; double v___x_2258_; double v___x_2259_; double v___x_2260_; double v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2256_ = lean_io_mono_nanos_now();
v___x_2257_ = lean_float_of_nat(v___y_2253_);
v___x_2258_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2259_ = lean_float_div(v___x_2257_, v___x_2258_);
v___x_2260_ = lean_float_of_nat(v___x_2256_);
v___x_2261_ = lean_float_div(v___x_2260_, v___x_2258_);
v___x_2262_ = lean_box_float(v___x_2259_);
v___x_2263_ = lean_box_float(v___x_2261_);
v___x_2264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2262_);
lean_ctor_set(v___x_2264_, 1, v___x_2263_);
v___x_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2265_, 0, v_a_2255_);
lean_ctor_set(v___x_2265_, 1, v___x_2264_);
v___x_2266_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2158_, v___y_2252_, v___x_2159_, v_options_1736_, v___y_2250_, v___y_2251_, v___f_2156_, v___x_2265_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2218_ = v___y_2246_;
v___y_2219_ = v___y_2247_;
v___y_2220_ = v___y_2248_;
v___y_2221_ = v___y_2249_;
v___y_2222_ = v___y_2254_;
v___y_2223_ = v___x_2266_;
goto v___jp_2217_;
}
v___jp_2267_:
{
lean_object* v___x_2276_; 
v___x_2276_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_1684_);
if (v___y_2273_ == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref(v___x_2276_);
v___x_2278_ = lean_io_mono_nanos_now();
v___x_2279_ = l_IO_lazyPure___redArg(v___y_2274_);
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
lean_ctor_set_tag(v___x_2282_, 1);
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
v___y_2246_ = v___y_2268_;
v___y_2247_ = v___y_2269_;
v___y_2248_ = v___y_2270_;
v___y_2249_ = v___y_2271_;
v___y_2250_ = v___y_2272_;
v___y_2251_ = v_a_2277_;
v___y_2252_ = v___y_2273_;
v___y_2253_ = v___x_2278_;
v___y_2254_ = v___y_2275_;
v_a_2255_ = v___x_2285_;
goto v___jp_2245_;
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
v_a_2288_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2288_);
lean_dec_ref(v___x_2276_);
v___x_2289_ = lean_io_get_num_heartbeats();
v___x_2290_ = l_IO_lazyPure___redArg(v___y_2274_);
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2290_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2290_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 1);
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
v___y_2227_ = v___y_2268_;
v___y_2228_ = v___y_2269_;
v___y_2229_ = v___y_2270_;
v___y_2230_ = v___y_2271_;
v___y_2231_ = v___y_2272_;
v___y_2232_ = v_a_2288_;
v___y_2233_ = v___y_2273_;
v___y_2234_ = v___y_2275_;
v___y_2235_ = v___x_2289_;
v_a_2236_ = v___x_2296_;
goto v___jp_2226_;
}
}
}
}
v___jp_2299_:
{
lean_object* v___x_2303_; double v___x_2304_; double v___x_2305_; double v___x_2306_; double v___x_2307_; double v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2303_ = lean_io_mono_nanos_now();
v___x_2304_ = lean_float_of_nat(v___y_2300_);
v___x_2305_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2306_ = lean_float_div(v___x_2304_, v___x_2305_);
v___x_2307_ = lean_float_of_nat(v___x_2303_);
v___x_2308_ = lean_float_div(v___x_2307_, v___x_2305_);
v___x_2309_ = lean_box_float(v___x_2306_);
v___x_2310_ = lean_box_float(v___x_2308_);
v___x_2311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2312_, 0, v_a_2302_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
v___x_2313_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v_cls_2158_, v_hasTrace_1739_, v___x_2159_, v_options_1736_, v___x_2162_, v___y_2301_, v___f_2157_, v___x_2312_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
return v___x_2313_;
}
v___jp_2314_:
{
lean_object* v___x_2318_; 
v___x_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2318_, 0, v_a_2317_);
v___y_2300_ = v___y_2315_;
v___y_2301_ = v___y_2316_;
v_a_2302_ = v___x_2318_;
goto v___jp_2299_;
}
v___jp_2319_:
{
if (lean_obj_tag(v___y_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
v_a_2323_ = lean_ctor_get(v___y_2322_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___y_2322_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___y_2322_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___y_2322_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
lean_ctor_set_tag(v___x_2325_, 1);
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
v___y_2300_ = v___y_2320_;
v___y_2301_ = v___y_2321_;
v_a_2302_ = v___x_2328_;
goto v___jp_2299_;
}
}
}
else
{
lean_object* v_a_2331_; 
v_a_2331_ = lean_ctor_get(v___y_2322_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___y_2322_, 1);
v___y_2315_ = v___y_2320_;
v___y_2316_ = v___y_2321_;
v_a_2317_ = v_a_2331_;
goto v___jp_2314_;
}
}
v___jp_2332_:
{
lean_object* v_aig_2338_; lean_object* v_decls_2339_; lean_object* v___f_2340_; lean_object* v___x_2341_; 
v_aig_2338_ = lean_ctor_get(v_a_2337_, 0);
v_decls_2339_ = lean_ctor_get(v_aig_2338_, 0);
lean_inc_ref(v_a_2337_);
v___f_2340_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__4), 2, 1);
lean_closure_set(v___f_2340_, 0, v_a_2337_);
v___x_2341_ = lean_array_get_size(v_decls_2339_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = lean_box(0);
v___x_2343_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6(v___f_1740_, v_csv_1677_, v_ctx_1676_, v___x_2341_, v_atomsAssignment_1680_, v_goal_1678_, v___y_2334_, v_reflectionResult_1679_, v_hasTrace_1739_, v___x_2159_, v___f_2154_, v___y_2333_, v___f_2155_, v___f_2340_, v___x_1741_, v___x_1742_, v_a_2337_, v___x_2342_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2320_ = v___y_2335_;
v___y_2321_ = v___y_2336_;
v___y_2322_ = v___x_2343_;
goto v___jp_2319_;
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2344_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__8));
v___x_2345_ = l_Nat_reprFast(v___x_2341_);
v___x_2346_ = lean_string_append(v___x_2344_, v___x_2345_);
lean_dec_ref(v___x_2345_);
v___x_2347_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___closed__9));
v___x_2348_ = lean_string_append(v___x_2346_, v___x_2347_);
v___x_2349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
v___x_2350_ = l_Lean_MessageData_ofFormat(v___x_2349_);
v___x_2351_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Main_0__Lean_Meta_Grind_withProtectedMCtx_finalize_spec__1(v_cls_2158_, v___x_2350_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2353_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2353_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__6(v___f_1740_, v_csv_1677_, v_ctx_1676_, v___x_2341_, v_atomsAssignment_1680_, v_goal_1678_, v___y_2334_, v_reflectionResult_1679_, v_hasTrace_1739_, v___x_2159_, v___f_2154_, v___y_2333_, v___f_2155_, v___f_2340_, v___x_1741_, v___x_1742_, v_a_2337_, v_a_2352_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2320_ = v___y_2335_;
v___y_2321_ = v___y_2336_;
v___y_2322_ = v___x_2353_;
goto v___jp_2319_;
}
else
{
lean_object* v_a_2354_; 
lean_dec_ref(v___f_2340_);
lean_dec_ref(v_a_2337_);
lean_dec_ref(v___y_2334_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2354_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2351_, 1);
v___y_2315_ = v___y_2335_;
v___y_2316_ = v___y_2336_;
v_a_2317_ = v_a_2354_;
goto v___jp_2314_;
}
}
}
v___jp_2355_:
{
if (lean_obj_tag(v___y_2360_) == 0)
{
lean_object* v_a_2361_; 
v_a_2361_ = lean_ctor_get(v___y_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___y_2360_, 1);
v___y_2333_ = v___y_2356_;
v___y_2334_ = v___y_2357_;
v___y_2335_ = v___y_2358_;
v___y_2336_ = v___y_2359_;
v_a_2337_ = v_a_2361_;
goto v___jp_2332_;
}
else
{
lean_object* v_a_2362_; 
lean_dec_ref(v___y_2357_);
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2362_ = lean_ctor_get(v___y_2360_, 0);
lean_inc(v_a_2362_);
lean_dec_ref_known(v___y_2360_, 1);
v___y_2315_ = v___y_2358_;
v___y_2316_ = v___y_2359_;
v_a_2317_ = v_a_2362_;
goto v___jp_2314_;
}
}
v___jp_2363_:
{
lean_object* v___x_2372_; double v___x_2373_; double v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2372_ = lean_io_get_num_heartbeats();
v___x_2373_ = lean_float_of_nat(v___y_2367_);
v___x_2374_ = lean_float_of_nat(v___x_2372_);
v___x_2375_ = lean_box_float(v___x_2373_);
v___x_2376_ = lean_box_float(v___x_2374_);
v___x_2377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2375_);
lean_ctor_set(v___x_2377_, 1, v___x_2376_);
v___x_2378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2378_, 0, v_a_2371_);
lean_ctor_set(v___x_2378_, 1, v___x_2377_);
v___x_2379_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2158_, v_hasTrace_1739_, v___x_2159_, v_options_1736_, v___y_2368_, v___y_2369_, v___f_2156_, v___x_2378_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2356_ = v___y_2364_;
v___y_2357_ = v___y_2365_;
v___y_2358_ = v___y_2366_;
v___y_2359_ = v___y_2370_;
v___y_2360_ = v___x_2379_;
goto v___jp_2355_;
}
v___jp_2380_:
{
lean_object* v___x_2389_; double v___x_2390_; double v___x_2391_; double v___x_2392_; double v___x_2393_; double v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2389_ = lean_io_mono_nanos_now();
v___x_2390_ = lean_float_of_nat(v___y_2385_);
v___x_2391_ = lean_float_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof___closed__11);
v___x_2392_ = lean_float_div(v___x_2390_, v___x_2391_);
v___x_2393_ = lean_float_of_nat(v___x_2389_);
v___x_2394_ = lean_float_div(v___x_2393_, v___x_2391_);
v___x_2395_ = lean_box_float(v___x_2392_);
v___x_2396_ = lean_box_float(v___x_2394_);
v___x_2397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2398_, 0, v_a_2388_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
v___x_2399_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2158_, v_hasTrace_1739_, v___x_2159_, v_options_1736_, v___y_2384_, v___y_2386_, v___f_2156_, v___x_2398_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v___y_2356_ = v___y_2381_;
v___y_2357_ = v___y_2382_;
v___y_2358_ = v___y_2383_;
v___y_2359_ = v___y_2387_;
v___y_2360_ = v___x_2399_;
goto v___jp_2355_;
}
v___jp_2400_:
{
lean_object* v___x_2408_; 
v___x_2408_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_1684_);
if (v___y_2404_ == 0)
{
lean_object* v_a_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref(v___x_2408_);
v___x_2410_ = lean_io_mono_nanos_now();
v___x_2411_ = l_IO_lazyPure___redArg(v___y_2406_);
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2411_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2411_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
lean_ctor_set_tag(v___x_2414_, 1);
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
v___y_2381_ = v___y_2401_;
v___y_2382_ = v___y_2402_;
v___y_2383_ = v___y_2403_;
v___y_2384_ = v___y_2405_;
v___y_2385_ = v___x_2410_;
v___y_2386_ = v_a_2409_;
v___y_2387_ = v___y_2407_;
v_a_2388_ = v___x_2417_;
goto v___jp_2380_;
}
}
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
v_a_2420_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2420_);
lean_dec_ref(v___x_2408_);
v___x_2421_ = lean_io_get_num_heartbeats();
v___x_2422_ = l_IO_lazyPure___redArg(v___y_2406_);
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set_tag(v___x_2425_, 1);
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
v___y_2364_ = v___y_2401_;
v___y_2365_ = v___y_2402_;
v___y_2366_ = v___y_2403_;
v___y_2367_ = v___x_2421_;
v___y_2368_ = v___y_2405_;
v___y_2369_ = v_a_2420_;
v___y_2370_ = v___y_2407_;
v_a_2371_ = v___x_2428_;
goto v___jp_2363_;
}
}
}
}
v___jp_2431_:
{
lean_object* v___x_2432_; lean_object* v_a_2433_; lean_object* v___x_2434_; uint8_t v___x_2435_; 
v___x_2432_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_1684_);
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
lean_inc(v_a_2433_);
lean_dec_ref(v___x_2432_);
v___x_2434_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2435_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1736_, v___x_2434_);
if (v___x_2435_ == 0)
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v_a_2438_; lean_object* v___x_2439_; 
v___x_2436_ = lean_io_mono_nanos_now();
v___x_2437_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref(v___x_2437_);
v___x_2439_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v_a_2438_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_bvExpr_2440_; lean_object* v_unusedHypotheses_2441_; lean_object* v___f_2442_; 
lean_dec_ref_known(v___x_2439_, 1);
v_bvExpr_2440_ = lean_ctor_get(v_reflectionResult_1679_, 0);
v_unusedHypotheses_2441_ = lean_ctor_get(v_reflectionResult_1679_, 2);
lean_inc_ref(v_bvExpr_2440_);
v___f_2442_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__1), 2, 1);
lean_closure_set(v___f_2442_, 0, v_bvExpr_2440_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2443_; uint8_t v___x_2444_; 
v___x_2443_ = l_Lean_trace_profiler;
v___x_2444_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1736_, v___x_2443_);
if (v___x_2444_ == 0)
{
lean_object* v___x_2445_; lean_object* v_a_2446_; 
v___x_2445_ = l_IO_lazyPure___redArg(v___f_2442_);
v_a_2446_ = lean_ctor_get(v___x_2445_, 0);
lean_inc(v_a_2446_);
lean_dec_ref(v___x_2445_);
lean_inc_ref(v_unusedHypotheses_2441_);
v___y_2333_ = v___x_2434_;
v___y_2334_ = v_unusedHypotheses_2441_;
v___y_2335_ = v___x_2436_;
v___y_2336_ = v_a_2433_;
v_a_2337_ = v_a_2446_;
goto v___jp_2332_;
}
else
{
lean_inc_ref(v_unusedHypotheses_2441_);
v___y_2401_ = v___x_2434_;
v___y_2402_ = v_unusedHypotheses_2441_;
v___y_2403_ = v___x_2436_;
v___y_2404_ = v___x_2435_;
v___y_2405_ = v___x_2162_;
v___y_2406_ = v___f_2442_;
v___y_2407_ = v_a_2433_;
goto v___jp_2400_;
}
}
else
{
lean_inc_ref(v_unusedHypotheses_2441_);
v___y_2401_ = v___x_2434_;
v___y_2402_ = v_unusedHypotheses_2441_;
v___y_2403_ = v___x_2436_;
v___y_2404_ = v___x_2435_;
v___y_2405_ = v___x_2162_;
v___y_2406_ = v___f_2442_;
v___y_2407_ = v_a_2433_;
goto v___jp_2400_;
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2457_; 
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2447_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2449_ = v___x_2439_;
v_isShared_2450_ = v_isSharedCheck_2457_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2439_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2457_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; lean_object* v___x_2453_; 
v___x_2451_ = lean_io_error_to_string(v_a_2447_);
if (v_isShared_2450_ == 0)
{
lean_ctor_set_tag(v___x_2449_, 3);
lean_ctor_set(v___x_2449_, 0, v___x_2451_);
v___x_2453_ = v___x_2449_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2451_);
v___x_2453_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = l_Lean_MessageData_ofFormat(v___x_2453_);
lean_inc(v_ref_1737_);
v___x_2455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2455_, 0, v_ref_1737_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
v___y_2315_ = v___x_2436_;
v___y_2316_ = v_a_2433_;
v_a_2317_ = v___x_2455_;
goto v___jp_2314_;
}
}
}
}
else
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v_a_2460_; lean_object* v___x_2461_; 
v___x_2458_ = lean_io_get_num_heartbeats();
v___x_2459_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__0(v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2460_);
lean_dec_ref(v___x_2459_);
v___x_2461_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_1677_, v_a_2460_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_bvExpr_2462_; lean_object* v_unusedHypotheses_2463_; lean_object* v___f_2464_; 
lean_dec_ref_known(v___x_2461_, 1);
v_bvExpr_2462_ = lean_ctor_get(v_reflectionResult_1679_, 0);
v_unusedHypotheses_2463_ = lean_ctor_get(v_reflectionResult_1679_, 2);
lean_inc_ref(v_bvExpr_2462_);
v___f_2464_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___lam__1), 2, 1);
lean_closure_set(v___f_2464_, 0, v_bvExpr_2462_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2465_; uint8_t v___x_2466_; 
v___x_2465_ = l_Lean_trace_profiler;
v___x_2466_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVCheck_getSrcDir_spec__0_spec__1_spec__2(v_options_1736_, v___x_2465_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; lean_object* v_a_2468_; 
v___x_2467_ = l_IO_lazyPure___redArg(v___f_2464_);
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2468_);
lean_dec_ref(v___x_2467_);
lean_inc_ref(v_unusedHypotheses_2463_);
v___y_2194_ = v___x_2434_;
v___y_2195_ = v_unusedHypotheses_2463_;
v___y_2196_ = v___x_2435_;
v___y_2197_ = v___x_2458_;
v___y_2198_ = v_a_2433_;
v_a_2199_ = v_a_2468_;
goto v___jp_2193_;
}
else
{
lean_inc_ref(v_unusedHypotheses_2463_);
v___y_2268_ = v___x_2434_;
v___y_2269_ = v_unusedHypotheses_2463_;
v___y_2270_ = v___x_2435_;
v___y_2271_ = v___x_2458_;
v___y_2272_ = v___x_2162_;
v___y_2273_ = v___x_2435_;
v___y_2274_ = v___f_2464_;
v___y_2275_ = v_a_2433_;
goto v___jp_2267_;
}
}
else
{
lean_inc_ref(v_unusedHypotheses_2463_);
v___y_2268_ = v___x_2434_;
v___y_2269_ = v_unusedHypotheses_2463_;
v___y_2270_ = v___x_2435_;
v___y_2271_ = v___x_2458_;
v___y_2272_ = v___x_2162_;
v___y_2273_ = v___x_2435_;
v___y_2274_ = v___f_2464_;
v___y_2275_ = v_a_2433_;
goto v___jp_2267_;
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2479_; 
lean_dec_ref(v_reflectionResult_1679_);
lean_dec(v_goal_1678_);
lean_dec_ref(v_ctx_1676_);
v_a_2469_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2471_ = v___x_2461_;
v_isShared_2472_ = v_isSharedCheck_2479_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2461_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2479_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2473_ = lean_io_error_to_string(v_a_2469_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set_tag(v___x_2471_, 3);
lean_ctor_set(v___x_2471_, 0, v___x_2473_);
v___x_2475_ = v___x_2471_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2476_ = l_Lean_MessageData_ofFormat(v___x_2475_);
lean_inc(v_ref_1737_);
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v_ref_1737_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___y_2176_ = v___x_2458_;
v___y_2177_ = v_a_2433_;
v_a_2178_ = v___x_2477_;
goto v___jp_2175_;
}
}
}
}
}
}
v___jp_1686_:
{
lean_object* v___x_1692_; 
lean_inc_ref(v___y_1687_);
v___x_1692_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(v___y_1687_, v_ctx_1676_, v_reflectionResult_1679_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1702_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1702_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1702_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1700_; 
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_a_1693_);
lean_ctor_set(v___x_1697_, 1, v___y_1687_);
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 0, v___x_1698_);
v___x_1700_ = v___x_1695_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1698_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec_ref(v___y_1687_);
v_a_1703_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1692_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1692_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
v___jp_1711_:
{
lean_object* v___x_1717_; 
lean_inc_ref(v___y_1712_);
v___x_1717_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_timedToReflectionProof(v___y_1712_, v_ctx_1676_, v_reflectionResult_1679_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1727_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1720_ = v___x_1717_;
v_isShared_1721_ = v_isSharedCheck_1727_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1717_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1727_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_a_1718_);
lean_ctor_set(v___x_1722_, 1, v___y_1712_);
v___x_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1723_);
v___x_1725_ = v___x_1720_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
else
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1735_; 
lean_dec_ref(v___y_1712_);
v_a_1728_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1730_ = v___x_1717_;
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1717_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___boxed(lean_object* v_ctx_2981_, lean_object* v_csv_2982_, lean_object* v_goal_2983_, lean_object* v_reflectionResult_2984_, lean_object* v_atomsAssignment_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert(v_ctx_2981_, v_csv_2982_, v_goal_2983_, v_reflectionResult_2984_, v_atomsAssignment_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_);
lean_dec(v_a_2989_);
lean_dec_ref(v_a_2988_);
lean_dec(v_a_2987_);
lean_dec_ref(v_a_2986_);
lean_dec_ref(v_atomsAssignment_2985_);
lean_dec_ref(v_csv_2982_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvUnsatt(lean_object* v_g_2992_, lean_object* v_hypotheses_2993_, lean_object* v_ctx_2994_, lean_object* v_csv_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3003_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_lratBitblastert___boxed), 10, 2);
lean_closure_set(v___x_3003_, 0, v_ctx_2994_);
lean_closure_set(v___x_3003_, 1, v_csv_2995_);
v___x_3004_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___boxed), 12, 3);
lean_closure_set(v___x_3004_, 0, lean_box(0));
lean_closure_set(v___x_3004_, 1, v_g_2992_);
lean_closure_set(v___x_3004_, 2, v___x_3003_);
v___x_3005_ = l_Lean_Meta_Tactic_BVDecide_M_run___redArg(v___x_3004_, v_hypotheses_2993_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvUnsatt___boxed(lean_object* v_g_3006_, lean_object* v_hypotheses_3007_, lean_object* v_ctx_3008_, lean_object* v_csv_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvUnsatt(v_g_3006_, v_hypotheses_3007_, v_ctx_3008_, v_csv_3009_, v_a_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_);
lean_dec(v_a_3015_);
lean_dec_ref(v_a_3014_);
lean_dec(v_a_3013_);
lean_dec_ref(v_a_3012_);
lean_dec(v_a_3011_);
lean_dec_ref(v_a_3010_);
return v_res_3017_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0(lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = lean_io_mono_ms_now();
v___x_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3031_, 0, v___x_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0___boxed(lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0(v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3039_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
return v_res_3044_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__0(void){
_start:
{
lean_object* v___x_3045_; 
v___x_3045_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3045_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__1(void){
_start:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__0, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__0_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__0);
v___x_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
return v___x_3047_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__2(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3048_ = lean_box(0);
v___x_3049_ = lean_unsigned_to_nat(16u);
v___x_3050_ = lean_mk_array(v___x_3049_, v___x_3048_);
return v___x_3050_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__3(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3051_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__2, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__2_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__2);
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3052_);
lean_ctor_set(v___x_3053_, 1, v___x_3051_);
return v___x_3053_;
}
}
static lean_object* _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__4(void){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__3, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__3_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__3);
v___x_3055_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
lean_ctor_set(v___x_3055_, 1, v___x_3054_);
lean_ctor_set(v___x_3055_, 2, v___x_3054_);
lean_ctor_set(v___x_3055_, 3, v___x_3054_);
return v___x_3055_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27(lean_object* v_target_3060_, lean_object* v_ctx_3061_, lean_object* v_csv_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v_a_3080_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3222_; 
v___x_3073_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__1, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__1_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__1);
v___x_3074_ = lean_obj_once(&lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__4, &lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__4_once, _init_lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__4);
v___x_3075_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__5));
v___x_3076_ = 0;
v___x_3077_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3077_, 0, v___x_3073_);
lean_ctor_set(v___x_3077_, 1, v___x_3073_);
lean_ctor_set(v___x_3077_, 2, v___x_3073_);
lean_ctor_set(v___x_3077_, 3, v___x_3074_);
lean_ctor_set(v___x_3077_, 4, v_target_3060_);
lean_ctor_set(v___x_3077_, 5, v___x_3075_);
lean_ctor_set_uint8(v___x_3077_, sizeof(void*)*6, v___x_3076_);
v___x_3078_ = lean_st_mk_ref(v___x_3077_);
v___x_3083_ = l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(v_ctx_3061_);
v___x_3084_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0(v___x_3083_, v___x_3078_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3087_ = v___x_3084_;
v_isShared_3088_ = v_isSharedCheck_3222_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3084_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3222_;
goto v_resetjp_3086_;
}
v___jp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = lean_st_ref_get(v___x_3078_);
lean_dec(v___x_3078_);
lean_dec(v___x_3081_);
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_a_3080_);
return v___x_3082_;
}
v_resetjp_3086_:
{
lean_object* v___x_3089_; 
v___x_3089_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_3062_, v_a_3085_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v___x_3090_; 
lean_dec_ref_known(v___x_3089_, 1);
lean_del_object(v___x_3087_);
v___x_3090_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(v___x_3083_, v___x_3078_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; lean_object* v___x_3092_; lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3198_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3090_, 1);
v___x_3092_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___lam__0(v___x_3083_, v___x_3078_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
lean_dec_ref(v___x_3083_);
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3095_ = v___x_3092_;
v_isShared_3096_ = v_isSharedCheck_3198_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3092_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3198_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3097_; 
v___x_3097_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_3062_, v_a_3093_);
if (lean_obj_tag(v___x_3097_) == 0)
{
uint8_t v___x_3098_; 
lean_dec_ref_known(v___x_3097_, 1);
v___x_3098_ = lean_unbox(v_a_3091_);
lean_dec(v_a_3091_);
if (v___x_3098_ == 0)
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v_target_3101_; lean_object* v_hypotheses_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3099_ = lean_st_ref_get(v___x_3078_);
v___x_3100_ = lean_st_ref_get(v___x_3078_);
v_target_3101_ = lean_ctor_get(v___x_3099_, 4);
lean_inc_ref(v_target_3101_);
lean_dec(v___x_3099_);
v_hypotheses_3102_ = lean_ctor_get(v___x_3100_, 5);
lean_inc_ref(v_hypotheses_3102_);
lean_dec(v___x_3100_);
v___x_3103_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_3101_);
lean_dec_ref(v_target_3101_);
lean_inc_ref(v_csv_3062_);
v___x_3104_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvUnsatt(v___x_3103_, v_hypotheses_3102_, v_ctx_3061_, v_csv_3062_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref_known(v___x_3104_, 1);
if (lean_obj_tag(v_a_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_del_object(v___x_3095_);
lean_dec_ref(v_csv_3062_);
v_a_3106_ = lean_ctor_get(v_a_3105_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_a_3105_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v_a_3105_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v_a_3105_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
v_a_3080_ = v___x_3111_;
goto v___jp_3079_;
}
}
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3157_; 
v_a_3114_ = lean_ctor_get(v_a_3105_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v_a_3105_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3116_ = v_a_3105_;
v_isShared_3117_ = v_isSharedCheck_3157_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v_a_3105_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3157_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3118_ = lean_io_mono_ms_now();
v___x_3119_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_logToCSV(v_csv_3062_, v___x_3118_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v___x_3120_; 
lean_dec_ref_known(v___x_3119_, 1);
v___x_3120_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline(v_csv_3062_);
lean_dec_ref(v_csv_3062_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v___x_3122_; 
lean_dec_ref_known(v___x_3120_, 1);
if (v_isShared_3096_ == 0)
{
lean_ctor_set_tag(v___x_3095_, 1);
lean_ctor_set(v___x_3095_, 0, v_a_3114_);
v___x_3122_ = v___x_3095_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3114_);
v___x_3122_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
lean_object* v___x_3124_; 
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 0, v___x_3122_);
v___x_3124_ = v___x_3116_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3122_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
v_a_3080_ = v___x_3124_;
goto v___jp_3079_;
}
}
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3141_; 
lean_del_object(v___x_3116_);
lean_dec(v_a_3114_);
lean_dec(v___x_3078_);
v_a_3127_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3129_ = v___x_3120_;
v_isShared_3130_ = v_isSharedCheck_3141_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_3120_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3141_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v_ref_3131_; lean_object* v___x_3132_; lean_object* v___x_3134_; 
v_ref_3131_ = lean_ctor_get(v_a_3070_, 5);
v___x_3132_ = lean_io_error_to_string(v_a_3127_);
if (v_isShared_3096_ == 0)
{
lean_ctor_set_tag(v___x_3095_, 3);
lean_ctor_set(v___x_3095_, 0, v___x_3132_);
v___x_3134_ = v___x_3095_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3138_; 
v___x_3135_ = l_Lean_MessageData_ofFormat(v___x_3134_);
lean_inc(v_ref_3131_);
v___x_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3136_, 0, v_ref_3131_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 0, v___x_3136_);
v___x_3138_ = v___x_3129_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3136_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
}
else
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3156_; 
lean_del_object(v___x_3116_);
lean_dec(v_a_3114_);
lean_dec(v___x_3078_);
lean_dec_ref(v_csv_3062_);
v_a_3142_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3144_ = v___x_3119_;
v_isShared_3145_ = v_isSharedCheck_3156_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3119_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3156_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v_ref_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v_ref_3146_ = lean_ctor_get(v_a_3070_, 5);
v___x_3147_ = lean_io_error_to_string(v_a_3142_);
if (v_isShared_3096_ == 0)
{
lean_ctor_set_tag(v___x_3095_, 3);
lean_ctor_set(v___x_3095_, 0, v___x_3147_);
v___x_3149_ = v___x_3095_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3153_; 
v___x_3150_ = l_Lean_MessageData_ofFormat(v___x_3149_);
lean_inc(v_ref_3146_);
v___x_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3151_, 0, v_ref_3146_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
if (v_isShared_3145_ == 0)
{
lean_ctor_set(v___x_3144_, 0, v___x_3151_);
v___x_3153_ = v___x_3144_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_del_object(v___x_3095_);
lean_dec(v___x_3078_);
lean_dec_ref(v_csv_3062_);
v_a_3158_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3104_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3104_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
else
{
lean_object* v___x_3166_; 
lean_dec_ref(v_ctx_3061_);
v___x_3166_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_putline(v_csv_3062_);
lean_dec_ref(v_csv_3062_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v___x_3167_; 
lean_dec_ref_known(v___x_3166_, 1);
lean_del_object(v___x_3095_);
v___x_3167_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___closed__6));
v_a_3080_ = v___x_3167_;
goto v___jp_3079_;
}
else
{
lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3182_; 
lean_dec(v___x_3078_);
v_a_3168_ = lean_ctor_get(v___x_3166_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3170_ = v___x_3166_;
v_isShared_3171_ = v_isSharedCheck_3182_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_dec(v___x_3166_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3182_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v_ref_3172_; lean_object* v___x_3173_; lean_object* v___x_3175_; 
v_ref_3172_ = lean_ctor_get(v_a_3070_, 5);
v___x_3173_ = lean_io_error_to_string(v_a_3168_);
if (v_isShared_3096_ == 0)
{
lean_ctor_set_tag(v___x_3095_, 3);
lean_ctor_set(v___x_3095_, 0, v___x_3173_);
v___x_3175_ = v___x_3095_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3179_; 
v___x_3176_ = l_Lean_MessageData_ofFormat(v___x_3175_);
lean_inc(v_ref_3172_);
v___x_3177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3177_, 0, v_ref_3172_);
lean_ctor_set(v___x_3177_, 1, v___x_3176_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 0, v___x_3177_);
v___x_3179_ = v___x_3170_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v___x_3177_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
}
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3197_; 
lean_dec(v_a_3091_);
lean_dec(v___x_3078_);
lean_dec_ref(v_csv_3062_);
lean_dec_ref(v_ctx_3061_);
v_a_3183_ = lean_ctor_get(v___x_3097_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3097_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3185_ = v___x_3097_;
v_isShared_3186_ = v_isSharedCheck_3197_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3097_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3197_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v_ref_3187_; lean_object* v___x_3188_; lean_object* v___x_3190_; 
v_ref_3187_ = lean_ctor_get(v_a_3070_, 5);
v___x_3188_ = lean_io_error_to_string(v_a_3183_);
if (v_isShared_3096_ == 0)
{
lean_ctor_set_tag(v___x_3095_, 3);
lean_ctor_set(v___x_3095_, 0, v___x_3188_);
v___x_3190_ = v___x_3095_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v___x_3188_);
v___x_3190_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3194_; 
v___x_3191_ = l_Lean_MessageData_ofFormat(v___x_3190_);
lean_inc(v_ref_3187_);
v___x_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3192_, 0, v_ref_3187_);
lean_ctor_set(v___x_3192_, 1, v___x_3191_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 0, v___x_3192_);
v___x_3194_ = v___x_3185_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_dec_ref(v___x_3083_);
lean_dec(v___x_3078_);
lean_dec_ref(v_csv_3062_);
lean_dec_ref(v_ctx_3061_);
v_a_3199_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3090_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3090_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
else
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3221_; 
lean_dec_ref(v___x_3083_);
lean_dec(v___x_3078_);
lean_dec_ref(v_csv_3062_);
lean_dec_ref(v_ctx_3061_);
v_a_3207_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3209_ = v___x_3089_;
v_isShared_3210_ = v_isSharedCheck_3221_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_3089_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3221_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v_ref_3211_; lean_object* v___x_3212_; lean_object* v___x_3214_; 
v_ref_3211_ = lean_ctor_get(v_a_3070_, 5);
v___x_3212_ = lean_io_error_to_string(v_a_3207_);
if (v_isShared_3088_ == 0)
{
lean_ctor_set_tag(v___x_3087_, 3);
lean_ctor_set(v___x_3087_, 0, v___x_3212_);
v___x_3214_ = v___x_3087_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3218_; 
v___x_3215_ = l_Lean_MessageData_ofFormat(v___x_3214_);
lean_inc(v_ref_3211_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_ref_3211_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 0, v___x_3216_);
v___x_3218_ = v___x_3209_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v___x_3216_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27___boxed(lean_object* v_target_3223_, lean_object* v_ctx_3224_, lean_object* v_csv_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27(v_target_3223_, v_ctx_3224_, v_csv_3225_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_, v_a_3234_);
lean_dec(v_a_3234_);
lean_dec_ref(v_a_3233_);
lean_dec(v_a_3232_);
lean_dec_ref(v_a_3231_);
lean_dec(v_a_3230_);
lean_dec_ref(v_a_3229_);
lean_dec(v_a_3228_);
lean_dec_ref(v_a_3227_);
lean_dec(v_a_3226_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___lam__0(lean_object* v_a_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_){
_start:
{
lean_object* v___x_3248_; 
v___x_3248_ = l_Lean_Meta_Tactic_BVDecide_explainCounterExampleQuality(v_a_3237_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3250_; lean_object* v_a_3251_; lean_object* v___x_3252_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
v___x_3250_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_BVDecide_bvDecide_spec__0___redArg(v_a_3249_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_);
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref(v___x_3250_);
v___x_3252_ = l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_BVTrace_evalBvTrace_spec__0___redArg(v_a_3251_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_);
return v___x_3252_;
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
v_a_3253_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3248_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3248_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___lam__0___boxed(lean_object* v_a_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___lam__0(v_a_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet(lean_object* v_target_3273_, lean_object* v_ctx_3274_, lean_object* v_csv_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_){
_start:
{
lean_object* v___x_3286_; 
v___x_3286_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet_x27(v_target_3273_, v_ctx_3274_, v_csv_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_, v_a_3282_, v_a_3283_, v_a_3284_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3299_; 
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3289_ = v___x_3286_;
v_isShared_3290_ = v_isSharedCheck_3299_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3286_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3299_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
if (lean_obj_tag(v_a_3287_) == 0)
{
lean_object* v_a_3291_; lean_object* v_goal_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; 
lean_del_object(v___x_3289_);
v_a_3291_ = lean_ctor_get(v_a_3287_, 0);
lean_inc(v_a_3291_);
lean_dec_ref_known(v_a_3287_, 1);
v_goal_3292_ = lean_ctor_get(v_a_3291_, 0);
lean_inc(v_goal_3292_);
v___f_3293_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___lam__0___boxed), 11, 1);
lean_closure_set(v___f_3293_, 0, v_a_3291_);
v___x_3294_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_BVTrace_evalBvTrace_spec__1___redArg(v_goal_3292_, v___f_3293_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_, v_a_3282_, v_a_3283_, v_a_3284_);
return v___x_3294_;
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; 
v_a_3295_ = lean_ctor_get(v_a_3287_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v_a_3287_, 1);
if (v_isShared_3290_ == 0)
{
lean_ctor_set(v___x_3289_, 0, v_a_3295_);
v___x_3297_ = v___x_3289_;
goto v_reusejp_3296_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v_a_3295_);
v___x_3297_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3296_;
}
v_reusejp_3296_:
{
return v___x_3297_;
}
}
}
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
v_a_3300_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3286_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3286_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___boxed(lean_object* v_target_3308_, lean_object* v_ctx_3309_, lean_object* v_csv_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet(v_target_3308_, v_ctx_3309_, v_csv_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_);
lean_dec(v_a_3319_);
lean_dec_ref(v_a_3318_);
lean_dec(v_a_3317_);
lean_dec_ref(v_a_3316_);
lean_dec(v_a_3315_);
lean_dec_ref(v_a_3314_);
lean_dec(v_a_3313_);
lean_dec_ref(v_a_3312_);
lean_dec(v_a_3311_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__0(uint8_t v___x_3322_, uint8_t v___x_3323_, lean_object* v___x_3324_, lean_object* v___x_3325_, lean_object* v_csv_3326_, lean_object* v_a_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3329_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3339_ = lean_unsigned_to_nat(9u);
v___x_3340_ = lean_unsigned_to_nat(5u);
v___x_3341_ = lean_unsigned_to_nat(8u);
v___x_3342_ = lean_unsigned_to_nat(1000u);
v___x_3343_ = lean_unsigned_to_nat(1024u);
v___x_3344_ = lean_unsigned_to_nat(10000u);
v___x_3345_ = lean_unsigned_to_nat(1048576u);
v___x_3346_ = lean_unsigned_to_nat(50u);
v___x_3347_ = lean_box(0);
v___x_3348_ = lean_alloc_ctor(0, 14, 32);
lean_ctor_set(v___x_3348_, 0, v___x_3339_);
lean_ctor_set(v___x_3348_, 1, v___x_3340_);
lean_ctor_set(v___x_3348_, 2, v___x_3341_);
lean_ctor_set(v___x_3348_, 3, v___x_3341_);
lean_ctor_set(v___x_3348_, 4, v___x_3342_);
lean_ctor_set(v___x_3348_, 5, v___x_3342_);
lean_ctor_set(v___x_3348_, 6, v___x_3324_);
lean_ctor_set(v___x_3348_, 7, v___x_3343_);
lean_ctor_set(v___x_3348_, 8, v___x_3344_);
lean_ctor_set(v___x_3348_, 9, v___x_3342_);
lean_ctor_set(v___x_3348_, 10, v___x_3345_);
lean_ctor_set(v___x_3348_, 11, v___x_3325_);
lean_ctor_set(v___x_3348_, 12, v___x_3346_);
lean_ctor_set(v___x_3348_, 13, v___x_3347_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 1, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 2, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 3, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 4, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 5, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 6, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 7, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 8, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 9, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 10, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 11, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 12, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 13, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 14, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 15, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 16, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 17, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 18, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 19, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 20, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 21, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 22, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 23, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 24, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 25, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 26, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 27, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 28, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 29, v___x_3322_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 30, v___x_3323_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*14 + 31, v___x_3323_);
v___x_3349_ = l_Lean_Meta_Grind_mkDefaultParams(v___x_3348_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v_a_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
lean_inc(v_a_3350_);
lean_dec_ref_known(v___x_3349_, 1);
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_a_3338_);
v___x_3352_ = l_Lean_TSyntax_getString(v_csv_3326_);
v___x_3353_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_bvDecidet___boxed), 13, 3);
lean_closure_set(v___x_3353_, 0, v___x_3351_);
lean_closure_set(v___x_3353_, 1, v_a_3327_);
lean_closure_set(v___x_3353_, 2, v___x_3352_);
v___x_3354_ = l_Lean_Meta_Grind_GrindM_run___redArg(v___x_3353_, v_a_3350_, v___x_3347_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
lean_dec_ref_known(v___x_3354_, 1);
v___x_3355_ = lean_box(0);
v___x_3356_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3355_, v___y_3329_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3364_; 
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3364_ == 0)
{
lean_object* v_unused_3365_; 
v_unused_3365_ = lean_ctor_get(v___x_3356_, 0);
lean_dec(v_unused_3365_);
v___x_3358_ = v___x_3356_;
v_isShared_3359_ = v_isSharedCheck_3364_;
goto v_resetjp_3357_;
}
else
{
lean_dec(v___x_3356_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3364_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3360_; lean_object* v___x_3362_; 
v___x_3360_ = lean_box(0);
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 0, v___x_3360_);
v___x_3362_ = v___x_3358_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3360_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
else
{
return v___x_3356_;
}
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
v_a_3366_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3354_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3354_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3366_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3381_; 
lean_dec(v_a_3338_);
lean_dec_ref(v_a_3327_);
v_a_3374_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3376_ = v___x_3349_;
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3349_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3379_; 
if (v_isShared_3377_ == 0)
{
v___x_3379_ = v___x_3376_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3374_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref(v_a_3327_);
lean_dec(v___x_3325_);
lean_dec(v___x_3324_);
v_a_3382_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___x_3337_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3337_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__0___boxed(lean_object* v___x_3390_, lean_object* v___x_3391_, lean_object* v___x_3392_, lean_object* v___x_3393_, lean_object* v_csv_3394_, lean_object* v_a_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
uint8_t v___x_3317__boxed_3405_; uint8_t v___x_3318__boxed_3406_; lean_object* v_res_3407_; 
v___x_3317__boxed_3405_ = lean_unbox(v___x_3390_);
v___x_3318__boxed_3406_ = lean_unbox(v___x_3391_);
v_res_3407_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__0(v___x_3317__boxed_3405_, v___x_3318__boxed_3406_, v___x_3392_, v___x_3393_, v_csv_3394_, v_a_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v_csv_3394_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__1(lean_object* v_a_3408_, lean_object* v_a_3409_, uint8_t v___x_3410_, uint8_t v___x_3411_, lean_object* v___x_3412_, lean_object* v___x_3413_, lean_object* v_csv_3414_, lean_object* v_x_3415_, lean_object* v_lratFile_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v___x_3426_; 
v___x_3426_ = l_Lean_Meta_Tactic_BVDecide_TacticContext_new(v_lratFile_3416_, v_a_3408_, v_a_3409_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___f_3430_; lean_object* v___x_3431_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v___x_3426_, 1);
v___x_3428_ = lean_box(v___x_3410_);
v___x_3429_ = lean_box(v___x_3411_);
v___f_3430_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__0___boxed), 15, 6);
lean_closure_set(v___f_3430_, 0, v___x_3428_);
lean_closure_set(v___f_3430_, 1, v___x_3429_);
lean_closure_set(v___f_3430_, 2, v___x_3412_);
lean_closure_set(v___f_3430_, 3, v___x_3413_);
lean_closure_set(v___f_3430_, 4, v_csv_3414_);
lean_closure_set(v___f_3430_, 5, v_a_3427_);
v___x_3431_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3430_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
return v___x_3431_;
}
else
{
lean_object* v_a_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3439_; 
lean_dec(v_csv_3414_);
lean_dec(v___x_3413_);
lean_dec(v___x_3412_);
v_a_3432_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3434_ = v___x_3426_;
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_a_3432_);
lean_dec(v___x_3426_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
lean_object* v___x_3437_; 
if (v_isShared_3435_ == 0)
{
v___x_3437_ = v___x_3434_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_a_3432_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__1___boxed(lean_object** _args){
lean_object* v_a_3440_ = _args[0];
lean_object* v_a_3441_ = _args[1];
lean_object* v___x_3442_ = _args[2];
lean_object* v___x_3443_ = _args[3];
lean_object* v___x_3444_ = _args[4];
lean_object* v___x_3445_ = _args[5];
lean_object* v_csv_3446_ = _args[6];
lean_object* v_x_3447_ = _args[7];
lean_object* v_lratFile_3448_ = _args[8];
lean_object* v___y_3449_ = _args[9];
lean_object* v___y_3450_ = _args[10];
lean_object* v___y_3451_ = _args[11];
lean_object* v___y_3452_ = _args[12];
lean_object* v___y_3453_ = _args[13];
lean_object* v___y_3454_ = _args[14];
lean_object* v___y_3455_ = _args[15];
lean_object* v___y_3456_ = _args[16];
lean_object* v___y_3457_ = _args[17];
_start:
{
uint8_t v___x_3470__boxed_3458_; uint8_t v___x_3471__boxed_3459_; lean_object* v_res_3460_; 
v___x_3470__boxed_3458_ = lean_unbox(v___x_3442_);
v___x_3471__boxed_3459_ = lean_unbox(v___x_3443_);
v_res_3460_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__1(v_a_3440_, v_a_3441_, v___x_3470__boxed_3458_, v___x_3471__boxed_3459_, v___x_3444_, v___x_3445_, v_csv_3446_, v_x_3447_, v_lratFile_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v_x_3447_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet(lean_object* v_x_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_){
_start:
{
lean_object* v___x_3477_; uint8_t v___x_3478_; 
v___x_3477_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__4));
lean_inc(v_x_3467_);
v___x_3478_ = l_Lean_Syntax_isOfKind(v_x_3467_, v___x_3477_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3479_; 
lean_dec(v_x_3467_);
v___x_3479_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__0___redArg();
return v___x_3479_;
}
else
{
lean_object* v___x_3480_; lean_object* v___x_3481_; uint8_t v___x_3482_; 
v___x_3480_ = lean_unsigned_to_nat(1u);
v___x_3481_ = l_Lean_Syntax_getArg(v_x_3467_, v___x_3480_);
lean_inc(v___x_3481_);
v___x_3482_ = l_Lean_Syntax_matchesNull(v___x_3481_, v___x_3480_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; 
lean_dec(v___x_3481_);
lean_dec(v_x_3467_);
v___x_3483_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__0___redArg();
return v___x_3483_;
}
else
{
lean_object* v___x_3484_; lean_object* v_csv_3485_; lean_object* v___x_3486_; uint8_t v___x_3487_; 
v___x_3484_ = lean_unsigned_to_nat(0u);
v_csv_3485_ = l_Lean_Syntax_getArg(v___x_3481_, v___x_3484_);
lean_dec(v___x_3481_);
v___x_3486_ = ((lean_object*)(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet___closed__12));
lean_inc(v_csv_3485_);
v___x_3487_ = l_Lean_Syntax_isOfKind(v_csv_3485_, v___x_3486_);
if (v___x_3487_ == 0)
{
lean_object* v___x_3488_; 
lean_dec(v_csv_3485_);
lean_dec(v_x_3467_);
v___x_3488_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__0___redArg();
return v___x_3488_;
}
else
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; 
v___x_3489_ = lean_unsigned_to_nat(2u);
v___x_3490_ = l_Lean_Syntax_getArg(v_x_3467_, v___x_3489_);
lean_dec(v_x_3467_);
v___x_3491_ = ((lean_object*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___closed__1));
lean_inc(v___x_3490_);
v___x_3492_ = l_Lean_Syntax_isOfKind(v___x_3490_, v___x_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___x_3493_; 
lean_dec(v___x_3490_);
lean_dec(v_csv_3485_);
v___x_3493_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__0___redArg();
return v___x_3493_;
}
else
{
lean_object* v___x_3494_; uint8_t v___x_3495_; lean_object* v___x_3496_; uint8_t v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3494_ = lean_unsigned_to_nat(10u);
v___x_3495_ = 0;
v___x_3496_ = lean_unsigned_to_nat(100000u);
v___x_3497_ = 0;
v___x_3498_ = lean_alloc_ctor(0, 2, 11);
lean_ctor_set(v___x_3498_, 0, v___x_3494_);
lean_ctor_set(v___x_3498_, 1, v___x_3496_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 1, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 2, v___x_3495_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 3, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 4, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 5, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 6, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 7, v___x_3492_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 8, v___x_3495_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 9, v___x_3495_);
lean_ctor_set_uint8(v___x_3498_, sizeof(void*)*2 + 10, v___x_3497_);
v___x_3499_ = l_Lean_Meta_Tactic_BVDecide_elabBVDecideConfig___redArg(v___x_3490_, v___x_3498_, v___x_3492_, v_a_3468_, v_a_3474_, v_a_3475_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
lean_inc(v_a_3500_);
lean_dec_ref_known(v___x_3499_, 1);
v___x_3501_ = lean_box(0);
v___x_3502_ = l_Lean_Meta_Tactic_BVDecide_elabBVDecideTypes(v___x_3501_, v_a_3474_, v_a_3475_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___f_3506_; lean_object* v___x_3507_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3502_, 1);
v___x_3504_ = lean_box(v___x_3495_);
v___x_3505_ = lean_box(v___x_3492_);
v___f_3506_ = lean_alloc_closure((void*)(lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___lam__1___boxed), 18, 7);
lean_closure_set(v___f_3506_, 0, v_a_3500_);
lean_closure_set(v___f_3506_, 1, v_a_3503_);
lean_closure_set(v___f_3506_, 2, v___x_3504_);
lean_closure_set(v___f_3506_, 3, v___x_3505_);
lean_closure_set(v___f_3506_, 4, v___x_3496_);
lean_closure_set(v___f_3506_, 5, v___x_3494_);
lean_closure_set(v___f_3506_, 6, v_csv_3485_);
v___x_3507_ = l_IO_FS_withTempFile___at___00Lean_Elab_Tactic_BVDecide_evalBvDecide_spec__1___redArg(v___f_3506_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
return v___x_3507_;
}
else
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
lean_dec(v_a_3500_);
lean_dec(v_csv_3485_);
v_a_3508_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3502_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3502_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_dec(v_csv_3485_);
v_a_3516_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3499_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3499_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet___boxed(lean_object* v_x_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_){
_start:
{
lean_object* v_res_3534_; 
v_res_3534_ = lp_LeanQEC_Lean_Meta_Tactic_BVDecide_evalBvDecidet(v_x_3524_, v_a_3525_, v_a_3526_, v_a_3527_, v_a_3528_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_);
lean_dec(v_a_3532_);
lean_dec_ref(v_a_3531_);
lean_dec(v_a_3530_);
lean_dec_ref(v_a_3529_);
lean_dec(v_a_3528_);
lean_dec_ref(v_a_3527_);
lean_dec(v_a_3526_);
lean_dec_ref(v_a_3525_);
return v_res_3534_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_LRAT(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_BVDecide(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide(uint8_t builtin);
lean_object* initialize_Lean_Meta_Native(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanQEC_LeanQEC_timedbv(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_LRAT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_BVDecide(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_LeanQEC_Lean_Parser_Tactic_bvDecidet = _init_lp_LeanQEC_Lean_Parser_Tactic_bvDecidet();
lean_mark_persistent(lp_LeanQEC_Lean_Parser_Tactic_bvDecidet);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
