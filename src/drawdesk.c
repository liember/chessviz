#include <stdio.h>
#include "drawdesk.h"

int createfigurehtml(int element)
{
    switch (element)
    {
    case WPAWN:
        fprintf("<img class=\"figure\" src=\"resourse/white/pawn.png\">");
        return 0;
        break;
    case WKNIGHT:
        fprintf("<img class=\"figure\" src=\"resourse/white/knight.png\">");
        return 0;
        break;
    case WBISHOP:
        fprintf("<img class=\"figure\" src=\"resourse/white/bishop.png\">");
        return 0;
        break;
    case WROOK:
        fprintf("<img class=\"figure\" src=\"resourse/white/rook.png\">");
        return 0;
        break;
    case WQUEEN:
        fprintf("<img class=\"figure\" src=\"resourse/white/queen.png\">");
        return 0;
        break;
    case WKING:
        fprintf("<img class=\"figure\" src=\"resourse/white/king.png\">");
        return 0;
        break;
    case BPAWN:
        fprintf("<img class=\"figure\" src=\"resourse/black/pawn.png\">");
        return 0;
        break;
    case BKNIGHT:
        fprintf("<img class=\"figure\" src=\"resourse/black/knight.png\">");
        return 0;
        break;
    case BBISHOP:
        fprintf("<img class=\"figure\" src=\"resourse/black/bishop.png\">");
        return 0;
        break;
    case BROOK:
        fprintf("<img class=\"figure\" src=\"resourse/black/rook.png\">");
        return 0;
        break;
    case BQUEEN:
        fprintf("<img class=\"figure\" src=\"resourse/black/queen.png\">");
        return 0;
        break;
    case BKING:
        fprintf("<img class=\"figure\" src=\"resourse/black/king.png\">");
        return 0;
        break;
    default:
        return 0;
        break;
    }
}

void createhtml(int *table)
{
    int figure;
    fprintf("<!DOCTYPE HTML\n");
    fprintf("<html>\n");
    fprintf("<head>\n");
    fprintf("<meta charset=\"utf-8\">\n");
    fprintf("<link rel=\"stylesheet\" href=\"cssforhtml.css\">\n");
    fprintf("<title>Chess game</title>\n");
    fprintf("</head>\n");
    fprintf("<body>\n");
    fprintf("<div class=\"contain\">\n");
    fprintf("<aside class=\"sidebar\">\n");
    fprintf("<p>Chess game</p>\n");
    fprintf("</aside>\n");
    fprintf("<div class=\"content\">\n");
    fprintf("<div class=\"interface\">\n");
    fprintf("<div class=\"Chessboard\">\n");
    //code
    for (int n = 0; n < 8; n++)
    {
        for (int m = 0; m < 8; m++)
        {
            if ((n + m) % 2 == 0)
            {
                fprintf("<div class=\"black square\">");
                createfigurehtml(table[figure]);
                fprintf("</div>\n");
            }
            else
            {
                fprintf("<div class=\"white square\">");
                createfigurehtml(table[figure]);
                fprintf("</div>\n");
            }
            figure++;
        }
    }

    //code
    fprintf("</div>\n");
    fprintf("<div class=\"menu\">\n");
    fprintf("<div class=\"titl\">\n");
    fprintf("<p>Шахматs<p>\n");
    fprintf("</div>\n");
    fprintf("</div>\n");
    fprintf("<div class=\"clear\"></div>\n");
    fprintf("</div>\n");
    fprintf("</div>\n");
    fprintf("</div>\n");
    fprintf("</body>\n");
    fprintf("</html>\n");
}
