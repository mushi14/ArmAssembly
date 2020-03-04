.global strlen_s

@ r0: s, string to find the length of

strlen_s:

	@ temporary value to update
	mov r1, #0

loop:
	
	@ loads bytes from r0 to r2
	ldrb r2, [r0]

	@ moves the char pointer over one to the next character 
	add r0, r0, #1

	@ checks to see if loaded bytes are 0, if they are string has ended
	cmp r2, #0
	beq end

	@ adds to the string length counter and loop again
	add r1, r1, #1	
	b loop

end: 	

	@ moves r1 to r0 for returning purposes
	mov r0, r1
	bx lr
