.global fib_iter_s

@ r0: n, nth number to find in the sequence

fib_iter_s:

	@ if given 0 as n, return 0
	cmp r0, #0
	beq zero
	
	@ temporary starters for iterative
	mov r1, #0
	mov r2, #0
	mov r3, #1

	@ counter
	mov ip, #1

loop:
	add ip, ip, #1
	
	@ updating the temp counters
	mov r1, r2
	mov r2, r3
	add r3,	r1, r2
	
	@ if not reached n iterations, keep looping
	cmp ip, r0
	blt loop

end:
	@ move r3 to r0 for returning
	mov r0, r3
	bx lr

zero:
	bx lr
