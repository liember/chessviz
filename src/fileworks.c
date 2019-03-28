#include "fileworks.h"
#include <stdio.h>

#define ERROR 99

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

figure_coordinate identify_figure(char *f)
{
    figure_coordinate returnity;
    returnity.figure = getfigure(f);
    returnity.ox = getfigureox(f + 1);
    returnity.oy = getfigureoy(f + 2);
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
        printf("Uncorrect figure");
        return ERROR;
    }
}

int getfigureox(char f)
{
    switch (f)
    {
    case 'a':
        return KING;
        break;
    case 'b':
        return QUEEN;
        break;
    case 'c':
        return ROOK;
        break;
    case 'd':
        return KNIGHT;
        break;
    case 'e':
        return BISHOP;
        break;
    case 'f':
        return PAWN;
        break;
    case 'g':
        return PAWN;
        break;
    case 'h':
        return PAWN;
        break;
    default:
        printf("Uncorrect input char cordinate");
        return ERROR;
    }
}

int getfigureoy(char f{
    switch (f)
    {
    case '1':
        return KING;
        break;
    case '2':
        return QUEEN;
        break;
    case '3':
        return ROOK;
        break;
    case '4':
        return KNIGHT;
        break;
    case '5':
        return BISHOP;
        break;
    case '6':
        return PAWN;
        break;
    case '7':
        return PAWN;
        break;
    case '8':
        return PAWN;
        break;
    default:
        printf("Uncorrect input digit cordinate");
        return ERROR;
    }
}