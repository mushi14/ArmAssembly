.global find_max_s

@ r0: array, array to look through
@ r1: n, length of array

find_max_s:

	mov ip, #0
	mov r2, #0

loop:
	ldr r3, [r0]
	add ip, ip, #1
	add r0, r0, #4

	cmp r2, r3
	mov r2, r3	

	cmp ip, r1
	blt loop

end:	
	mov r0, r2
	bx lr

