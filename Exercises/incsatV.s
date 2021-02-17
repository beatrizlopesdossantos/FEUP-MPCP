.text
.global incsatV
.type incsatV,"function"

//X0 ENDEREÇO DO VETOR DE INT
//W1 NUMERO DE ELEMENTOS (MÚLTIPLO DE 4)
//W2 INTEIRO A SOMAR

incsatV: LSR W1, W1, #2
		 DUP V3.4S, W2

L2: 	 CBZ W1, FIM
		 LDR Q0, [X0]
		 SQADD V0.4S, V0.4S, V3.4S
		 STR Q0, [X0], #16
		 SUB W1, W1, #1
		 B L2

FIM: 	 RET
