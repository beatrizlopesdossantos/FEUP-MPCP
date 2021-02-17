.text
.global NCAP
.type NCAP, "function"

NCAP:	ADDS X8, X7, #1  // Para garantir que Z=0

		RBIT W1, W0
		CMP W0, W1  // Para testar flag
		CSET W0, EQ
ret
