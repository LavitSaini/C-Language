#include <stdio.h>

int main()
{
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i=n; i > 0; i--)
    {
        sum = sum + i;
        printf("%d \n", i);
       
    }

    printf("Sum is %d \n", sum);
    return 0;
}