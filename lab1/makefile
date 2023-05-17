CC = gcc
OBJ_MAIN = main.o getname.o
OBJ_CHECK = check.o getname.o

all: main check

debug_main: $(OBJ_MAIN)
	$(CC) -g -o debug_main $(OBJ_MAIN)
	
debug_check: $(OBJ_CHECK)
	$(CC) -g -o debug_check $(OBJ_CHECK)

main: $(OBJ_MAIN)
	$(CC) -o main $(OBJ_MAIN)

main.o: main.c getname.h
	$(CC) -c main.c
	
getname.o: getname.c getname.h
	$(CC) -c getname.c
	
check: $(OBJ_CHECK)
	$(CC) -o check $(OBJ_CHECK)
	
check.o: check.c getname.h
	$(CC) -c check.c
	
clean:
	$(RM) main check *.o *~
