.text
.global conta_ocorr
.type conta_ocorr,"function"


conta_ocorr: DUP V1.16B, W2
		     MOV X4, #0

CICLO:		 CBZ W1, FIM
			 LDR Q0, [X0]
			 CMEQ V2.16B, V0.16B, V1.16B
			 ADDV B3, V2.16B
			 SMOV X3, V3.B[0]
			 ADD X4, X4, X3
			 SUB W1, W1, #8
FIM: 	 	 MOV X2, 0
			 SUB X0, X2, X4
			 RET
