#ifndef FILEWORKS_H
#define FILEWORKS_H

typedef struct //положение фигРЫ
{
    int figure;
    int ox;
    int oy;
} figure_coordinate;

int getfigureoy(char f);
int getfigureox(char f);
int getfigure(char f);
figure_coordinate identify_figure(char *f);

#endif
