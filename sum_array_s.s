.global sum_array_s

@ r0: array, array to find sum of
@ r1: n, length of array

sum_array_s:
	
	@ variable used to find the sum
	mov r2, #0

	@ counter
	mov ip, #0

loop:

	@ loads the array element value in to r3
	ldr r3, [r0]

	@ adds the loaded value to the sum variable
	add r2, r2, r3

	@ updates the counter
	add ip, ip, #1

	@ updates the array pointer to point to the next element
	add r0, r0, #4
	
	@ if array length is not reached keep looping
	cmp ip, r1
	blt loop

	@ moves sum value to r0 for returning purposes
	mov r0, r2
	bx lr
