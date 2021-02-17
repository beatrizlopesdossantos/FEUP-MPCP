.text
.global CheckRange
.type CheckRange,"function"

CheckRange: MOV X5, 0
			NEG X6, X0

CICLO:		CBZ X1, FIM
            LDRSW X7, [X2]
            CMP X7, X0
            B.GT SUB
            CMP X7, X6
            B.LT SUB2
            B PROX

SUB:     	STR W0, [X2]
			ADD X5, X5, #1
			B PROX

SUB2:     	STR W6, [X2]
			ADD X5, X5, #1
			B PROX

PROX:       ADD X2, X2, #4
            SUB X1, X1, #1
            B CICLO

FIM:        MOV X0, X5
			RET
