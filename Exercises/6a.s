.text
.global bitchanges
.type bitchanges, "function"

bitchanges:	MOV X12, #0B101010101010
			MOV X11, #0
			MOV X10, #0
			MOV X13, #0

			UBFM X11, X12, #56, #55

			BFI X13, X12, #8, #55
			//BFC X13, #0, #8

			LSL X10, X12, #8
/*
LSL Xd, Xn, #shift ; 64-bit general registers
Equivalent to UBFM Xd, Xn, #(-shift MOD 64), #(63-shift)	//MOD - resto da divisão
*/

