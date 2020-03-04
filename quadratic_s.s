.global quadratic_s

@ r0: x
@ r1: a
@ r2: b
@ r3: c

quadratic_s:

	@ performs the quadratic functions and moves variables around in the order of operation
	mul r5, r0, r0
	mul r1, r1, r5
	mul r2, r2, r0	

	add r0, r1, r2
	add r0, r0, r3

	bx lr	
