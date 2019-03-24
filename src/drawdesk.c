#include <stdio.h>
#include "drawdesk.h"

int createfigurehtml(int element)
{
    switch (element)
    {
    case WPAWN:
        printf("<img class=\"figure\" src=\"img/white/pawn.png\">");
        return 0;
        break;
    case WKNIGHT:
        printf("<img class=\"figure\" src=\"img/white/knight.png\">");
        return 0;
        break;
    case WBISHOP:
        printf("<img class=\"figure\" src=\"img/white/bishop.png\">");
        return 0;
        break;
    case WROOK:
        printf("<img class=\"figure\" src=\"img/white/rook.png\">");
        return 0;
        break;
    case WQUEEN:
        printf("<img class=\"figure\" src=\"img/white/queen.png\">");
        return 0;
        break;
    case WKING:
        printf("<img class=\"figure\" src=\"img/white/king.png\">");
        return 0;
        break;
    case BPAWN:
        printf("<img class=\"figure\" src=\"img/black/pawn.png\">");
        return 0;
        break;
    case BKNIGHT:
        printf("<img class=\"figure\" src=\"img/black/knight.png\">");
        return 0;
        break;
    case BBISHOP:
        printf("<img class=\"figure\" src=\"img/black/bishop.png\">");
        return 0;
        break;
    case BROOK:
        printf("<img class=\"figure\" src=\"img/black/rook.png\">");
        return 0;
        break;
    case BQUEEN:
        printf("<img class=\"figure\" src=\"img/black/queen.png\">");
        return 0;
        break;
    case BKING:
        printf("<img class=\"figure\" src=\"img/black/king.png\">");
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
    printf("<!DOCTYPE HTML>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("<meta charset=\"utf-8\">\n");
    printf("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\">");
    printf("<link rel=\"stylesheet\" href=\"styles.css\">\n");
    printf("<link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css \"integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\">");
    printf("<title>ChessVis</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<div class=\"container mt-3\">\n");
    printf("<h1>ChessVis</h1>");
    printf("<hr>");
    printf("<h3>The program of the year edition</h3>");
    printf("</div>");
    printf("<div class=\"container mt-3\">\n");
    printf("<div class=\"row\">\n");
    printf("<div class=\"col-md-4\">\n");
    printf("<div class=\"Chessboard\">\n");

    for (int n = 0; n < 8; n++)
    {
        for (int m = 0; m < 8; m++)
        {
            if ((n + m) % 2 == 0)
            {
                printf("<div class=\"black square\">");
                createfigurehtml(table[figure]);
                printf("</div>\n");
            }
            else
            {
                printf("<div class=\"white square\">");
                createfigurehtml(table[figure]);
                printf("</div>\n");
            }
            figure++;
        }
    }

    //code
    printf("</div>\n");
    printf("</div>\n");
    printf("<div class=\"col-md-4 container\">\n");
    printf("<div class=\"container mb-3\">\n");
    printf("<a class=\"btn btn-primary\" href=\"#\">предыдущий ход</a>\n");
    printf("<a class=\"btn btn-primary ml-2\" href=\"#\">следующий ход</a>\n");
    printf("</div>\n");
    printf("<div class=\"container\">\n");
    printf("<p>1. e2-e4 e7-e5</p>\n");
    printf("</div>\n");
    printf("</div>\n");
    printf("<div class=\"col-md-4\">");
    printf("<div class=\"card mt-1\" style=\"width: 18rem;\">");
    printf("<img src=\"img/back.jpg\" class=\"card-img-top\" alt=\"...\">");
    printf("<div class=\"card-body\">");
    printf("<h5 class=\"card-title\">Open source code</h5>");
    printf("<p class=\"card-text\">Check source code in my GitHub. Subscribe!!</p>");
    printf(" <a href=\"#\" class=\"btn btn-primary\">Go to GitHubq</a>");
    printf("</div></div></div></div></div></div>");
    printf("</body>\n");
    printf("</html>\n");
}
