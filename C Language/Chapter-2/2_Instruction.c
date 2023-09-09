#include <stdio.h>
#include <math.h>

int main()
{

    int a = 4, b = 8;
    printf("the value of a + b is %d \n", a + b);
    printf("the value of a - b is %d \n", a - b);
    printf("the value of a * b is %d \n", a * b);
    printf("the value of a / b is %d \n", a / b);

    int z;
    z = b * a; // legal
    // b * a = z;  iliegal

    printf("the value of z is %d \n", z);

    printf("5 when divided by 2 leaves a reminder is %d \n", 5 % 2);
    printf("-5 when divided by 2 leaves a reminder is %d \n", -5 % 2);
    printf("5 when divided by -2 leaves a reminder is %d \n", 5 % -2);

    printf("7 when multiply by 8 is %d \n", 7 * 8);

    printf("the value of 2 is the power of 5 is %f \n", pow(2, 5));

    // int and int = int
    // float and int = float
    // float and float = float

    printf("the value of 4 * 4-1 is %d\n", 4 * 4 - 1);
    printf("the value of 5.6 - 2 is %f\n", 5.6 - 2);
    printf("the value of 8.8 * 7.5 - 5.5 is %f\n", 8.8 * 7.5 - 5.5);

    printf("the value of 3.0/9 is %f\n", 3.0 / 9);
    printf("the value of 5.0/5 is %f\n ", 5.0/5);

    


    return 0;
}
