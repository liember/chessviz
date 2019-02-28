#include <stdio.h>
#include "drawdesk.h"

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

int main()
{
    int chesstable[64] = {WROOK, WKNIGHT, WBISHOP, WKING, WQUEEN, WBISHOP, WKNIGHT, WROOK,
                          WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN, WPAWN,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                          BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN, BPAWN,
                          BROOK, BKNIGHT, BBISHOP, BKING, BQUEEN, BBISHOP, BKNIGHT, BROOK};

    FILE *fp;
    char name[] = "input.inst";
    char a;
    int sum;

    createhtml(&chesstable[0]);

    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("Не удалось открыть файл шахматных нотаций для воспроизведения партии");
        getchar();
        return 1;
    } // открыть файл удалось

    sum = feof(fp);
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
