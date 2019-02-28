#ifndef DRAWDESK_H
#define DRAWDESK_H

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

typedef struct //положение фигРЫ
{
    char figure;
    int ox;
    int oy;
} figure_coordinate;

int createfigurehtml(int element);
void createhtml(int *table);

#endif
