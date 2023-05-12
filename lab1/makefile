CC = gcc
CFLAGS = -Wall
OBJ_MAIN = main.o getname.o
OBJ_CHECK = check.o getname.o

debug: CFLAGS += -g
debug: main check

all: main check

main: $(OBJ_MAIN)
	$(CC) $(CFLAGS) -o main $(OBJ_MAIN)

main.o: main.c getname.h
	$(CC) $(CFLAGS) -c main.c
	
getname.o: getname.c getname.h
	$(CC) $(CFLAGS) -c getname.c
	
check: $(OBJ_CHECK)
	$(CC) $(CFLAGS) -o check $(OBJ_CHECK)
	
check.o: check.c getname.h
	$(CC) $(CFLAGS) -c check.c
	
clean:
	$(RM) main check *.o *~
