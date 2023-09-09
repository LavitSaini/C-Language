#include <stdio.h>
#include <math.h>

void AreaRectangle(float length, float breath);

int main(){
 float length, breath;

 printf("Enter the Value of Length \n");
 scanf("%f", &length);  

 printf("Enter the Value of breath \n");
 scanf("%f", &breath);

 AreaRectangle(length, breath);
 return 0;
}

void AreaRectangle(float length, float breath){
   printf("Area of Rectangle is %f \n", length * breath);
}