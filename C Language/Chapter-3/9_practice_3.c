#include <stdio.h>

int main(){
    float tax = 0;
    float income;
    printf("enter your income \n");
    scanf("%f", &income);

    if(income >= 250000 && income <= 500000)
    {
    tax = tax + 0.05 * (income - 250000);
    }

    else if(income >= 500000 && income <= 1000000)
    {
    tax = tax + 0.2 *  (income - 500000);
    }

    else if(income >= 1000000)
    {
     tax = tax + 0.3 *  (income - 1000000);
    }
    
    printf("your total income tax is %f", tax);
    return 0;
}