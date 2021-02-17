.text
.global F3EX4B
.type F3EX4B, "function"

F3EX4B: CBZ X2, FIM
		LDRSW X8, [X0]
		STR X8, [X1]
		ADD X1, X1, 8
		SUB X2, X2, 1
		ADD X0, X0, #4
		B F3EX4B
FIM:    ret
