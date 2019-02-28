
all: main.o IntVector.o
	gcc main.o IntVector.o -o main $(FLAGS)
main.o: main.c
	gcc -c main.c -o main.o $(FLAGS)
IntVector.o: IntVector.c
	gcc -c IntVector.c -o IntVector.o $(FLAGS)

clean:
	rm -rf *.o