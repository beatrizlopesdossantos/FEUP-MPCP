.text
.global CountCommon
.type CountCommon,"function"

CountCommon: MOV X5, 0

CICLO:		 MOV X9, X3
			 MOV X6, 0
			 CBZ X0, FIM
			 LDRSW X7, [X1]
			 B CICLO2

CICLO2:		 CMP X2, X6
			 B.EQ PROX2
			 LDRSW X8, [X9]
			 ADD X6, X6, 1
			 CMP X7, X8
			 B.EQ CICLO3
			 B PROX

CICLO3: 	 ADD X5, X5, 1
			 B PROX2

PROX:		 ADD X9, X9, #4
			 B CICLO2

PROX2: 		 SUB X0, X0, 1
			 ADD X1, X1, #4
			 B CICLO

FIM: 		 MOV X0, X5
			 RET
