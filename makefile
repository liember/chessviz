
.PHONY: clean

FLAGS := -std=c99

all: dir main.o board_print_html.o board_read.o logicworks.o
	gcc -Wall build/main.o build/board_print_html.o build/board_read.o build/logicworks.o -o bin/main $(FLAGS)

dir:
	mkdir -p bin build
	cp -r pages bin

main.o: 
	gcc -Wall -Werror -c src/main.c -o build/main.o $(FLAGS)

board_print_html.o: 
	gcc -Wall -Werror -c src/board_print_html.c -o build/board_print_html.o $(FLAGS)

board_read.o: 
	gcc -Wall -Werror -c src/board_read.c -o build/board_read.o $(FLAGS)

logicworks.o: 
	gcc -Wall -Werror -c src/logicworks.c -o build/logicworks.o $(FLAGS)

clean:
	rm -f *.o
	rm -f main
	rm -rf bin build