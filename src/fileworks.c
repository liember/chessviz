#include "fileworks.h"
#include <stdio.h>

int openfile(FILE **inputfile)
{
    if ((inputfile = fopen("input", "r")) == NULL)
    {
        printf("Не удалось открыть файл шахматных нотаций для воспроизведения партии");
        getchar();
        return 1;
    } // открыть файл удалось
    return 0;
}