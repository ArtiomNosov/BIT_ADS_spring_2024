all: hello

hello: main.o obj.o
	gcc main.o obj.o -o hello

main.o: main.c
	gcc -c main.c

obj.o: obj.c
	gcc -c obj.c
