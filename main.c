#include <stdio.h>
#include <assert.h>
#include "main.h"
#include "TestPair.h"
#include "manual.h"

int main() {

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

     GetColorManual();
    return 0;
}
