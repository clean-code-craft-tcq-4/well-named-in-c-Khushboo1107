#include <stdio.h>
#include <assert.h>
#include "main.h"

void GetColorManual(const ColorPair* colorPair, char* buffer)
{ sprintf(buffer, "Color code = %s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
 printf("%s",buffer);
}

for(int i=0; i<MAX_COLORPAIR_NAME_CHARS;i++)
{
  GetColorManual();
}
