.text
.global F4EX4A
.type F4EX4A, "function"

F4EX4A:
		EOR X8, X8, X8
		MOV X10, X0

CICLO:	LDRB W3, [X0]
		CBZ W3, RESCREVER
		STR W3, [SP, #-16]!
		ADD X8, X8, #1
		ADD X0, X0, #1
		B CICLO

RESCREVER:
		CBZ X8, FIM
		LDR W3, [SP], #16
		STRB W3, [X10]
		SUB X8, X8, #1
		ADD X10, X10, #1
		B RESCREVER

FIM:
ret