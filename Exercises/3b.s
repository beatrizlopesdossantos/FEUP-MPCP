.text
.global F3EX3B
.type F3EX3B, "function"

F3EX3B: EOR X8, X8, X8
CICLO:
		LDRB W3, [X0]
		CBZ W3, FIM
		CMP W3, W1
		B.NE PROX
		ADD X8, X8, #1
PROX:   ADD X0, X0, #1
		B CICLO
FIM:    mov X0, X8
ret
