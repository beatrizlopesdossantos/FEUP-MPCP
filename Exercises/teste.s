.text
.global collatz
.type collatz, %function
collatz :  mov x1, 0
L1 :	   cmp X0, 1
		   beq L3
		   add X1, X1, 1
		   ands X2, X0, 1
		   beq L2
		   mov X4, X0
		   add X0, X0, x0
 		   add X0, X0, X4
 		   add X0, X0, 1
		   b L1
L2 : 	   lsr X0, X0, 1
 		   b L1
L3 : 	   mov X0, X1
 		   ret
