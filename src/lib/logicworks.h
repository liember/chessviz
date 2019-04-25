#pragma once
void smartswap(int* a, int* b);
void atackfigure(int* a, int* b);
void movepawn(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand);
void movebishop(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand);
void moverook(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand);
void moveking(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand);
void movequeen(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand);
void moveknight(
        figure_coordinate figure,
        figure_coordinate figuretarget,
        int* table,
        char comand);
void execute_comand(
        figure_coordinate figure,
        char comand,
        figure_coordinate figuretarget,
        int* table);

void movefigure(
        figure_coordinate figure, figure_coordinate figuretarget, int* table);


