#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter Number of Terms of Fibonacci You want to Print: \n");
    scanf("%d", &n);

    int fibonacci = fib(n);
    printf("%d \t", fibonacci);
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}