#ifndef FILEWORKS_H
#define FILEWORKS_H

typedef struct //положение фигРЫ
{
    int figure;
    int ox;
    int oy;
} figure_coordinate;

int chesstable[64] = {WROOK, WKNIGHT, WBISHOP, WKING, WQUEEN, WBISHOP, WKNIGHT, WROOK,
                      WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN,
                      EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                      EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                      EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                      EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                      BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN,
                      BROOK, BKNIGHT, BBISHOP, BKING, BQUEEN, BBISHOP, BKNIGHT, BROOK};

FILE *inputfile;
char result_string[20];
char *fname = "input.txt";
int step = 1;

figure_coordinate identify_figure(char *f);

#endif
