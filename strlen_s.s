.global strlen_s

@ r0: s, string to find the length of

strlen_s:
	mov r1, #0

loop:
	ldrb r2, [r0]
	add r0, r0, #1

	cmp r2, #0
	beq end

	add r1, r1, #1	
	b loop

end: 	
	mov r0, r1
	bx lr
