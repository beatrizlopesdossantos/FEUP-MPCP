.text
.global SOMA_V2
.type SOMA_V2, "function"

SOMA_V2:	EOR W4, W4, W4
CICLO:
		CBZ X1, FIM
		LDR W3, [X0]
		SUB X1, X1, 1
		ADD W4, W4, W3
		ADD X0, X0, #8
		B	CICLO
FIM:	mov W0, W4
ret
