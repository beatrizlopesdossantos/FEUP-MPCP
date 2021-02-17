.text
.global VFEX1A
.type VFEX1A, "function"

VFEX1AB: FADD D0, D0, D2
		 FNEG D1, D1
		 FMUL D0, D1, D0
		 ret
