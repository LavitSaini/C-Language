#include <stdio.h>

int main()
{
    // this code tells us the input number is ever or odd
    int a;
    printf("enter the number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }

}