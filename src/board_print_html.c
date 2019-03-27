#include "board_print_html.h"
#include <stdio.h>

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
    char fname;
    sprintf(fname, "%d.txt", step);
    outputhtmlpage = fopen(fname, "w");
    int figure;

    fprintf(outputhtmlpage, "<!DOCTYPE HTML\n");
    fprintf(outputhtmlpage, "<html>\n");
    fprintf(outputhtmlpage, "<head>\n");
    fprintf(outputhtmlpage, "<meta charset=\"utf-8\">\n");
    fprintf(outputhtmlpage, "<link rel=\"stylesheet\" href=\"cssforhtml.css\">\n");
    fprintf(outputhtmlpage, "<title>Chess game</title>\n");
    fprintf(outputhtmlpage, "</head>\n");
    fprintf(outputhtmlpage, "<body>\n");
    fprintf(outputhtmlpage, "<div class=\"contain\">\n");
    fprintf(outputhtmlpage, "<aside class=\"sidebar\">\n");
    fprintf(outputhtmlpage, "<p>Chess game</p>\n");
    fprintf(outputhtmlpage, "</aside>\n");
    fprintf(outputhtmlpage, "<div class=\"content\">\n");
    fprintf(outputhtmlpage, "<div class=\"interface\">\n");
    fprintf(outputhtmlpage, "<div class=\"Chessboard\">\n");
    //code
    for (int n = 0; n < 8; n++)
    {
        for (int m = 0; m < 8; m++)
        {
            if ((n + m) % 2 == 0)
            {
                fprintf(outputhtmlpage, "<div class=\"black square\">");
                createfigurehtml(table[figure], &outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            else
            {
                fprintf(outputhtmlpage, "<div class=\"white square\">");
                createfigurehtml(table[figure], &outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            figure++;
        }
    }

    //code
    fprintf(outputhtmlpage, "</div>\n");
    fprintf(outputhtmlpage, "<div class=\"menu\">\n");
    fprintf(outputhtmlpage, "<div class=\"titl\">\n");
    fprintf(outputhtmlpage, "<p>Шахматs<p>\n");
    fprintf(outputhtmlpage, "</div>\n");
    fprintf(outputhtmlpage, "</div>\n");
    fprintf(outputhtmlpage, "<div class=\"clear\"></div>\n");
    fprintf(outputhtmlpage, "</div>\n");
    fprintf(outputhtmlpage, "</div>\n");
    fprintf(outputhtmlpage, "</div>\n");
    fprintf(outputhtmlpage, "</body>\n");
    fprintf(outputhtmlpage, "</html>\n");
}
