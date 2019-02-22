#include <stdio.h>

typedef struct //положение фигРЫ
{
    char figure;
    int ox;
    int oy;
} figure_coordinate;

int main()
{
    FILE *fp;
    char name[] = "input.inst";
    char a;
    int sum;

    figure_coordinate source_field[32] = {
        {"R", 1, 1},
        {"N", 2, 1},
        {"B", 3, 1},
        {"Q", 4, 1},
        {"K", 5, 1},
        {"B", 6, 1},
        {"N", 7, 1},
        {"R", 8, 1},
        {"P", 1, 2},
        {"P", 2, 2},
        {"P", 3, 2},
        {"P", 4, 2},
        {"P", 5, 2},
        {"P", 6, 2},
        {"P", 7, 2},
        {"P", 8, 2},
        {"P", 1, 7},
        {"P", 2, 7},
        {"P", 3, 7},
        {"P", 4, 7},
        {"P", 5, 7},
        {"P", 6, 7},
        {"P", 7, 7},
        {"P", 8, 7},
        {"R", 1, 8},
        {"N", 2, 8},
        {"B", 3, 8},
        {"Q", 4, 8},
        {"K", 5, 8},
        {"B", 6, 8},
        {"N", 7, 8},
        {"R", 8, 8}

    };

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