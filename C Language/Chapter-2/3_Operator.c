#include <stdio.h>

int main()
{
    int x = 4, y = 6;
    printf("the value of 12 * x - 4 * y is %d \n", 12 * x - 4 * y);
    printf("the value of  8 * x / 4 * y is %d \n", 8 * x / 4 * y);
    printf("the value of  10 * x / 8 * y is %d \n", 10 * x / 8 * y);

    // 12 * x - 4 * y
    // 12 * 4 - 4 * 6
    // 48 - 24
    // 24

    // 8 * x / 4 * y
    // 8 * 4 / 4 * 6
    // 32 / 4 * 6
    // 8 * 6
    // 48


    //  10 * x / 8 * y
    //  10 * 4 / 8 * 6
    //  40 / 8 * 6
    //  30

    return 0;
}