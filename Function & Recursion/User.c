#include <stdio.h>
#include <math.h>
 
void Sqaure(float number);

int main(){
    float number;
    printf("Enter a Number \n");
    scanf("%f", &number);

    Sqaure(number);
    return 0;
}

void Sqaure(float number){
 printf("Square is %f \n",  pow (number , 2));
}