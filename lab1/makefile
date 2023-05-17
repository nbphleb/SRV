CC = gcc
CFLAGS =
OBJ_MAIN = main.o getname.o
OBJ_CHECK = check.o getname.o

all: main check

main: $(OBJ_MAIN)
	$(CC) -o main $(OBJ_MAIN)

main.o: main.c getname.h
	$(CC) $(CFLAGS) -c main.c
	
getname.o: getname.c getname.h
	$(CC) $(CFLAGS) -c getname.c
	
check: $(OBJ_CHECK)
	$(CC) -o check $(OBJ_CHECK)
	
check.o: check.c getname.h
	$(CC) $(CFLAGS) -c check.c

debug_main: CFLAGS+= -g
debug_main: $(OBJ_MAIN)
	$(CC) $(CFLAGS) -o debug_main $(OBJ_MAIN)

debug_check: CFLAGS+= -g
debug_check: $(OBJ_CHECK)
	$(CC) $(CFLAGS) -o debug_check $(OBJ_CHECK)
	
clean:
	$(RM) main check debug_main debug_check *.o *~
