.data
Constpi: .double 3.1415926535897932
Const1: .double 100.0
Const2: .double 50.0
Const3: .double 180.0
ConstF1: .double 1.0
ConstF2: .double 0.5
ConstF4: .double 0.04166666666666666667
ConstF6: .double 0.00138888888888888889
ConstF8: .double 0.00002480158730158730
ConstF10: .double 0.00000027557319223986

.text
.global cosseno
.type cosseno, "function"

cosseno: STP X20, X30, [SP, #-16]!

		 FMUL D0, D0, D0
		 FNEG D0, D0

		 LDR D1, ConstF10
		 FMUL D1, D1, D0

		 LDR D2, ConstF8
		 FADD D1, D1, D2
		 FMUL D1, D1, D0

		 LDR D2, ConstF6
		 FADD D1, D1, D2
		 FMUL D1, D1, D0

		 LDR D2, ConstF4
		 FADD D1, D1, D2
		 FMUL D1, D1, D0

		 LDR D2, ConstF2
		 FADD D1, D1, D2
		 FMUL D1, D1, D0

		 LDR D2, ConstF1
		 FADD D1, D1, D2

		 FMOV D0, D1

		 LDP X29, X30, [SP], #16
		 RET
