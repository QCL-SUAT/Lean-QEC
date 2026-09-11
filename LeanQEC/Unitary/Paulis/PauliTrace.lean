import LeanQEC.Unitary.Paulis.PauliFolding

open Matrix

noncomputable section

variable {n : ℕ}

lemma trace_pauli_single (p : Pauli) :
    Matrix.trace ((p : 𝐔ₙ[1]).val) = if p = Pauli_I then (2 : ℂ) else 0 := by
  rcases Pauli_cases p with ( rfl | rfl | rfl | rfl ) <;> simp +decide [ * ];
  · unfold Pauli_X; norm_num [ Matrix.trace, Matrix.mul_apply ] ;
    unfold pX;
    unfold unitary_fin_equiv; norm_num [ Qubit.X ] ;
    simp +decide [ beq ];
    simp +decide [ BitVec.equivFin ];
  · unfold Pauli_Y;
    unfold pY;
    unfold Qubit.Y; norm_num [ Matrix.trace ] ;
    unfold unitary_fin_equiv; norm_num [ beq ] ;
  · unfold Pauli_Z; norm_num [ Matrix.trace ] ;
    unfold pZ ;
    unfold Qubit.Z; norm_num [ rawZ, unitary_fin_equiv ] ;
    norm_num [ beq ];
  · show Matrix.trace (1 : Matrix (BitVec 1) (BitVec 1) ℂ) = 2
    rw [Matrix.trace_one,
      show Fintype.card (BitVec 1) = 2 from by
        rw [Fintype.card_congr (BitVec.equivFin (m := 1)).toEquiv]; simp]
    norm_num

lemma trace_unitary_nkron {n₁ n₂ : ℕ} (a : 𝐔ₙ[n₁]) (b : 𝐔ₙ[n₂]) :
    Matrix.trace (a ⊗ₙ b).val = Matrix.trace a.val * Matrix.trace b.val := by
  -- The trace is invariant under reindexing. Use `Matrix.trace_reindex` (or `trace_submatrix` with `Equiv.reindexRefl` / symmetry) to show `trace (normalize_mat M) = trace M`.
  have eq_tr : Matrix.trace (a ⊗ₙ b).1 = Matrix.trace (Matrix.kronecker a.val b.val) := by
    rw [unitary_nkron_valE];
    unfold normalize_mat; simp +decide [ Matrix.trace ] ;
    conv_rhs => rw [ ← Equiv.sum_comp bits_cat.symm ] ;
  rw [eq_tr]
  exact Matrix.trace_kronecker a.val b.val

lemma trace_unitary_n_nkron (m : Fin n → 𝐔ₙ[1]) :
    Matrix.trace (unitary_n_nkron m).val = ∏ i, Matrix.trace (m i).val := by
  induction' n with n ih;
  · erw [ Matrix.trace_one ] ; norm_num;
    decide +revert;
  · rw [Fin.prod_univ_succ, ← ih]
    rw [show unitary_n_nkron m = (unitary_n_nkron (fun i : Fin n => m i.succ)) ⊗ₙ (m 0) from by
      simp only [unitary_n_nkron, Fin.succ]]
    exact (trace_unitary_nkron _ _).trans (mul_comm _ _)

lemma prod_if_pauli_I (m : Fin n → Pauli) :
    (∏ i, (if m i = Pauli_I then (2 : ℂ) else 0))
      = if (∀ i, m i = Pauli_I) then (2 : ℂ) ^ n else 0 := by
  split_ifs <;> simp_all +decide [ Finset.prod_ite ]

lemma trace_fold_prod (z : pgroup_phases) (m : Fin n → Pauli) :
    Matrix.trace (fold (z, m)).val
      = z.1.z * ∏ i, (if m i = Pauli_I then (2 : ℂ) else 0) := by
  have hval : (fold (z, m)).val
      = z.1.z • (unitary_n_nkron (fun i => (m i).val)).val := rfl
  have hprod : ∏ i, Matrix.trace ((m i : 𝐔ₙ[1]).val)
      = ∏ i, (if m i = Pauli_I then (2 : ℂ) else 0) :=
    Finset.prod_congr rfl (fun i _ => trace_pauli_single (m i))
  calc Matrix.trace (fold (z, m)).val
      = Matrix.trace (z.1.z • (unitary_n_nkron (fun i => (m i).val)).val) := by rw [hval]
    _ = z.1.z * Matrix.trace ((unitary_n_nkron (fun i => (m i).val)).val) :=
        Matrix.trace_smul _ _
    _ = z.1.z * ∏ i, Matrix.trace ((m i : 𝐔ₙ[1]).val) := by rw [trace_unitary_n_nkron]
    _ = z.1.z * ∏ i, (if m i = Pauli_I then (2 : ℂ) else 0) := by rw [hprod]

lemma trace_fold_eq (z : pgroup_phases) (m : Fin n → Pauli) :
    Matrix.trace (fold (z, m)).val
      = if (∀ i, m i = Pauli_I) then z.1.z * (2 : ℂ) ^ n else 0 := by
  rw [trace_fold_prod, prod_if_pauli_I]
  split <;> simp

end
