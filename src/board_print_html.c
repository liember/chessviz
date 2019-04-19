#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/error_processing.h"

#include "lib/board_print_html.h"

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

char* htmlfile_open_error = "Ошибка генерации HTML.\n";

void createfigurehtml(int element, FILE* outputhtmlpage)
{
    switch (element) {
    case WPAWN:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/white/pawn.png\">");
        break;
    case WKNIGHT:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/white/knight.png\">");
        break;
    case WBISHOP:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/white/bishop.png\">");
        break;
    case WROOK:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/white/rook.png\">");
        break;
    case WQUEEN:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/white/queen.png\">");
        break;
    case WKING:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/white/king.png\">");
        break;
    case BPAWN:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/black/pawn.png\">");
        break;
    case BKNIGHT:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/black/knight.png\">");
        break;
    case BBISHOP:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/black/bishop.png\">");
        break;
    case BROOK:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/black/rook.png\">");
        break;
    case BQUEEN:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/black/queen.png\">");
        break;
    case BKING:
        fprintf(outputhtmlpage,
                "<img class=\"figure\" src=\"img/black/king.png\">");
        break;
    case EMPTY:
        break;
    default:
        printf("----html -----incorrect input figure\n");
        break;
    }
}

void createhtml(int* table, int step)
{
    FILE* outputhtmlpage;
    char fname[20];

    sprintf(fname, "pages/%d.html", step);
    outputhtmlpage = fopen(fname, "w+");
    if (outputhtmlpage == NULL) {
        printf("не могу открыть файл '%s'\n", fname);
        error(htmlfile_open_error);
    }
    int figure = 0;

    fprintf(outputhtmlpage, "<!doctype html><html lang=\"en\">");
    fprintf(outputhtmlpage,
            "<head><meta charset=\"utf-8\"><meta name=\"viewport\" "
            "content=\"width=device-width, initial-scale=1, "
            "shrink-to-fit=no\"><link rel=\"stylesheet\" href=\"styles.css\">");
    fprintf(outputhtmlpage,
            "<link rel=\"stylesheet\" "
            "href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/"
            "bootstrap.min.css\"integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/"
            "1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\"");
    fprintf(outputhtmlpage, "crosso");
    fprintf(outputhtmlpage, "rigin=\"anonymous\">");
    fprintf(outputhtmlpage,
            " <title>ChessVis</title></head><body><div class=\"container "
            "mt-3\"><h1>ChessVis</h1>");
    fprintf(outputhtmlpage,
            "<hr><h3>The program of the year edition</h3></div><div "
            "class=\"container mt-3\"> ");
    fprintf(outputhtmlpage,
            " <div class=\"row\"> <div class=\"col-md-4\"> <div "
            "class=\"Chessboard\">");
    for (int n = 0; n < 8; n++) {
        for (int m = 0; m < 8; m++) {
            if ((n + m) % 2 == 0) {
                fprintf(outputhtmlpage, "<div class=\"black square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            } else {
                fprintf(outputhtmlpage, "<div class=\"white square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            figure++;
        }
    }
    fprintf(outputhtmlpage,
            "</div></div><div class=\"col-md-4 container\">  <div "
            "class=\"container mb-3\"> ");
    fprintf(outputhtmlpage, " <a class =\"btn btn-primary\" href=\"");
    sprintf(fname, "%d.html", step - 1);
    fprintf(outputhtmlpage, "%s", fname);
    fprintf(outputhtmlpage, "\">preious step</a>");
    fprintf(outputhtmlpage, " <a class =\"btn btn-primary ml-2\" href=\"");
    sprintf(fname, "%d.html", step + 1);
    fprintf(outputhtmlpage, "%s", fname);
    fprintf(outputhtmlpage, " \">next step</a></div>");
    fprintf(outputhtmlpage,
            " <div class =\"container\"> <p>1. e2-e4 e7-e5</p><p> 2. Bf1-c4 "
            "Nb8-c6</p><p> 3. Qd1-h5 Ng8-f6</p><p class=\"btn-dark rounded "
            "p-1\"> 4. Qh5xf7#</p></div></div><div class=\"col-md-4\"><div "
            "class=\"card mt-1\" style=\"width: 18rem;\"><img "
            "src=\"img/back.jpg\" class=\"card-img-top\" alt=\"...\"><div "
            "class=\"card-body\"><h5 class=\"card-title\">Open source "
            "code</h5><p class=\"card-text\">Check source code in my GitHub. "
            "Subscribe!!</p><a href=\"https://github.com/liember\" class=\"btn "
            "btn-primary\">Go to "
            "GitHubq</a></div></div></div></div></div></div></body></html></"
            "html>\n");
}

void beginhtml(int* table, int step)
{
    FILE* outputhtmlpage;
    char fname[20];

    sprintf(fname, "pages/%d.html", step);
    outputhtmlpage = fopen(fname, "w+");
    if (outputhtmlpage == NULL) {
        printf("не могу открыть файл '%s'\n", fname);
        error(htmlfile_open_error);
    }
    int figure = 0;

    fprintf(outputhtmlpage, "<!doctype html><html lang=\"en\">");
    fprintf(outputhtmlpage,
            "<head><meta charset=\"utf-8\"><meta name=\"viewport\" "
            "content=\"width=device-width, initial-scale=1, "
            "shrink-to-fit=no\"><link rel=\"stylesheet\" href=\"styles.css\">");
    fprintf(outputhtmlpage,
            "<link rel=\"stylesheet\" "
            "href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/"
            "bootstrap.min.css\"integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/"
            "1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\"");
    fprintf(outputhtmlpage, "crosso");
    fprintf(outputhtmlpage, "rigin=\"anonymous\">");
    fprintf(outputhtmlpage,
            " <title>ChessVis</title></head><body><div class=\"container "
            "mt-3\"><h1>ChessVis</h1>");
    fprintf(outputhtmlpage,
            "<hr><h3>The program of the year edition</h3></div><div "
            "class=\"container mt-3\"> ");
    fprintf(outputhtmlpage,
            " <div class=\"row\"> <div class=\"col-md-4\"> <div "
            "class=\"Chessboard\">");
    for (int n = 0; n < 8; n++) {
        for (int m = 0; m < 8; m++) {
            if ((n + m) % 2 == 0) {
                fprintf(outputhtmlpage, "<div class=\"black square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            } else {
                fprintf(outputhtmlpage, "<div class=\"white square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            figure++;
        }
    }
    fprintf(outputhtmlpage,
            "</div></div><div class=\"col-md-4 container\">  <div "
            "class=\"container mb-3\"> ");
    fprintf(outputhtmlpage, " <a class =\"btn btn-primary ml-2\" href=\"");
    sprintf(fname, "%d.html", step + 1);
    fprintf(outputhtmlpage, "%s", fname);
    fprintf(outputhtmlpage, " \">next step</a></div>");
    fprintf(outputhtmlpage,
            "<div class =\"container\"> <p>1. e2-e4 e7-e5</p><p> 2. Bf1-c4 "
            "Nb8-c6</p><p> 3. Qd1-h5 Ng8-f6</p><p class=\"btn-dark rounded "
            "p-1\"> 4. Qh5xf7#</p></div></div><div class=\"col-md-4\"><div "
            "class=\"card mt-1\" style=\"width: 18rem;\"><img "
            "src=\"img/back.jpg\" class=\"card-img-top\" alt=\"...\"><div "
            "class=\"card-body\"><h5 class=\"card-title\">Open source "
            "code</h5><p class=\"card-text\">Check source code in my GitHub. "
            "Subscribe!!</p><a href=\"https://github.com/liember\" class=\"btn "
            "btn-primary\">Go to "
            "GitHubq</a></div></div></div></div></div></div></body></html></"
            "html>\n");
}

void endhtml(int* table, int step)
{
    FILE* outputhtmlpage;
    char fname[20];

    sprintf(fname, "pages/%d.html", step);
    outputhtmlpage = fopen(fname, "w+");
    if (outputhtmlpage == NULL) {
        printf("не могу открыть файл '%s'\n", fname);
        error(htmlfile_open_error);
    }
    int figure = 0;

    fprintf(outputhtmlpage, "<!doctype html><html lang=\"en\">");
    fprintf(outputhtmlpage,
            "<head><meta charset=\"utf-8\"><meta name=\"viewport\" "
            "content=\"width=device-width, initial-scale=1, "
            "shrink-to-fit=no\"><link rel=\"stylesheet\" href=\"styles.css\">");
    fprintf(outputhtmlpage,
            "<link rel=\"stylesheet\" "
            "href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/"
            "bootstrap.min.css\"integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/"
            "1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\"");
    fprintf(outputhtmlpage, "crosso");
    fprintf(outputhtmlpage, "rigin=\"anonymous\">");
    fprintf(outputhtmlpage,
            " <title>ChessVis</title></head><body><div class=\"container "
            "mt-3\"><h1>ChessVis</h1>");
    fprintf(outputhtmlpage,
            "<hr><h3>The program of the year edition</h3></div><div "
            "class=\"container mt-3\"> ");
    fprintf(outputhtmlpage,
            " <div class=\"row\"> <div class=\"col-md-4\"> <div "
            "class=\"Chessboard\">");
    for (int n = 0; n < 8; n++) {
        for (int m = 0; m < 8; m++) {
            if ((n + m) % 2 == 0) {
                fprintf(outputhtmlpage, "<div class=\"black square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            } else {
                fprintf(outputhtmlpage, "<div class=\"white square\">");
                createfigurehtml(table[figure], outputhtmlpage);
                fprintf(outputhtmlpage, "</div>\n");
            }
            figure++;
        }
    }
    fprintf(outputhtmlpage,
            "</div></div><div class=\"col-md-4 container\">  <div "
            "class=\"container mb-3\"> ");
    fprintf(outputhtmlpage, " <a class =\"btn btn-primary ml-2\" href=\"");
    sprintf(fname, "%d.html", step - 1);
    fprintf(outputhtmlpage, "%s", fname);
    fprintf(outputhtmlpage, " \">preious step</a></div>");
    fprintf(outputhtmlpage,
            "<div class =\"container\"> <p>1. e2-e4 e7-e5</p><p> 2. Bf1-c4 "
            "Nb8-c6</p><p> 3. Qd1-h5 Ng8-f6</p><p class=\"btn-dark rounded "
            "p-1\"> 4. Qh5xf7#</p></div></div><div class=\"col-md-4\"><div "
            "class=\"card mt-1\" style=\"width: 18rem;\"><img "
            "src=\"img/back.jpg\" class=\"card-img-top\" alt=\"...\"><div "
            "class=\"card-body\"><h5 class=\"card-title\">Open source "
            "code</h5><p class=\"card-text\">Check source code in my GitHub. "
            "Subscribe!!</p><a href=\"https://github.com/liember\" class=\"btn "
            "btn-primary\">Go to "
            "GitHubq</a></div></div></div></div></div></div></body></html></"
            "html>\n");
}

void generatebeginpage()
{
    FILE* outputhtmlpage;
    char fname[20];

    sprintf(fname, "start.html");
    outputhtmlpage = fopen(fname, "w+");
    if (outputhtmlpage == NULL) {
        printf("не могу открыть файл '%s'\n", fname);
        error(htmlfile_open_error);
    }
    fprintf(outputhtmlpage,
            "<!doctype html><html lang=\"en\"><head><meta "
            "charset=\"utf-8\"><meta name=\"viewport\" "
            "content=\"width=device-width, initial-scale=1, "
            "shrink-to-fit=no\"><link rel=\"stylesheet\" "
            "href=\"pages/styles.css\"><link rel=\"stylesheet\" "
            "href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/"
            "bootstrap.min.css\" "
            "integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/"
            "iJTQUOhcWr7x9JvoRxT2MZw1T\" "
            "crossorigin=\"anonymous\"><title>ChessVis</title></"
            "head><body><div class=\"container "
            "mt-3\"><h1>ChessVis</h1><hr><h3>The program of the year "
            "edition</h3></div><div class=\"container mt-3\"><div "
            "class=\"row\"><div class=\"col-md-4\"><div "
            "class=\"Chessboard\"><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div><div "
            "class=\"white square\"></div><div class=\"black "
            "square\"></div><div class=\"white square\"></div><div "
            "class=\"black square\"></div><div class=\"white "
            "square\"></div><div class=\"black square\"></div></div></div><div "
            "class=\"col-md-4 container\"><div class=\"card mt-1\" "
            "style=\"width: 18rem;\"><img src=\"pages/img/back.jpg\" "
            "class=\"card-img-top\" alt=\"...\"><div class=\"card-body\"><h5 "
            "class=\"card-title\">Press the button</h5><p "
            "class=\"card-text\">If you want to begin wathing visualisation of "
            "your chess notation.</p><a href=\"pages/0.html\" class=\"btn "
            "btn-primary\">Go to chess "
            "notation</a></div></div></div></div></div></div></body></html></"
            "html>");
}