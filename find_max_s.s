.global find_max_s

@ r0: array, array to look through
@ r1: n, length of array

find_max_s:

	@ counter
	mov ip, #0

	@ setting a minimum
	mov r2, #-100

loop:	

	@ loading the array pointer to r3
	ldr r3, [r0]

	@ updating the array pointer
	add r0, r0, #4

	@ updating counter
	add ip, ip, #1
	
	@ comparing to see if loaded value is greater than r3
	cmp r2, r3
	blt compare	
	
	@ comparing to see if end of array reached
	cmp ip, r1
	blt loop

	@ if end of array reached, ending program
	cmp ip, r1
	bge end	

compare:

	@ sets r3 to the value of r2
	mov r2, r3
	
	cmp ip, r1
	blt loop

end:	

	@ updates r0, and ends program
	mov r0, r2
	bx lr

