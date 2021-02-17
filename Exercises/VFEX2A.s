.text
.global VFEX2A
.type VFEX2A, "function"

VFEX2A: MOV W1, 3
		SCVTF S4, W1
		FSUB S1, S0, S1
		FMUL S1, S1, S2
		FADD D3, D3, D0
		FSUB D0, D3, D4
		FDIV D0, D1, D0
		ret
