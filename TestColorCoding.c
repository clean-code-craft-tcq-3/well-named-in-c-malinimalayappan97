#include <stdio.h>
#include <assert.h>
#include "ColorCoding.h"
void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    Printf("majorcolor-%s,minorcolor-%s",%d-pairNumber",colorPair.majorColor,colorPair.majorColor,pairNumber}
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    Printf("majorcolor-%s,minorcolor-%s",%d-pairNumber",colorPair.majorColor,colorPair.majorColor,pairNumber}
    assert(pairNumber == expectedPairNumber);
}
