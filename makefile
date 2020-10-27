all: main.o construction.o
		gcc -o main construction.o main.o

construction.o: construction.c construction.h
		gcc -c construction.c

main.o: main.c construction.h
		gcc -c main.c

run: main
		./main

.PHONY: clean

clean:
		-rm *.o
