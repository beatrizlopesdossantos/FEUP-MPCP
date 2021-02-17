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
.global cosseno
.text
.global func
.type func, "function"

func: 	STP X29, X30, [SP, #-16]!

		UCVTF D0, X0
		LDR D1, Const3
		LDR D2, Constpi
		FDIV D0, D0, D1
		FMUL D0, D0, D2

		BL cosseno
		LDR D1, Const1
		LDR D2, Const2
		FMUL D0, D0, D2
		FADD D0, D0, D1

		LDP X29, X30, [SP], #16
		RET
