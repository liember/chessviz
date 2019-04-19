#include <stdio.h>

#define CTEST_MAIN

// uncomment lines below to enable/disable features. See README.md for details
#define CTEST_SEGFAULT
//#define CTEST_NO_COLORS
#define CTEST_COLOR_OK

#include "../src/lib/board_print_html.h"
#include "../src/lib/board_read.h"
#include "../src/lib/error_processing.h"
#include "../src/lib/logicworks.h"
#include "../thirdparty/ctest.h"

int main(int argc, const char* argv[])
{
    int result = ctest_main(argc, argv);
    return result;
}
