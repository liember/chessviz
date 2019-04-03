#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/board_read.h"
#include "lib/logicworks.h"

#define ERROR 99

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

#define ATTACK 11
#define MOVE 22

void execute_comand(
        figure_coordinate figure,
        char comand,
        figure_coordinate figuretarget,
        int* table)
{
    switch (figure.figure) {
    case KING:
        moveking(figure, figuretarget, table, comand);
        break;
    case QUEEN:
        movequeen(figure, figuretarget, table, comand);
        break;
    case ROOK:
        moverook(figure, figuretarget, table, comand);
        break;
    case KNIGHT:
        moveknight(figure, figuretarget, table, comand);
        break;
    case BISHOP:
        movebishop(figure, figuretarget, table, comand);
        break;
    case PAWN:
        movepawn(figure, figuretarget, table, comand);
        break;
    default:
        printf("Uncorrect figure\n");
    }
}

void movepawn(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand)
{
    int a = figure.oy * 8 + figure.ox;
    int b = figuretarget.oy * 8 + figuretarget.ox;
    if (comand == '-') {
        swap(&table[a], &table[b]);
    } else {
        atackfigure(&table[a], &table[b]);
    }
}
void moveknight(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand)
{
    int a = figure.oy * 8 + figure.ox;
    int b = figuretarget.oy * 8 + figuretarget.ox;
    if (comand == '-') {
        swap(&table[a], &table[b]);
    } else {
        atackfigure(&table[a], &table[b]);
    }
}
void movequeen(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand)
{
    int a = figure.oy * 8 + figure.ox;
    int b = figuretarget.oy * 8 + figuretarget.ox;
    if (comand == '-') {
        swap(&table[a], &table[b]);
    } else {
        atackfigure(&table[a], &table[b]);
    }
}
void moveking(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand)
{
    int a = figure.oy * 8 + figure.ox;
    int b = figuretarget.oy * 8 + figuretarget.ox;
    if (comand == '-') {
        swap(&table[a], &table[b]);
    } else {
        atackfigure(&table[a], &table[b]);
    }
}
void moverook(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand)
{
    int a = figure.oy * 8 + figure.ox;
    int b = figuretarget.oy * 8 + figuretarget.ox;
    if (comand == '-') {
        swap(&table[a], &table[b]);
    } else {
        atackfigure(&table[a], &table[b]);
    }
}
void movebishop(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand)
{
    int a = figure.oy * 8 + figure.ox;
    int b = figuretarget.oy * 8 + figuretarget.ox;
    if (comand == '-') {
        swap(&table[a], &table[b]);
    } else {
        atackfigure(&table[a], &table[b]);
    }
}

void swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void atackfigure(int* a, int* b)
{
    int t = 12;
    *b = *a;
    *a = t;
}
