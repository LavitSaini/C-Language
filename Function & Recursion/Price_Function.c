#include <stdio.h>

void FinalPrice(float value);

int main()
{
    float value;
    printf("Enter the Value: \n");
    scanf("%f", &value);
    FinalPrice(value);
    return 0;
}

void FinalPrice(float value)
{
    value = value + (value * 0.18);
    printf("Final Price is %f \n", value);
}