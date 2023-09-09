#include <stdio.h>

int main()
{
    float P, R, T, SI;

    printf("Enter the value of Amount \n");
    scanf("%f", &P);

    printf("Enter the value of Rate \n");
    scanf("%f", &R);

    printf("Enter the value of Time \n");
    scanf("%f", &T);

    SI = (P * R * T) / 100;
    printf("Simple Interest is %f \n", SI);
    return 0;
}