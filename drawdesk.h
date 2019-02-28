#ifndef DRAWDESK_H
#define DRAWDESK_H

typedef struct //положение фигРЫ
{
    char figure;
    int ox;
    int oy;
} figure_coordinate;

int createfigurehtml(int element);
void createhtml(int *table);

#endif
