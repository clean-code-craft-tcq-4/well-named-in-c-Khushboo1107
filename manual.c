#include <stdio.h>
#include <assert.h>
#include "main.h"

extern const int MAX_COLORPAIR_NAME_CHARS;

void GetColorManual(void)
{ 
        for(int i=2; i<=26;i++)
        {
        ColorPair colorPair = GetColorFromPairNumber(i);
  char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
                
        }
}
