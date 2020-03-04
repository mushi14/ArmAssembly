
.global fib_rec_s

@ r0: n, nth number to find in the sequence

fib_rec_s:
	
	@ if given n is 0
	cmp r0, #0
	beq zero_or_one
	
	@ if given n is 1
	cmp r0, #1
	beq zero_or_one

	push {lr}
	add r0, r0, #1
	mov r3, #0
	bl recurse
	pop {lr}

	b end

recurse:
	
	@ pushing for n iterations
	push {lr}
	sub r0, r0, #1
	
	@ branch to pop_lr if n number of iterations done
	cmp r0, #0
	beq pop_lr
	bl recurse

pop_lr:
	
	@ popping n number of times
	pop {lr}
	
	@ if r0 is 0, branch to base_case_zero
	cmp r0, #0
	beq base_case_zero

	@ if r0 is 1, branch to base_case_one
	cmp r0, #1
	beq base_case_one

	@ if r0 is anything other than 0 or 1, add r1 and r2 to find r3
	@ update r1 to r2, and r2 to r3
	add r3, r2, r1
	mov r1, r2
	mov r2, r3	

	bx lr

base_case_zero:

	@ moves 0 to r1 and adds 1 to r0
	mov r1, #0
	add r0, r0, #1
	b zero_or_one

base_case_one:

	@ moves 1 to r2 and adds 1 to r0
	mov r2, #1
	add r0, r0, #1
	b zero_or_one

zero_or_one:

	@ to return
	bx lr

end:
	
	@ to be executed at end the program
	mov r0, r3
	bx lr
	
