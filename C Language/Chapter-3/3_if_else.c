#include <stdio.h>

int main()
{
    int number;
    printf("enter your number \n");
    scanf("%d", &number);

    if (number == 5) //  leader if else
    {
        printf("your number is 5 \n");
    }
    else if (number == 6)
    {
        printf("your number is 6  \n");
    }
    else if (number == 7)
    {
        printf("your number is 7 \n");
    }
    else if (number == 8)
    {
        printf("your number is 8 \n");
    }
    else if (number == 9)
    {
        printf("your number is 9 \n");
    }
    else
    {
        printf("your number is not 5, 6, 7, 8, 9 \n");
    }
    return 0;
}