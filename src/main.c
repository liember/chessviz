#include <stdio.h>
#include <string.h>
#include "lib/board_print_html.h"
#include "lib/fileworks.h"
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

int main()
{
    int chesstable[64] = {WROOK, WKNIGHT, WBISHOP, WKING, WQUEEN, WBISHOP, WKNIGHT, WROOK,
                          WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN,
                          BROOK, BKNIGHT, BBISHOP, BKING, BQUEEN, BBISHOP, BKNIGHT, BROOK};

    FILE *inputfile;
    char result_string[20];
    char *fname = "input.txt";

    inputfile = fopen(fname, "r");
    if (inputfile == NULL)
    {
        printf("не могу открыть файл '%s'\n", fname);
        return 1;
    }

    int step = 0;
    createhtml(chesstable, step++);
    while (fgets(result_string, sizeof(result_string), inputfile))
    {
        for (int j = 0; j < strlen(result_string); j++)
        {
            if (result_string[j] == ' ')
            {
                printf("start from %c \n", result_string[j + 1]);
                figure_coordinate figure1 = identify_figure(&result_string[j + 1]);
                figure_coordinate figuretarget = identify_figure(&result_string[j + 5]);
                execute_comand(figure1, result_string[j + 4], figuretarget, chesstable);
                createhtml(chesstable, step++);
                printf("end \n");
            }
        }
    }
    fclose(inputfile);
    printf("Воспроизведение партии успешно завершено.\n");
    return 0;
}
