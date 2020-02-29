.global fib_iter_s

@ r0: n, nth number to find in the sequence

fib_iter_s:
	mov r1, #0
	mov r2, #0
	mov r3, #1
	mov ip, #1

loop:
	add ip, ip, #1
	mov r1, r2
	mov r2, r3
	add r3,	r1, r2
	
	cmp ip, r0
	blt loop

end:
	mov r0, r3
	bx lr
