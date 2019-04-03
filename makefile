all: dir main.o board_print_html.o fileworks.o logicworks.o
	gcc -Wall build/main.o build/board_print_html.o build/fileworks.o build/logicworks.o -o bin/main

dir:
	mkdir -p bin build
main.o: 
	gcc -Wall -Werror -c src/main.c -o build/main.o 
board_print_html.o: 
	gcc -Wall -Werror -c src/board_print_html.c -o build/board_print_html.o 
fileworks.o: 
	gcc -Wall -Werror -c src/fileworks.c -o build/fileworks.o 
logicworks.o: 
	gcc -Wall -Werror -c src/logicworks.c -o build/logicworks.o 

clean:
	rm -f *.o
	rm -f main