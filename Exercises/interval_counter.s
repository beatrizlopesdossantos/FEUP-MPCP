.text
.global interval_counter
.type interval_counter, "function"

interval_counter:
		MOV X4, #0

CYCLE:	CBZ X1, END
		SUB X1, X1, #1
		LDR S5, [X0], #4
		FCMP S5, S0
		B.LT NOT
		FCMP S5, S1
		B.GT NOT
		ADD X4, X4, #1

NOT:	B CYCLE

END:	MOV X0, X4
		RET
