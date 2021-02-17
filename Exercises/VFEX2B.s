.data
pi: .double 3.141592653

.text
.global VFEX2B
.type VFEX2B, "function"

VFEX2B: FMUL D0, D0, D0
		LDR D1, pi
		FMUL D0, D0, D1

ret
