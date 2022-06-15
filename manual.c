#include <stdio.h>
#include <assert.h>
#include "main.h"

extern const int MAX_COLORPAIR_NAME_CHARS;

void GetColorManual(void)
{ 
        for(int i=1; i<=25;i++)
        {
        ColorPair info = GetColorFromPairNumber(i);
  char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&info, colorPairNames);
                
        }
}
