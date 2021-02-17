.text
.global POS1msb
.type POS1msb, "function"

POS1msb:	MOV X2, #63
			CLZ X1, X0
			SUB X1, X2, X1
			MOV X0, X1

ret
