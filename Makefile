ASM=as
ASMFLAGS=-g
OBJS=main_s.o
EXECUTABLE=main_s

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $^

%.o: %.s
	$(ASM) $(ASMFLAGS) -o $@ $<

clean:
	rm -rf $(EXECUTABLE) $(OBJS)