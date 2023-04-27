CC = gcc
CFLAGS = -I
DEPS = getname.h
OBJ_MAIN = main.o getname.o
OBJ_CHECK = check.o getname.o

debug: CFLAGS += -g
debug: main check

all: main check

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
main: $(OBJ_MAIN)
	$(CC) -o $@ $^ $(CFLAGS)
	
check: $(OBJ_CHECK)
	$(CC) -o $@ $^ $(CFLAGS)
	
clean:
	rm *.o main check
