#include <stdio.h>
#include <assert.h>
#include "main.h"

int main() {
extern const char* MajorColorNames;

extern const char* MinorColorNames;

extern int numberOfMajorColors;

extern int numberOfMinorColors;

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
                       testNumberToPair(i, 
                                        MajorColorNames[colorPair->majorColor],
                                        MinorColorNames[colorPair->minorColor]);
                   }
               }
            }
    return 0;
}
