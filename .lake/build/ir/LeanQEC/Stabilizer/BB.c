// Lean compiler output
// Module: LeanQEC.Stabilizer.BB
// Imports: public import Init public meta import Init public import LeanQEC.Stabilizer.CSS public import LeanQEC.LinearAlgebra.RowspaceKernel
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
lean_object* lp_mathlib_ZMod_instField___redArg(lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* l_Fin_addCases___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Semifield_toDivisionSemiring___redArg(lean_object*);
lean_object* lp_mathlib_instDistribOfSemiring___redArg(lean_object*);
lean_object* lp_mathlib_instMulZeroClassOfSemiring___redArg(lean_object*);
lean_object* lp_mathlib_Field_toDivisionRing___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* l_instDecidableEqFin___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Matrix_diagonal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_mathlib_finProdFinEquiv___redArg(lean_object*);
lean_object* lp_mathlib_Matrix_reindex___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Matrix_kronecker(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_kronecker__fin___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_kronecker__fin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_kronecker__fin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LeanQEC_cyclic__shift___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_cyclic__shift___redArg___closed__0;
static lean_once_cell_t lp_LeanQEC_cyclic__shift___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_cyclic__shift___redArg___closed__1;
static lean_once_cell_t lp_LeanQEC_cyclic__shift___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_cyclic__shift___redArg___closed__2;
static lean_once_cell_t lp_LeanQEC_cyclic__shift___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LeanQEC_cyclic__shift___redArg___closed__3;
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_x___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_x___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_x___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_x(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_y___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_y(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_BB3__matrix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_BB3__matrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_BB4__matrix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_BB4__matrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_kronecker__fin___redArg(lean_object* v_inst_1_, lean_object* v_p_2_, lean_object* v_q_3_, lean_object* v_A_4_, lean_object* v_B_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_toFun_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_8_ = lp_mathlib_finProdFinEquiv___redArg(v_p_2_);
v___x_9_ = lp_mathlib_finProdFinEquiv___redArg(v_q_3_);
v___x_10_ = lp_mathlib_Matrix_reindex___redArg(v___x_8_, v___x_9_);
v_toFun_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_toFun_11_);
lean_dec_ref(v___x_10_);
v___x_12_ = lean_alloc_closure((void*)(lp_mathlib_Matrix_kronecker), 10, 8);
lean_closure_set(v___x_12_, 0, lean_box(0));
lean_closure_set(v___x_12_, 1, lean_box(0));
lean_closure_set(v___x_12_, 2, lean_box(0));
lean_closure_set(v___x_12_, 3, lean_box(0));
lean_closure_set(v___x_12_, 4, lean_box(0));
lean_closure_set(v___x_12_, 5, v_inst_1_);
lean_closure_set(v___x_12_, 6, v_A_4_);
lean_closure_set(v___x_12_, 7, v_B_5_);
v___x_13_ = lean_apply_3(v_toFun_11_, v___x_12_, v_a_6_, v_a_7_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_kronecker__fin(lean_object* v_R_14_, lean_object* v_inst_15_, lean_object* v_m_16_, lean_object* v_n_17_, lean_object* v_p_18_, lean_object* v_q_19_, lean_object* v_A_20_, lean_object* v_B_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_LeanQEC_Matrix_kronecker__fin___redArg(v_inst_15_, v_p_18_, v_q_19_, v_A_20_, v_B_21_, v_a_22_, v_a_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_kronecker__fin___boxed(lean_object* v_R_25_, lean_object* v_inst_26_, lean_object* v_m_27_, lean_object* v_n_28_, lean_object* v_p_29_, lean_object* v_q_30_, lean_object* v_A_31_, lean_object* v_B_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_LeanQEC_Matrix_kronecker__fin(v_R_25_, v_inst_26_, v_m_27_, v_n_28_, v_p_29_, v_q_30_, v_A_31_, v_B_32_, v_a_33_, v_a_34_);
lean_dec(v_n_28_);
lean_dec(v_m_27_);
return v_res_35_;
}
}
static lean_object* _init_lp_LeanQEC_cyclic__shift___redArg___closed__0(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(2u);
v___x_37_ = lp_mathlib_ZMod_instField___redArg(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_lp_LeanQEC_cyclic__shift___redArg___closed__1(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__0, &lp_LeanQEC_cyclic__shift___redArg___closed__0_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__0);
v___x_39_ = lp_mathlib_Field_toSemifield___redArg(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_lp_LeanQEC_cyclic__shift___redArg___closed__2(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__1, &lp_LeanQEC_cyclic__shift___redArg___closed__1_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__1);
v___x_41_ = lp_mathlib_Semifield_toDivisionSemiring___redArg(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_lp_LeanQEC_cyclic__shift___redArg___closed__3(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__0, &lp_LeanQEC_cyclic__shift___redArg___closed__0_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__0);
v___x_43_ = lp_mathlib_Field_toDivisionRing___redArg(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift___redArg(lean_object* v_n_44_, lean_object* v_k_45_, lean_object* v_i_46_, lean_object* v_j_47_){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_48_ = lean_nat_add(v_i_46_, v_k_45_);
v___x_49_ = lean_nat_mod(v___x_48_, v_n_44_);
lean_dec(v___x_48_);
v___x_50_ = lean_nat_dec_eq(v___x_49_, v_j_47_);
lean_dec(v___x_49_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; lean_object* v_toSemiring_52_; lean_object* v___x_53_; lean_object* v_toZero_54_; 
v___x_51_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__2, &lp_LeanQEC_cyclic__shift___redArg___closed__2_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__2);
v_toSemiring_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc_ref(v_toSemiring_52_);
v___x_53_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toSemiring_52_);
v_toZero_54_ = lean_ctor_get(v___x_53_, 1);
lean_inc(v_toZero_54_);
lean_dec_ref(v___x_53_);
return v_toZero_54_;
}
else
{
lean_object* v___x_55_; lean_object* v_toRing_56_; lean_object* v___x_57_; lean_object* v_toAddMonoidWithOne_58_; lean_object* v_toOne_59_; 
v___x_55_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__3, &lp_LeanQEC_cyclic__shift___redArg___closed__3_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__3);
v_toRing_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc_ref(v_toRing_56_);
v___x_57_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_56_);
v_toAddMonoidWithOne_58_ = lean_ctor_get(v___x_57_, 1);
lean_inc_ref(v_toAddMonoidWithOne_58_);
lean_dec_ref(v___x_57_);
v_toOne_59_ = lean_ctor_get(v_toAddMonoidWithOne_58_, 2);
lean_inc(v_toOne_59_);
lean_dec_ref(v_toAddMonoidWithOne_58_);
return v_toOne_59_;
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift___redArg___boxed(lean_object* v_n_60_, lean_object* v_k_61_, lean_object* v_i_62_, lean_object* v_j_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = lp_LeanQEC_cyclic__shift___redArg(v_n_60_, v_k_61_, v_i_62_, v_j_63_);
lean_dec(v_j_63_);
lean_dec(v_i_62_);
lean_dec(v_k_61_);
lean_dec(v_n_60_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift(lean_object* v_n_65_, lean_object* v_k_66_, lean_object* v_inst_67_, lean_object* v_i_68_, lean_object* v_j_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lp_LeanQEC_cyclic__shift___redArg(v_n_65_, v_k_66_, v_i_68_, v_j_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_cyclic__shift___boxed(lean_object* v_n_71_, lean_object* v_k_72_, lean_object* v_inst_73_, lean_object* v_i_74_, lean_object* v_j_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_LeanQEC_cyclic__shift(v_n_71_, v_k_72_, v_inst_73_, v_i_74_, v_j_75_);
lean_dec(v_j_75_);
lean_dec(v_i_74_);
lean_dec(v_k_72_);
lean_dec(v_n_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_x___redArg___lam__0(lean_object* v_toOne_77_, lean_object* v_x_78_){
_start:
{
lean_inc(v_toOne_77_);
return v_toOne_77_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_x___redArg___lam__0___boxed(lean_object* v_toOne_79_, lean_object* v_x_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_LeanQEC_x___redArg___lam__0(v_toOne_79_, v_x_80_);
lean_dec(v_x_80_);
lean_dec(v_toOne_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_x___redArg(lean_object* v_l_82_, lean_object* v_m_83_, lean_object* v_k_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v___x_87_; lean_object* v_toSemiring_88_; lean_object* v___x_89_; lean_object* v_toMul_90_; lean_object* v___x_91_; lean_object* v_toZero_92_; lean_object* v___x_93_; lean_object* v_toRing_94_; lean_object* v___x_95_; lean_object* v_toAddMonoidWithOne_96_; lean_object* v_toOne_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___f_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_87_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__2, &lp_LeanQEC_cyclic__shift___redArg___closed__2_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__2);
v_toSemiring_88_ = lean_ctor_get(v___x_87_, 0);
lean_inc_ref_n(v_toSemiring_88_, 2);
v___x_89_ = lp_mathlib_instDistribOfSemiring___redArg(v_toSemiring_88_);
v_toMul_90_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_toMul_90_);
lean_dec_ref(v___x_89_);
v___x_91_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toSemiring_88_);
v_toZero_92_ = lean_ctor_get(v___x_91_, 1);
lean_inc(v_toZero_92_);
lean_dec_ref(v___x_91_);
v___x_93_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__3, &lp_LeanQEC_cyclic__shift___redArg___closed__3_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__3);
v_toRing_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc_ref(v_toRing_94_);
v___x_95_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_94_);
v_toAddMonoidWithOne_96_ = lean_ctor_get(v___x_95_, 1);
lean_inc_ref(v_toAddMonoidWithOne_96_);
lean_dec_ref(v___x_95_);
v_toOne_97_ = lean_ctor_get(v_toAddMonoidWithOne_96_, 2);
lean_inc(v_toOne_97_);
lean_dec_ref(v_toAddMonoidWithOne_96_);
v___x_98_ = lean_alloc_closure((void*)(lp_LeanQEC_cyclic__shift___boxed), 5, 3);
lean_closure_set(v___x_98_, 0, v_l_82_);
lean_closure_set(v___x_98_, 1, v_k_84_);
lean_closure_set(v___x_98_, 2, lean_box(0));
lean_inc_n(v_m_83_, 2);
v___x_99_ = lean_alloc_closure((void*)(l_instDecidableEqFin___boxed), 3, 1);
lean_closure_set(v___x_99_, 0, v_m_83_);
v___f_100_ = lean_alloc_closure((void*)(lp_LeanQEC_x___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_100_, 0, v_toOne_97_);
v___x_101_ = lean_alloc_closure((void*)(lp_mathlib_Matrix_diagonal), 7, 5);
lean_closure_set(v___x_101_, 0, lean_box(0));
lean_closure_set(v___x_101_, 1, lean_box(0));
lean_closure_set(v___x_101_, 2, v___x_99_);
lean_closure_set(v___x_101_, 3, v_toZero_92_);
lean_closure_set(v___x_101_, 4, v___f_100_);
v___x_102_ = lp_LeanQEC_Matrix_kronecker__fin___redArg(v_toMul_90_, v_m_83_, v_m_83_, v___x_98_, v___x_101_, v_a_85_, v_a_86_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_x(lean_object* v_l_103_, lean_object* v_m_104_, lean_object* v_k_105_, lean_object* v_inst_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lp_LeanQEC_x___redArg(v_l_103_, v_m_104_, v_k_105_, v_a_107_, v_a_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_y___redArg(lean_object* v_l_110_, lean_object* v_m_111_, lean_object* v_k_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v___x_115_; lean_object* v_toSemiring_116_; lean_object* v___x_117_; lean_object* v_toMul_118_; lean_object* v___x_119_; lean_object* v_toZero_120_; lean_object* v___x_121_; lean_object* v_toRing_122_; lean_object* v___x_123_; lean_object* v_toAddMonoidWithOne_124_; lean_object* v_toOne_125_; lean_object* v___x_126_; lean_object* v___f_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_115_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__2, &lp_LeanQEC_cyclic__shift___redArg___closed__2_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__2);
v_toSemiring_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc_ref_n(v_toSemiring_116_, 2);
v___x_117_ = lp_mathlib_instDistribOfSemiring___redArg(v_toSemiring_116_);
v_toMul_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_toMul_118_);
lean_dec_ref(v___x_117_);
v___x_119_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toSemiring_116_);
v_toZero_120_ = lean_ctor_get(v___x_119_, 1);
lean_inc(v_toZero_120_);
lean_dec_ref(v___x_119_);
v___x_121_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__3, &lp_LeanQEC_cyclic__shift___redArg___closed__3_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__3);
v_toRing_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc_ref(v_toRing_122_);
v___x_123_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_122_);
v_toAddMonoidWithOne_124_ = lean_ctor_get(v___x_123_, 1);
lean_inc_ref(v_toAddMonoidWithOne_124_);
lean_dec_ref(v___x_123_);
v_toOne_125_ = lean_ctor_get(v_toAddMonoidWithOne_124_, 2);
lean_inc(v_toOne_125_);
lean_dec_ref(v_toAddMonoidWithOne_124_);
v___x_126_ = lean_alloc_closure((void*)(l_instDecidableEqFin___boxed), 3, 1);
lean_closure_set(v___x_126_, 0, v_l_110_);
v___f_127_ = lean_alloc_closure((void*)(lp_LeanQEC_x___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_127_, 0, v_toOne_125_);
v___x_128_ = lean_alloc_closure((void*)(lp_mathlib_Matrix_diagonal), 7, 5);
lean_closure_set(v___x_128_, 0, lean_box(0));
lean_closure_set(v___x_128_, 1, lean_box(0));
lean_closure_set(v___x_128_, 2, v___x_126_);
lean_closure_set(v___x_128_, 3, v_toZero_120_);
lean_closure_set(v___x_128_, 4, v___f_127_);
lean_inc_n(v_m_111_, 2);
v___x_129_ = lean_alloc_closure((void*)(lp_LeanQEC_cyclic__shift___boxed), 5, 3);
lean_closure_set(v___x_129_, 0, v_m_111_);
lean_closure_set(v___x_129_, 1, v_k_112_);
lean_closure_set(v___x_129_, 2, lean_box(0));
v___x_130_ = lp_LeanQEC_Matrix_kronecker__fin___redArg(v_toMul_118_, v_m_111_, v_m_111_, v___x_128_, v___x_129_, v_a_113_, v_a_114_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_y(lean_object* v_l_131_, lean_object* v_m_132_, lean_object* v_k_133_, lean_object* v_inst_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lp_LeanQEC_y___redArg(v_l_131_, v_m_132_, v_k_133_, v_a_135_, v_a_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_BB3__matrix___redArg(lean_object* v_l_138_, lean_object* v_m_139_, lean_object* v_M_u2081_140_, lean_object* v_M_u2082_141_, lean_object* v_M_u2083_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_fst_145_; lean_object* v_snd_146_; lean_object* v_fst_147_; lean_object* v_snd_148_; lean_object* v_fst_149_; lean_object* v_snd_150_; lean_object* v___x_151_; lean_object* v_toSemiring_152_; lean_object* v___x_153_; lean_object* v_toAdd_154_; lean_object* v___y_156_; lean_object* v___y_157_; lean_object* v___y_165_; uint8_t v___x_169_; 
v_fst_145_ = lean_ctor_get(v_M_u2081_140_, 0);
lean_inc(v_fst_145_);
v_snd_146_ = lean_ctor_get(v_M_u2081_140_, 1);
lean_inc(v_snd_146_);
lean_dec_ref(v_M_u2081_140_);
v_fst_147_ = lean_ctor_get(v_M_u2082_141_, 0);
lean_inc(v_fst_147_);
v_snd_148_ = lean_ctor_get(v_M_u2082_141_, 1);
lean_inc(v_snd_148_);
lean_dec_ref(v_M_u2082_141_);
v_fst_149_ = lean_ctor_get(v_M_u2083_142_, 0);
lean_inc(v_fst_149_);
v_snd_150_ = lean_ctor_get(v_M_u2083_142_, 1);
lean_inc(v_snd_150_);
lean_dec_ref(v_M_u2083_142_);
v___x_151_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__2, &lp_LeanQEC_cyclic__shift___redArg___closed__2_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__2);
v_toSemiring_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref(v_toSemiring_152_);
v___x_153_ = lp_mathlib_instDistribOfSemiring___redArg(v_toSemiring_152_);
v_toAdd_154_ = lean_ctor_get(v___x_153_, 1);
lean_inc(v_toAdd_154_);
lean_dec_ref(v___x_153_);
v___x_169_ = lean_unbox(v_fst_145_);
lean_dec(v_fst_145_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; 
lean_inc(v_a_144_);
lean_inc(v_a_143_);
lean_inc(v_m_139_);
lean_inc(v_l_138_);
v___x_170_ = lp_LeanQEC_y___redArg(v_l_138_, v_m_139_, v_snd_146_, v_a_143_, v_a_144_);
v___y_165_ = v___x_170_;
goto v___jp_164_;
}
else
{
lean_object* v___x_171_; 
lean_inc(v_a_144_);
lean_inc(v_a_143_);
lean_inc(v_m_139_);
lean_inc(v_l_138_);
v___x_171_ = lp_LeanQEC_x___redArg(v_l_138_, v_m_139_, v_snd_146_, v_a_143_, v_a_144_);
v___y_165_ = v___x_171_;
goto v___jp_164_;
}
v___jp_155_:
{
lean_object* v___x_158_; uint8_t v___x_159_; 
lean_inc(v_toAdd_154_);
v___x_158_ = lean_apply_2(v_toAdd_154_, v___y_156_, v___y_157_);
v___x_159_ = lean_unbox(v_fst_149_);
lean_dec(v_fst_149_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lp_LeanQEC_y___redArg(v_l_138_, v_m_139_, v_snd_150_, v_a_143_, v_a_144_);
v___x_161_ = lean_apply_2(v_toAdd_154_, v___x_158_, v___x_160_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lp_LeanQEC_x___redArg(v_l_138_, v_m_139_, v_snd_150_, v_a_143_, v_a_144_);
v___x_163_ = lean_apply_2(v_toAdd_154_, v___x_158_, v___x_162_);
return v___x_163_;
}
}
v___jp_164_:
{
uint8_t v___x_166_; 
v___x_166_ = lean_unbox(v_fst_147_);
lean_dec(v_fst_147_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
lean_inc(v_a_144_);
lean_inc(v_a_143_);
lean_inc(v_m_139_);
lean_inc(v_l_138_);
v___x_167_ = lp_LeanQEC_y___redArg(v_l_138_, v_m_139_, v_snd_148_, v_a_143_, v_a_144_);
v___y_156_ = v___y_165_;
v___y_157_ = v___x_167_;
goto v___jp_155_;
}
else
{
lean_object* v___x_168_; 
lean_inc(v_a_144_);
lean_inc(v_a_143_);
lean_inc(v_m_139_);
lean_inc(v_l_138_);
v___x_168_ = lp_LeanQEC_x___redArg(v_l_138_, v_m_139_, v_snd_148_, v_a_143_, v_a_144_);
v___y_156_ = v___y_165_;
v___y_157_ = v___x_168_;
goto v___jp_155_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_BB3__matrix(lean_object* v_l_172_, lean_object* v_m_173_, lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_M_u2081_176_, lean_object* v_M_u2082_177_, lean_object* v_M_u2083_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lp_LeanQEC_BB3__matrix___redArg(v_l_172_, v_m_173_, v_M_u2081_176_, v_M_u2082_177_, v_M_u2083_178_, v_a_179_, v_a_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_BB4__matrix___redArg(lean_object* v_l_182_, lean_object* v_m_183_, lean_object* v_M_u2081_184_, lean_object* v_M_u2082_185_, lean_object* v_M_u2083_186_, lean_object* v_M_u2084_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_fst_190_; lean_object* v_snd_191_; lean_object* v_fst_192_; lean_object* v_snd_193_; lean_object* v_fst_194_; lean_object* v_snd_195_; lean_object* v_fst_196_; lean_object* v_snd_197_; lean_object* v___x_198_; lean_object* v_toSemiring_199_; lean_object* v___x_200_; lean_object* v_toAdd_201_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v___y_212_; lean_object* v___y_213_; lean_object* v___y_219_; uint8_t v___x_223_; 
v_fst_190_ = lean_ctor_get(v_M_u2081_184_, 0);
lean_inc(v_fst_190_);
v_snd_191_ = lean_ctor_get(v_M_u2081_184_, 1);
lean_inc(v_snd_191_);
lean_dec_ref(v_M_u2081_184_);
v_fst_192_ = lean_ctor_get(v_M_u2082_185_, 0);
lean_inc(v_fst_192_);
v_snd_193_ = lean_ctor_get(v_M_u2082_185_, 1);
lean_inc(v_snd_193_);
lean_dec_ref(v_M_u2082_185_);
v_fst_194_ = lean_ctor_get(v_M_u2083_186_, 0);
lean_inc(v_fst_194_);
v_snd_195_ = lean_ctor_get(v_M_u2083_186_, 1);
lean_inc(v_snd_195_);
lean_dec_ref(v_M_u2083_186_);
v_fst_196_ = lean_ctor_get(v_M_u2084_187_, 0);
lean_inc(v_fst_196_);
v_snd_197_ = lean_ctor_get(v_M_u2084_187_, 1);
lean_inc(v_snd_197_);
lean_dec_ref(v_M_u2084_187_);
v___x_198_ = lean_obj_once(&lp_LeanQEC_cyclic__shift___redArg___closed__2, &lp_LeanQEC_cyclic__shift___redArg___closed__2_once, _init_lp_LeanQEC_cyclic__shift___redArg___closed__2);
v_toSemiring_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc_ref(v_toSemiring_199_);
v___x_200_ = lp_mathlib_instDistribOfSemiring___redArg(v_toSemiring_199_);
v_toAdd_201_ = lean_ctor_get(v___x_200_, 1);
lean_inc(v_toAdd_201_);
lean_dec_ref(v___x_200_);
v___x_223_ = lean_unbox(v_fst_190_);
lean_dec(v_fst_190_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_inc(v_m_183_);
lean_inc(v_l_182_);
v___x_224_ = lp_LeanQEC_y___redArg(v_l_182_, v_m_183_, v_snd_191_, v_a_188_, v_a_189_);
v___y_219_ = v___x_224_;
goto v___jp_218_;
}
else
{
lean_object* v___x_225_; 
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_inc(v_m_183_);
lean_inc(v_l_182_);
v___x_225_ = lp_LeanQEC_x___redArg(v_l_182_, v_m_183_, v_snd_191_, v_a_188_, v_a_189_);
v___y_219_ = v___x_225_;
goto v___jp_218_;
}
v___jp_202_:
{
lean_object* v___x_205_; uint8_t v___x_206_; 
lean_inc(v_toAdd_201_);
v___x_205_ = lean_apply_2(v_toAdd_201_, v___y_203_, v___y_204_);
v___x_206_ = lean_unbox(v_fst_196_);
lean_dec(v_fst_196_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lp_LeanQEC_y___redArg(v_l_182_, v_m_183_, v_snd_197_, v_a_188_, v_a_189_);
v___x_208_ = lean_apply_2(v_toAdd_201_, v___x_205_, v___x_207_);
return v___x_208_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lp_LeanQEC_x___redArg(v_l_182_, v_m_183_, v_snd_197_, v_a_188_, v_a_189_);
v___x_210_ = lean_apply_2(v_toAdd_201_, v___x_205_, v___x_209_);
return v___x_210_;
}
}
v___jp_211_:
{
lean_object* v___x_214_; uint8_t v___x_215_; 
lean_inc(v_toAdd_201_);
v___x_214_ = lean_apply_2(v_toAdd_201_, v___y_212_, v___y_213_);
v___x_215_ = lean_unbox(v_fst_194_);
lean_dec(v_fst_194_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_inc(v_m_183_);
lean_inc(v_l_182_);
v___x_216_ = lp_LeanQEC_y___redArg(v_l_182_, v_m_183_, v_snd_195_, v_a_188_, v_a_189_);
v___y_203_ = v___x_214_;
v___y_204_ = v___x_216_;
goto v___jp_202_;
}
else
{
lean_object* v___x_217_; 
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_inc(v_m_183_);
lean_inc(v_l_182_);
v___x_217_ = lp_LeanQEC_x___redArg(v_l_182_, v_m_183_, v_snd_195_, v_a_188_, v_a_189_);
v___y_203_ = v___x_214_;
v___y_204_ = v___x_217_;
goto v___jp_202_;
}
}
v___jp_218_:
{
uint8_t v___x_220_; 
v___x_220_ = lean_unbox(v_fst_192_);
lean_dec(v_fst_192_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; 
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_inc(v_m_183_);
lean_inc(v_l_182_);
v___x_221_ = lp_LeanQEC_y___redArg(v_l_182_, v_m_183_, v_snd_193_, v_a_188_, v_a_189_);
v___y_212_ = v___y_219_;
v___y_213_ = v___x_221_;
goto v___jp_211_;
}
else
{
lean_object* v___x_222_; 
lean_inc(v_a_189_);
lean_inc(v_a_188_);
lean_inc(v_m_183_);
lean_inc(v_l_182_);
v___x_222_ = lp_LeanQEC_x___redArg(v_l_182_, v_m_183_, v_snd_193_, v_a_188_, v_a_189_);
v___y_212_ = v___y_219_;
v___y_213_ = v___x_222_;
goto v___jp_211_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_BB4__matrix(lean_object* v_l_226_, lean_object* v_m_227_, lean_object* v_inst_228_, lean_object* v_inst_229_, lean_object* v_M_u2081_230_, lean_object* v_M_u2082_231_, lean_object* v_M_u2083_232_, lean_object* v_M_u2084_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lp_LeanQEC_BB4__matrix___redArg(v_l_226_, v_m_227_, v_M_u2081_230_, v_M_u2082_231_, v_M_u2083_232_, v_M_u2084_233_, v_a_234_, v_a_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin___redArg(lean_object* v_c_u2081_237_, lean_object* v_M_u2081_238_, lean_object* v_M_u2082_239_, lean_object* v_i_240_, lean_object* v_j_241_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_inc(v_i_240_);
v___x_242_ = lean_apply_1(v_M_u2081_238_, v_i_240_);
v___x_243_ = lean_apply_1(v_M_u2082_239_, v_i_240_);
v___x_244_ = l_Fin_addCases___redArg(v_c_u2081_237_, v___x_242_, v___x_243_, v_j_241_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin___redArg___boxed(lean_object* v_c_u2081_245_, lean_object* v_M_u2081_246_, lean_object* v_M_u2082_247_, lean_object* v_i_248_, lean_object* v_j_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = lp_LeanQEC_Matrix_hstack__fin___redArg(v_c_u2081_245_, v_M_u2081_246_, v_M_u2082_247_, v_i_248_, v_j_249_);
lean_dec(v_c_u2081_245_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin(lean_object* v_00_u03b1_251_, lean_object* v_00_u03b3_252_, lean_object* v_c_u2081_253_, lean_object* v_c_u2082_254_, lean_object* v_M_u2081_255_, lean_object* v_M_u2082_256_, lean_object* v_i_257_, lean_object* v_j_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lp_LeanQEC_Matrix_hstack__fin___redArg(v_c_u2081_253_, v_M_u2081_255_, v_M_u2082_256_, v_i_257_, v_j_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_LeanQEC_Matrix_hstack__fin___boxed(lean_object* v_00_u03b1_260_, lean_object* v_00_u03b3_261_, lean_object* v_c_u2081_262_, lean_object* v_c_u2082_263_, lean_object* v_M_u2081_264_, lean_object* v_M_u2082_265_, lean_object* v_i_266_, lean_object* v_j_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = lp_LeanQEC_Matrix_hstack__fin(v_00_u03b1_260_, v_00_u03b3_261_, v_c_u2081_262_, v_c_u2082_263_, v_M_u2081_264_, v_M_u2082_265_, v_i_266_, v_j_267_);
lean_dec(v_c_u2082_263_);
lean_dec(v_c_u2081_262_);
return v_res_268_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LeanQEC_LeanQEC_Stabilizer_CSS(uint8_t builtin);
lean_object* initialize_LeanQEC_LeanQEC_LinearAlgebra_RowspaceKernel(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanQEC_LeanQEC_Stabilizer_BB(uint8_t builtin) {
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
res = initialize_LeanQEC_LeanQEC_Stabilizer_CSS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanQEC_LeanQEC_LinearAlgebra_RowspaceKernel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
