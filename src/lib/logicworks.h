#ifndef LOGICKWORKS_H
#define LOGICKWORKS_H

void swap(int* a, int* b);
void movepawn(
        figure_coordinate figure, figure_coordinate figuretarget, int* table);
void execute_comand(
        figure_coordinate figure,
        char comand,
        figure_coordinate figuretarget,
        int* table);

#endif
