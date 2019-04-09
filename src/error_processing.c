#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/error_processing.h"

void error(char* ercode)
{
    FILE* log;
    log = fopen("info.log", "w");
    if (log == NULL) {
        printf("Не могу cоздать файл логгирования\n");
        exit(0);
    }
    fprintf(log, "ERROR PROGRAM STOPPED: \n\t %s", ercode);
    fclose(log);
    exit(0);
}