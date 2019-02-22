#include <stdio.h>

#define PAWN 0
#define KNIGHT 1
#define BISHOP 2
#define ROOK 3
#define QUEEN 4
#define KING 5

#define EMPTY 6
#define WHITE 0
#define BLACK 1

struct square_coordinate
{
    int ox;
    int oy;
};

int main()
{
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