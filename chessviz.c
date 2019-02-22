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
    FILE *inp;
    FILE *out;
    char name[] = "input.inst";

    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("Не удалось открыть файл шахматных нотаций для воспроизведения партии");
        getchar();
        return 1;
    }

    // открыть файл удалось
    // требуемые действия над данными

    fclose(fp); //конец программы
    getchar();
    return 0;
}