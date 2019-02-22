#include <stdio.h>

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

int main()
{
    int chesstable[64] = {BROOK, BKNIGHT, BBISHOP, BQUEEN, BKING, BBISHOP, BKNIGHT, BROOK,
                          BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN,
                          WROOK, WKNIGHT, WBISHOP, WQUEEN, WKING, WBISHOP, WKNIGHT, WROOK};

    FILE *fp;
    char name[] = "input.inst";
    char a;
    int sum;

    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("Не удалось открыть файл шахматных нотаций для воспроизведения партии");
        getchar();
        return 1;
    } // открыть файл удалось

    while (!sum)
    {
        fscanf(fp, "%c", &a);
        printf("%c\n", a);
        sum = feof(fp);
    }

    fclose(fp); //конец программы
    getchar();
    return 0;
}