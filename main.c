#include <stdio.h>
#include <assert.h>
#include "main.h"

int main() {
    const int MAX_COLORPAIR_NAME_CHARS = 16;
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

      for(int i=0; i<MAX_COLORPAIR_NAME_CHARS;i++)
           {
                GetColorManual();
            }
    return 0;
}
