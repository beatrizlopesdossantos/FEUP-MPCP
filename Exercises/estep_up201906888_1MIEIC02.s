.text
.global eStep
.type eStep,"function"

eStep:		MOV X5, X2


CICLO1:		CBZ X0, FIM
			MOV X8, X3
			MOV X2, #0
			SUB X0, X0, #1
			LDR S0, [X1], #4
			LDR S1, [X1], #4
			FCVT D0, S0
			FCVT D1, S1

CICLO2:		CMP X2, X5
			B.EQ NEXT
			LDR D2, [X8], #8
			LDR D3, [X8], #8

DISTANCIA:	FSUB D4, D2, D0
			FMUL D4, D4, D4
			FSUB D5, D3, D1
			FMUL D5, D5, D5
			FADD D4, D4, D5
			FSQRT D4, D4
			CMP X2, #0
			B.EQ SAVE
			FCMP D4, D6
			B.GE NEXT1
			FMOV D6, D4
			STR X2, [X4]
			B NEXT1

NEXT1:		ADD X2, X2, #1
			B CICLO2

NEXT:		ADD X4, X4, #4
			B CICLO1


SAVE:		FMOV D6, D4
			STR X2, [X4]
			ADD X2, X2, #1
			B CICLO2

FIM:		RET
