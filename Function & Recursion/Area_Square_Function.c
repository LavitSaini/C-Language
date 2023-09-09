#include <stdio.h>

void AreaSquare(float side);

int main(){
    float side;
    printf("Enter the Side of Square \n");
    scanf("%f", &side);

    AreaSquare(side);
    return 0;
}

void AreaSquare(float side){
    printf("Area of Square is %f \n", side * side);
}