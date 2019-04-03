#ifndef LOGICKWORKS_H
#define LOGICKWORKS_H

typedef struct {
    coatingarea* poiter;
    int ox;
    int oy;
} coatingarea;

void swap(int* a, int* b);
void movepawn(
        figure_coordinate figure, figure_coordinate figuretarget, int* table);
void execute_comand(
        figure_coordinate figure,
        char comand,
        figure_coordinate figuretarget,
        int* table);
void atackfigure(
        figure_coordinate figure, figure_coordinate figuretarget, int* table);

void movefigure(
        figure_coordinate figure, figure_coordinate figuretarget, int* table);

#endif
