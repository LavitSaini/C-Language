#include <stdio.h>

int main(){
    
    float price[3];
    printf("Enter the prices of three items \n");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);

    printf("Total Price = %f \n", price[0] + (price[0] * 0.18));
    printf("Total Price = %f \n", price[1] + (price[1] * 0.18));
    printf("Total Price = %f \n", price[2] + (price[2] * 0.18));
    return 0;
}