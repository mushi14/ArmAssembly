.global sum_array_s

@ r0: array, array to find sum of
@ r1: n, length of array

sum_array_s:

	mov r2, #0
	mov ip, #0

loop:
	ldr r3, [r0]
	add r2, r2, r3
	add ip, ip, #1
	add r0, r0, #4

	cmp ip, r1
	blt loop

	mov r0, r2
	bx lr
