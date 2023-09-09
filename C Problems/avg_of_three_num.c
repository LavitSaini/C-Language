#include <stdio.h>

int main()
{
    float a, b, c, sum, avg;
    printf("enter first number \n");
    scanf("%f", & a);

    printf("enter second number \n");
    scanf("%f", & b);

    printf("enter third number \n");
    scanf("%f", & c);

    sum = a + b + c;

    avg = sum/3;

    printf("avreage is %f \n", avg);

    return 0;
}