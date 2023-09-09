#include <stdio.h>

// Question --> Keep Taking Numbers As Input From User Until User Enters An Odd Number.
int main()
{
    int n;

    do
    {
        printf("Enter a Number: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0){
            break;
        }
    }while(1);

    printf("Entered Number is Odd \n");
    return 0;
}