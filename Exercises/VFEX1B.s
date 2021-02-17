.text
.global VFEX1B
.type VFEX1B, "function"

VFEX1B:
	FSQRT D0, D0
	SCVTF D1, W0
	FADD D0, D0, D1
	RET
