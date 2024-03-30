all: hello

hello_0: main.o obj_0.o
	gcc main.o obj_0.o -o hello_0

hello_1: main.o obj_1.o
	gcc main.o obj_1.o -o hello_1

main.o: main.c
	gcc -c main.c

obj_0.o: obj_0.c
	gcc -c obj_0.c

obj_1.o: obj_1.c
	gcc -c obj_1.c
