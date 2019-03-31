typedef struct //положение фигРЫ
{
    int figure;
    int ox;
    int oy;
} figure_coordinate;

#define ERROR 99

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

void execute_comand(figure_coordinate figure, char comand, figure_coordinate figuretarget, int *table)
{
    int coordinate = checkfigurecoordinate(figure, table);
    switch (figure.figure)
    {
    case KING:
        break;
    case QUEEN:

        break;
    case ROOK:

        break;
    case KNIGHT:

        break;
    case BISHOP:

        break;
    case PAWN:
        movepawn(figure, figuretarget, table);
        break;
    default:
        printf("Uncorrect figure");
        return ERROR;
    }
}

movepawn(figure_coordinate figure, figure_coordinate figuretarget, int *table)
{
    swap((figure.ox * 8 + figure.oy), (figuretarget.ox * 8 + figuretarget.oy));
}

void swap(int *a, int *b)
{
    int t;
    t = *a, *a = *b, *b = t;
}