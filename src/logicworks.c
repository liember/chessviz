#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fileworks.h"
#include "logicworks.h"

#define ERROR 99

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

void execute_comand(figure_coordinate figure, char comand, figure_coordinate figuretarget, int *table)
{
    switch (figure.figure)
    {
    case KING:
        break;
    case QUEEN:

        break;
    case ROOK:

        break;
    case KNIGHT:

        break;
    case BISHOP:

        break;
    case PAWN:
        movepawn(figure, figuretarget, table);
        break;
    default:
        printf("Uncorrect figure\n");
    }
}

void movepawn(figure_coordinate figure, figure_coordinate figuretarget, int *table)
{
    int a = figure.ox * 7 + figure.oy;
    int b = figuretarget.ox * 8 + figuretarget.oy;
    swap(&table[a], &table[b]);
}

void swap(int *a, int *b)
{
    int t;
    t = *a, *a = *b, *b = t;
}