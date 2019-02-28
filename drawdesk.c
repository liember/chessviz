int createfigurehtml(int element)
{
    switch (element)
    {
    case WPAWN:
        printf("<img class=\"figure\" src=\"resourse/white/pawn.png\">");
        return 0;
        break;
    case WKNIGHT:
        printf("<img class=\"figure\" src=\"resourse/white/knight.png\">");
        return 0;
        break;
    case WBISHOP:
        printf("<img class=\"figure\" src=\"resourse/white/bishop.png\">");
        return 0;
        break;
    case WROOK:
        printf("<img class=\"figure\" src=\"resourse/white/rook.png\">");
        return 0;
        break;
    case WQUEEN:
        printf("<img class=\"figure\" src=\"resourse/white/queen.png\">");
        return 0;
        break;
    case WKING:
        printf("<img class=\"figure\" src=\"resourse/white/king.png\">");
        return 0;
        break;
    case BPAWN:
        printf("<img class=\"figure\" src=\"resourse/black/pawn.png\">");
        return 0;
        break;
    case BKNIGHT:
        printf("<img class=\"figure\" src=\"resourse/black/knight.png\">");
        return 0;
        break;
    case BBISHOP:
        printf("<img class=\"figure\" src=\"resourse/black/bishop.png\">");
        return 0;
        break;
    case BROOK:
        printf("<img class=\"figure\" src=\"resourse/black/rook.png\">");
        return 0;
        break;
    case BQUEEN:
        printf("<img class=\"figure\" src=\"resourse/black/queen.png\">");
        return 0;
        break;
    case BKING:
        printf("<img class=\"figure\" src=\"resourse/black/king.png\">");
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
