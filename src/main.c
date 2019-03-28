#include <stdio.h>
#include <string.h>
#include "board_print_html.h"
#include "fileworks.h"

int main()
{

    inputfile = fopen(fname, "r");
    if (inputfile == NULL)
    {
        printf("не могу открыть файл '%s'", fname);
        return 1;
    }

    while (fgets(result_string, sizeof(result_string), inputfile))
    {
        for (int j = 0; j < strlen(result_string); j++)
        {
            if (result_string[j] == " ")
            {
                figure_coordinate figure1 = identify_figure(&result_string[j + 1]);
                figure_coordinate figure2 = identify_figure(&result_string[j + 5]);
                //execute_comand(figure1, result_string[j + 4], figure2);
                createhtml(step++, chesstable);
            }
        }
    }

    fclose(inputfile);
    printf("Воспроизведение партии успешно завершено.");
    return 0;
}
