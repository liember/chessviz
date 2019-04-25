.PHONY: clean
.PHONY: test
CCFLAGS=-Wall -Wextra -Wshadow -Werror -std=gnu17 
CC=clang
OUT= build/
EXE = bin/
SRC=src/
ALLOBJ = $(OUT)error_processing.o $(OUT)board_print_html.o $(OUT)board_read.o $(OUT)logicworks.o  $(OUT)main.o
ALLOBJT = $(OUT)error_processing.o $(OUT)board_print_html.o $(OUT)board_read.o $(OUT)logicworks.o  

all: $(EXE) build $(EXE)main $(EXE)pages

$(EXE)main: $(ALLOBJ) 
	$(CC) $(CCFLAGS) $(ALLOBJ) -o $@

$(EXE): 
	mkdir -p bin 

$(EXE)pages:
	cp -r $(SRC)pages bin
	cp -r input.txt bin

build:
	mkdir -p build

$(OUT)%.o: $(SRC)%.c 
	$(CC) $(CCFLAGS) -MP -MMD -c -o $@ $<

clean:
	rm -rf bin build
	 
reinstall: clean all 
	cp -r input.txt bin
	./bin/main

#-----------------------------tests------------------------------

$(OUT)maint.o: all
	$(CC) $(CCFLAGS) test/main.c -c -o $(OUT)maint.o
	
$(OUT)board_test.o:
	$(CC) $(CCFLAGS) test/board_test.c -c -o $(OUT)board_test.o
	

test: $(OUT)maint.o  $(OUT)board_test.o $(ALLOBJ) 
	$(CC) $(CCFLAGS) $(OUT)maint.o $(OUT)board_test.o  $(ALLOBJT) -o bin/test