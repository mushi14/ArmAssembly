
.global fib_rec_s

@ r0: n, nth number to find in the sequence

fib_rec_s:
	cmp r0, #0
	beq zero_or_one
	
	cmp r0, #1
	beq zero_or_one

	push {lr}
	mov r3, #0
	bl recurse
	pop {lr}

	b end

recurse:
	push {lr}
	sub r0, r0, #1
	cmp r0, #0
	beq pop_lr
	bl recurse

pop_lr:
	pop {lr}
	
	cmp r0, #0
	beq base_case_one

	cmp r0, #1
	beq base_case_two

	add r3, r2, r1
	mov r1, r2
	mov r2, r3	

	bx lr

base_case_one:
	mov r1, #0
	add r0, r0, #1
	b zero_or_one

base_case_two:
	mov r2, #1
	add r0, r0, #1
	b zero_or_one

zero_or_one:
	bx lr

end:
	mov r0, r3
	bx lr
	
