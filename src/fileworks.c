#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fileworks.h"

#define ERROR 0

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

figure_coordinate identify_figure(char *f)
{
    figure_coordinate returnity;
    returnity.figure = getfigure(*f);
    returnity.ox = getfigureox(*f + 1);
    returnity.oy = getfigureoy(*f + 2);
    return returnity;
}

int getfigure(char f)
{
    switch (f)
    {
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
    case 'P':
        return PAWN;
        break;
    default:
        printf("Uncorrect figure %c \n", f);
        return ERROR;
    }
}

int getfigureox(char f)
{
    switch (f)
    {
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
        printf("Uncorrect input char cordinate %c \n", f);
        return ERROR;
    }
}

int getfigureoy(char f)
{
    switch (f)
    {
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
        printf("Uncorrect input digit cordinate %c \n", f);
        return ERROR;
    }
}