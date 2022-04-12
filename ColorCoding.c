#include <stdio.h>
#include <assert.h>
#include "ColorCoding.h"

ColorCodingDataInfo_s ColorCodeData_s[25] = {{1,WHITE,BLUE},{2,WHITE,ORANGE},{3,WHITE,GREEN},{4,WHITE,BROWN},{5,WHITE,SLATE},
                                             {6,RED,BLUE},{7,RED,ORANGE},{8,RED,GREEN},{9,RED,BROWN},{10,RED,SLATE},
                                             {11,BLACK,BLUE},{12,BLACK,ORANGE},{13,BLACK,GREEN},{14,BLACK,BROWN},{15,BLACK,SLATE},
                                             {16,YELLOW,BLUE},{17,YELLOW,ORANGE},{18,YELLOW,GREEN},{19,YELLOW,BROWN},{20,YELLOW,SLATE},
                                             {21,VIOLET,BLUE},{22,VIOLET,ORANGE},{23,VIOLET,GREEN},{24,VIOLET,BROWN},{25,VIOLET,SLATE}}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
