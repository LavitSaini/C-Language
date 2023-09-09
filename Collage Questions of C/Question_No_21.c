#include <stdio.h>

int main()
{
    int n, count = 1;
    printf("Enter a Number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 3)
    {
        printf("Enter Number is Prime Number \n");
    }
    else
    {
        printf("Enter Number is Not Prime Number \n");
    }
    return 0;
}