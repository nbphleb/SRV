all: main check

debug: main.c
	gcc -g -o main_debug main.c

main: main.c
	gcc -o main main.c

check: check.c
	gcc -o check check.c
	
clean:
	$(RM) main check main_debug *.o *~
