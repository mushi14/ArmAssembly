ASM=as
ASMFLAGS=-g
OBJS=quadratic_c.o quadratic_s.o main.o
EXECUTABLE=main

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $^

%.o: %.s
	$(ASM) $(ASMFLAGS) -o $@ $<

clean:
	rm -rf $(EXECUTABLE) $(OBJS)
