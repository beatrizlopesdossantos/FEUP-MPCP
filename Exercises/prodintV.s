.text
.global prodintV
.type prodintV, "function"

prodintV: 	MOV X4, #0
			LSR W2, W2, #2

CICLO: 		CBZ X2, FIM
			LDR Q0, [X0], #16
			LDR Q1, [X1], #16
			MUL V2.4S, V0.4S, V1.4S
			ADDV S3, V2.4S
			SMOV X3, V3.S[0]
			ADD X4, X4, X3
			SUB X2, X2, #1
			B CICLO

FIM:		MOV X0, X4
			RET
