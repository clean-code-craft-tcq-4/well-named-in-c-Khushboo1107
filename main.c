#include <stdio.h>
#include <assert.h>
#include "main.h"

int main() {
    const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

      for(int i=1; i<=25;i++)
           {
               for( int j=0; j<numberOfMajorColors; j++)
               {
                   for( int k=0; j<numberOfMinorColors; k++)
                   {
                       printf("%d",i);
                       testNumberToPair(i,j,k);
                   }
               }
            }
    return 0;
}
