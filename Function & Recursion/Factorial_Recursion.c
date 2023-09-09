#include <stdio.h>

float fact(float fac);

int main()
{
    float fac;
    printf("Enter a Number:");
    scanf("%f", &fac);

    printf("Factorial is %f", fact(fac));
    return 0;
}

float fact(float fac)
{
    if (fac == 1 || fac == 0)
    {
        return 1;
    }
    else
    {
        return (fac * fact(fac - 1));
    }
}