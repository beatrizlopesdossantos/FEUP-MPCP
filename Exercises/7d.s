.text
.global F3EX7D
.type F3EX7D, "function"

F3EX7D:	MOV X3, 0

CICLO:	CBZ X2, FIM
		LDR W5, [X0]
		LDR W6, [X1]
		MUL W5, W5, W6
		ADD X3, X3, X5
		SUB W2, W2, 1
		ADD X0, X0, 4
		ADD X1, X1, 4
		B CICLO
FIM: 	MOV X0, X3
		ret
