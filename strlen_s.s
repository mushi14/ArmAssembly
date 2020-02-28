.global strlen_s

@ r0: s, string to find the length of

strlen_s:

	mov r2, #0x00

loop:
	ldr r2, [r0]
	sxtb r3, r2

	cmp r2, r3
	blt end

	mov r0, #50
	bx lr
end:
	mov r0, #100	
	bx lr
