#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);

    printf("Sum is %d \n", sum(n));
    return 0;
}

int sum(int n)
{
    // Base Case
    if (n == 1)
    {
        return 1;
    }

    int Sum = sum(n-1);
    int Total_Sum = Sum + n;
    return Total_Sum;
}