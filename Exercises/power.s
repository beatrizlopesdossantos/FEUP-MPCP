.text
.global power
.type power,"function"

power:		mov X2, #1
			mov X3, #0

loop:		cbz W1, result
			sub W1, W1, 1
			smull X2, W2, W0
			asr X3, X2, 31
			cbz X3, loop
			cmp X3, #-1
			b.eq loop
			b overflow

overflow:	mov W0, #0
			ret

result:		mov W0, W2
			ret
