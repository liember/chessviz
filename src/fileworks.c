#include "fileworks.h"
#include <stdio.h>

figure_coordinate identify_figure(char *f)
{
    figure_coordinate returnity;
    returnity.figure = getfigure(f);
    returnity.ox = getfigureox(f);
    returnity.oy = getfigureoy(f);
}
}

int getfigure(char f)
{
    switch (f)
    {
    case "K":
        return WKNIGHT;
        break;
    case "Q":
        return WQUEEN;
        break;
    case "R":
        return WROOK;
        break;
    case "N":
        return WKNIGHT;
        break;
    case "B":
        return WBISHOP;
        break;
    case "P":
        return WPAWN;
        break;
    default:
        printf("No option selected");
        return ERROR;
    }
}

int getfigureox(char f)
{
}

int getfigureoy(char f{

}