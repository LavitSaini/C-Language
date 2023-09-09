#include <stdio.h>
#define pi 3.14

int main(){
    float radius;
    printf("Enter the value of Radius of a Circle \n");
    scanf("%f", &radius);
    
    float area = pi * radius * radius;
    printf("Area of Circle is %f \n", area);
    return 0;
}