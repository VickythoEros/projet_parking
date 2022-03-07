prog: main.o controllers.o
	gcc -o prog main.o controllers.o -lm
main.o: main.c
	gcc -c main.c
controllers.o: controllers.c
	gcc -c controllers.c