#ifndef BOARD_PRINT_HTML_H
#define BOARD_PRINT_HTML_H

void createfigurehtml(int element, FILE* outputhtmlpage);
void createhtml(int* table, int step);
void beginhtml(int* table, int step);
void endhtml(int* table, int step);
void generatebeginpage();

#endif
