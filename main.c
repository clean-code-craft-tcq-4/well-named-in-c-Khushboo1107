#include <stdio.h>
#include <assert.h>
#include "main.h"

int main() {

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

      for(int i=1; i<=25;i++)
           {
          printf("%d",i);
      }
               for( int j=0; j<5; j++)
               {
                   for( int k=0; j<5; k++)
                   {
                       printf("%d %s %s",i, MajorColor[j],MinorColor[k]);
                      
                   }
               }
    return 0;
}
