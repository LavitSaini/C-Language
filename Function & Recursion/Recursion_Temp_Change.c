#include <stdio.h>

float TempCalculate(float celsius);

int main()
{   
    float calsius;
    printf("Enter th Value of Celsius:");
    scanf("%f", &calsius);
   
    printf("Faherenheit is %f \n", TempCalculate(calsius));
    return 0;
}

float TempCalculate(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}