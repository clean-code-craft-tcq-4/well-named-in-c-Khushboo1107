#include <stdio.h>
#include <assert.h>
#include "main.h"
#include "GetPairNumber.h"
#include "GetColorPair.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
