.PHONY: clean
CCFLAGS=-Wall -Wextra -Wshadow -Werror -std=c99
CC=gcc
OUT= build/
EXE = bin/
SRC=src/
ALLOBJ = $(OUT)error_processing.o $(OUT)board_print_html.o $(OUT)board_read.o $(OUT)logicworks.o  $(OUT)main.o

all: bin build bin/main $(EXE)pages

$(EXE)main: $(ALLOBJ) 
	$(CC) $(CCFLAGS) $(ALLOBJ) -o $@

bin: 
	mkdir -p bin 

bin/pages:
	cp -r pages bin

build:
	mkdir -p build

$(OUT)main.o: $(SRC)main.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(OUT)error_processing.o: $(SRC)error_processing.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(OUT)board_print_html.o: $(SRC)board_print_html.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(OUT)board_read.o: $(SRC)board_read.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(OUT)logicworks.o: $(SRC)logicworks.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -rf bin build
	 
start: clean all 
	cp -r input.txt bin
	./bin/main

test: $(ALLOBJ) 
	$(CC) $(CCFLAGS) $(ALLOBJ) -o $@

