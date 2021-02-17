.text
.global altV
.type altV, "function"

altV: 	LSR X1, X1, #2

CICLO:  CBZ X1, FIM
		SUB X1, X1, #1
		LDR Q1, [X0]
		FMUL V1.4S, V1.4S, V0.S[0]
		STR Q1, [X0]
		ADD X0, X0, #16
		B CICLO

FIM:    RET
