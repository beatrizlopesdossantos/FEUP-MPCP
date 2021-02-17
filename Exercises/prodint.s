.text
.global prodint
.type prodint, "function"

prodint: MOV X8, #0
		 SCVTF D5, X8

CICLO:   CBZ W2, FIM
		 LDR S0, [X0], #4
		 LDR S1, [X1], #4
		 FCVT D1, S0
		 FCVT D2, S1
		 FMADD D0, D1, D2, D0
		 SUB W2, W2, #1
		 B CICLO

FIM:
		 RET
