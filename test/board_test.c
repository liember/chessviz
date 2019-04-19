#include <stdio.h>
#include <stdlib.h>

#define TURN_CAPACITY 10
#define GIVEN_TURN "e2-e4"

#include "../src/lib/board_print_html.h"
#include "../src/lib/board_read.h"
#include "../src/lib/error_processing.h"
#include "../src/lib/logicworks.h"
#include "../thirdparty/ctest.h"

CTEST(read_test, figuref)
{
    char turn[TURN_CAPACITY] = GIVEN_TURN;
    figure_coordinate fi = identify_figure(turn);
    const int resultf = fi.figure;
    const int expectedf = 6;
    ASSERT_EQUAL(expectedf, resultf);
}

CTEST(read_test, figurey)
{
    char turn[TURN_CAPACITY] = GIVEN_TURN;
    figure_coordinate fi = identify_figure(turn);
    const int resulty = fi.oy;
    const int expectedy = 1;
    ASSERT_EQUAL(expectedy, resulty);
}
CTEST(read_test, figurex)
{
    char turn[TURN_CAPACITY] = GIVEN_TURN;
    figure_coordinate fi = identify_figure(turn);
    const int resultx = fi.ox;
    const int expectedx = 4;
    ASSERT_EQUAL(expectedx, resultx);
}

CTEST(read_test, figure_target_oy)
{
    char turn[TURN_CAPACITY] = GIVEN_TURN;
    figure_coordinate fi = identify_figure_target(turn);
    const int resulty = fi.oy;
    const int expectedy = 1;
    ASSERT_EQUAL(expectedy, resulty);
}

CTEST(read_test, figure_target_ox)
{
    char turn[TURN_CAPACITY] = GIVEN_TURN;
    figure_coordinate fi = identify_figure_target(turn);
    const int resultx = fi.ox;
    const int expectedx = 4;
    ASSERT_EQUAL(expectedx, resultx);
}

CTEST(read_test, getfigurey)
{
    const int resulty = getfigureoy('2');
    const int expectedy = 1;
    ASSERT_EQUAL(expectedy, resulty);
}

CTEST(read_test, getfigure)
{
    const int resultf = getfigure('K');
    const int expectedf = 1;
    ASSERT_EQUAL(expectedf, resultf);
}
CTEST(read_test, getfigurex)
{
    const int resultx = getfigureox('b');
    const int expectedx = 1;
    ASSERT_EQUAL(expectedx, resultx);
}