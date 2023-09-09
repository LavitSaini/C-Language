#include <stdio.h>

int main()
{
    int Divident, Divisor, Quotient, Remainder;
    printf("Enter the value of Divident\n");
    scanf("%d", &Divident);

    printf("Enter the value of Divisor\n");
    scanf("%d", &Divisor);

    Quotient = Divident / Divisor;
    Remainder = Divident % Divisor;

    printf("Quotient is %d \n", Quotient);
    printf("Remainder is %d \n", Remainder);
    return 0;
}