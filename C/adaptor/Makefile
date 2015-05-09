CFLAGSS = -WALL -O2
CC=gcc
OBJS=interface.o adaptee.o adaptor.o main.o

obj: $(OBJS)
	$(CC) $(OBJS) -o adaptor

clean:
	rm adaptor $(OBJS)
