ASM=as
ASMFLAGS=-g
OBJS=quadratic_c.o quadratic_s.o sum_array_c.o sum_array_s.o find_max_c.o find_max_s.o fib_iter_c.o fib_iter_s.o fib_rec_c.o fib_rec_s.o strlen_c.o strlen_s.o main.o
EXECUTABLE=main

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $^

%.o: %.s
	$(ASM) $(ASMFLAGS) -o $@ $<

clean:
	rm -rf $(EXECUTABLE) $(OBJS)
