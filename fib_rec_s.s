.global fib_rec_s

@ r0: n, nth number to find in the sequence

fib_rec_s:
	cmp r0, #0
	beq zero
	
	push {lr}
	mov r2, #0

	add r0, r0, #1
	bl recurse
	pop {lr}

	mov r0, r2
	bx lr

recurse:
	push {lr}	
	sub r0, r0, #1
	cmp r0, #1
	beq basecase
	bl recurse

basecase:
	pop {lr}
	add r2,r2, r0
	bx lr

zero:
	bx lr
