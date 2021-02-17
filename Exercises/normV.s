.text
.global normV
.type normV,"function"


normV:	MOV X2, #0
		SCVTF D3, X2

CICLO:  CBZ X1, FIM
		LDR Q0, [X0], #16
		FMUL V1.2D, V0.2D, V0.2D
		FADDP D2, V1.2D
		FADD D3, D3, D2
		SUB X1, X1, #2
		B CICLO

FIM: 	FSQRT D0, D3
		RET
