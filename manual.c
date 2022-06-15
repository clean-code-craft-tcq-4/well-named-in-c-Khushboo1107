#include <stdio.h>
#include <assert.h>
#include "main.h"

extern const char* MinorColorNames[];
extern const char* MajorColorNames[];
extern const int MAX_COLORPAIR_NAME_CHARS;

void GetColorManual(const ColorPair* colorPair, char* buffer)
{ sprintf(buffer, "Color code = %s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
 printf("%s",buffer);
}
