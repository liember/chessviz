#include <stdio.h>
#include <string.h>
#include "board_print_html.h"
#include "fileworks.h"

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

int createfigurehtml(int element, FILE *outputhtmlpage)
{
    switch (element)
    {
    case WPAWN:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/white/pawn.png\">");
        return 0;
        break;
    case WKNIGHT:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/white/knight.png\">");
        return 0;
        break;
    case WBISHOP:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/white/bishop.png\">");
        return 0;
        break;
    case WROOK:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/white/rook.png\">");
        return 0;
        break;
    case WQUEEN:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/white/queen.png\">");
        return 0;
        break;
    case WKING:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/white/king.png\">");
        return 0;
        break;
    case BPAWN:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/black/pawn.png\">");
        return 0;
        break;
    case BKNIGHT:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/black/knight.png\">");
        return 0;
        break;
    case BBISHOP:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/black/bishop.png\">");
        return 0;
        break;
    case BROOK:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/black/rook.png\">");
        return 0;
        break;
    case BQUEEN:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/black/queen.png\">");
        return 0;
        break;
    case BKING:
        fprintf(outputhtmlpage, "<img class=\"figure\" src=\"resourse/black/king.png\">");
        return 0;
        break;
    default:
        return 0;
        break;
    }
}

void createhtml(int *table, int step)
{
    FILE *outputhtmlpage;
    char fname[10];
    sprintf(fname, "%d.txt", step);
    outputhtmlpage = fopen(fname, "w");
    int figure;

    fprintf(outputhtmlpage, "<!doctype html><html lang=\"en\"><head><meta charset=\"utf-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\"><link rel=\"stylesheet\" href=\"styles.css\"><link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css\"integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\"><title>ChessVis</title></head><body><div class=\"container mt-3\"><h1>ChessVis</h1><hr><h3>The program of the year edition</h3></div><div class=\"container mt-3\"><div class=\"row\"><div class=\"col-md-4\"><div class=\"Chessboard\">");
    //code
    for (int n = 0; n < 8; n++)
    {
        for (int m = 0; m < 8; m++)
        {
            if ((n + m) % 2 == 0)
            {
                fprintf(outputhtmlpage, "<div class=\"black square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            else
            {
                fprintf(outputhtmlpage, "<div class=\"white square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            figure++;
        }
    }

    //code
    fprintf(outputhtmlpage, "</div></div><div class=\"col-md-4 container\">  <div class=\"container mb-3\">   <a class=\"btn btn-primary\" href=\"#\">предыдущий ход</a>  <a class=\"btn btn-primary ml-2\" href=\"#\">следующий ход</a></div> <div class=\"container\"> <p>1. e2-e4 e7-e5</p><p> 2. Bf1-c4 Nb8-c6</p><p> 3. Qd1-h5 Ng8-f6</p><p class=\"btn-dark rounded p-1\"> 4. Qh5xf7#</p></div></div><div class=\"col-md-4\"><div class=\"card mt-1\" style=\"width: 18rem;\"><img src=\"img/back.jpg\" class=\"card-img-top\" alt=\"...\"><div class=\"card-body\"><h5 class=\"card-title\">Open source code</h5><p class=\"card-text\">Check source code in my GitHub. Subscribe!!</p><a href=\"#\" class=\"btn btn-primary\">Go to GitHubq</a></div></div></div></div></div></div></body></html></html>\n");
}
