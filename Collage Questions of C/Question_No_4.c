#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter Value of a, b, c \n");
    scanf("%f %f %f", &a, &b, &c);

    float avg = (a+b+c)/3;
    printf("Average is %f \n", avg);
    return 0;
}