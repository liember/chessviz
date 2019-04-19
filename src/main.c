#include <stdio.h>
#include <string.h>

#include "lib/board_print_html.h"
#include "lib/board_read.h"
#include "lib/error_processing.h"
#include "lib/logicworks.h"

#define WPAWN 0
#define WKNIGHT 1
#define WBISHOP 2
#define WROOK 3
#define WQUEEN 4
#define WKING 5
#define BPAWN 6
#define BKNIGHT 7
#define BBISHOP 8
#define BROOK 9
#define BQUEEN 10
#define BKING 11
#define EMPTY 12

#define TRUE 100
#define FALSE 200

int main()
{
    int chesstable[64]
            = {WROOK, WKNIGHT, WBISHOP, WKING, WQUEEN, WBISHOP, WKNIGHT, WROOK,
               WPAWN, WPAWN,   WPAWN,   WPAWN, WPAWN,  WPAWN,   WPAWN,   WPAWN,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               BPAWN, BPAWN,   BPAWN,   BPAWN, BPAWN,  BPAWN,   BPAWN,   BPAWN,
               BROOK, BKNIGHT, BBISHOP, BKING, BQUEEN, BBISHOP, BKNIGHT, BROOK};

    FILE* inputfile;
    char* file_open_error = "Ошибка открытия файла нотации.\n";
    char result_string[20];
    char* fname = "input.txt";
    char comand;
    int step = 0;
    int flagofmate = FALSE;
    figure_coordinate figuretarget;
    figure_coordinate figure;

    inputfile = fopen(fname, "r");
    if (inputfile == NULL) {
        printf("не могу открыть файл '%s'\n", fname);
        error(file_open_error);
    }
    // saffasfas
    generatebeginpage();
    beginhtml(chesstable, step++);
    while (fgets(result_string, sizeof(result_string), inputfile)) {
        for (int j = 0; j < (signed int)strlen(result_string); j++) {
            if (result_string[j] == ' ') {
                printf("start parsing from %c \n", result_string[j + 1]);
                figure = identify_figure(&result_string[j + 1]);

                if (figure.figure == 6) {
                    figuretarget
                            = identify_figure_target(&result_string[j + 4]);
                    comand = result_string[j + 3];
                    if (result_string[j + 6] == '#') {
                        flagofmate = TRUE;
                    }
                } else {
                    figuretarget
                            = identify_figure_target(&result_string[j + 5]);
                    comand = result_string[j + 4];
                    if (result_string[j + 7] == '#') {
                        flagofmate = TRUE;
                    }
                }

                execute_comand(figure, comand, figuretarget, chesstable);
                if (flagofmate == FALSE) {
                    createhtml(chesstable, step++);
                    printf("end \n");
                } else {
                    endhtml(chesstable, step++);
                    printf("Game over.\n");
                }
            }
        }
    }
    fclose(inputfile);
    return 0;
}
