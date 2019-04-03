
FLAGS := -std=c99

all: dir main.o board_print_html.o fileworks.o logicworks.o
	gcc -Wall build/main.o build/board_print_html.o build/fileworks.o build/logicworks.o -o bin/main $(FLAGS)

dir:
	mkdir -p bin build
main.o: 
	gcc -Wall -Werror -c src/main.c -o build/main.o $(FLAGS)
board_print_html.o: 
	gcc -Wall -Werror -c src/board_print_html.c -o build/board_print_html.o $(FLAGS)
fileworks.o: 
	gcc -Wall -Werror -c src/fileworks.c -o build/fileworks.o $(FLAGS)
logicworks.o: 
	gcc -Wall -Werror -c src/logicworks.c -o build/logicworks.o $(FLAGS)

clean:
	rm -f *.o
	rm -f main