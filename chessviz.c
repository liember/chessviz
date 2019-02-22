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

void createhtml(int *table, int *step)
{
    printf("<!DOCTYPE HTML\n");
    printf("<html>\n");
    printf("<head>\n");
    printf("<meta charset=\"utf-8\">\n");
    printf("<link rel=\"stylesheet\" href=\"cssforhtml.css\">\n");
    printf("<title>Chess game</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<div class=\"contain\">\n");
    printf("<aside class=\"sidebar\">\n");
    printf("<p>Chess game</p>\n");
    printf("</aside>\n");
    printf("<div class=\"content\">\n");
    printf("<div class=\"interface\">\n");
    printf("<div class=\"Chessboard\">\n");
    //code
    //code
    printf("</div>\n");
    printf("<div class=\"menu\">\n");
    printf("<div class=\"titl\">\n");
    printf("<p>Шахматs<p>\n");
    printf("</div>\n");
    printf("</div>\n");
    printf("<div class=\"clear\"></div>\n");
    printf("</div>\n");
    printf("</div>\n");
    printf("</div>\n");
    printf("</body>\n");
    printf("</html>\n");
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
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