#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/board_read.h"
#include "lib/error_processing.h"

#define ERROR 0

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

char* parse_digit_error
        = "Неверные входные данные: численные координаты фигуры";
char* parse_char_error = "GKSDFOPDSK:JLF:L";
char* parse_figuretype_error = "GKSDFOPDSK:JLF:L";

figure_coordinate identify_figure(char* f)
{
    printf("-start identify_figure %c \n", f[0]);
    figure_coordinate returnity;
    if ((f[2] == '-') || (f[2] == 'x')) {
        returnity.figure = PAWN;
        returnity.ox = getfigureox(f[0]);
        returnity.oy = getfigureoy(f[1]);
    } else {
        returnity.figure = getfigure(f[0]);
        returnity.ox = getfigureox(f[1]);
        returnity.oy = getfigureoy(f[2]);
    }
    printf("-this figure is %d ox %d oy %d  \n\n",
           returnity.figure,
           returnity.ox,
           returnity.oy);
    return returnity;
}

figure_coordinate identify_figure_target(char* f)
{
    printf("-start identify_figure_target %c \n", f[0]);
    figure_coordinate returnity;
    returnity.ox = getfigureox(f[0]);
    returnity.oy = getfigureoy(f[1]);
    printf("-figure target is ox %d oy %d  \n\n", returnity.ox, returnity.oy);
    return returnity;
}

int getfigure(char f)
{
    printf("--now i see (figure) %c \n", f);
    switch (f) {
    case 'K':
        return KING;
        break;
    case 'Q':
        return QUEEN;
        break;
    case 'R':
        return ROOK;
        break;
    case 'N':
        return KNIGHT;
        break;
    case 'B':
        return BISHOP;
        break;
    default:
        printf("---Uncorrect figure %c \n", f);
        error(parse_figuretype_error);
        return ERROR;
    }
}

int getfigureox(char f)
{
    printf("--now i see (ox) %c \n", f);
    switch (f) {
    case 'a':
        return 0;
        break;
    case 'b':
        return 1;
        break;
    case 'c':
        return 2;
        break;
    case 'd':
        return 3;
        break;
    case 'e':
        return 4;
        break;
    case 'f':
        return 5;
        break;
    case 'g':
        return 6;
        break;
    case 'h':
        return 7;
        break;
    default:
        printf("---Uncorrect input char cordinate %c \n", f);
        error(parse_char_error);
        return ERROR;
    }
}

int getfigureoy(char f)
{
    printf("--now i see (oy) %c \n", f);
    switch (f) {
    case '1':
        return 0;
        break;
    case '2':
        return 1;
        break;
    case '3':
        return 2;
        break;
    case '4':
        return 3;
        break;
    case '5':
        return 4;
        break;
    case '6':
        return 5;
        break;
    case '7':
        return 6;
        break;
    case '8':
        return 7;
        break;
    default:
        printf("---Uncorrect input digit cordinate %c \n", f);
        error(parse_digit_error);
        return ERROR;
    }
}