.text
.global fourxintab
.type fourxintab, "function"


fourxintab:	MOV X4, #0
			MOV X5, #4
CICLO:		CBZ X1, FIM
			LDR W8, [X0]
			MUL X8, X8, X5
			ADD X0, X0, #4
			SUB X1, X1, #1
			CMP X8, X2
			B.HS SUB
			B CICLO
SUB:		CMP X8, X3
			B.LS SUB2
			B CICLO
SUB2:		ADD X4, X4, #1
			B CICLO
FIM:   		MOV X0, X4
ret
