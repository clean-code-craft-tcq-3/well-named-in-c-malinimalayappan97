#include <stdio.h>
#include <assert.h>
#include "ColorCoding.h"

int main() {
    ColorPair colorPair;
    printf("PRINTING MANUAL\n");
    for(int i =1 ;i<26;i++)
    {
        colorPair = GetColorFromPairNumber(i);
        printf("majorcolor-%s,minorcolor-%s,%d-pairNumber\n",MajorColorNames[colorPair.majorColor],MajorColorNames[colorPair.minorColor],i);
    }
    printf("DO TEST VERIFICATION\n");
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
