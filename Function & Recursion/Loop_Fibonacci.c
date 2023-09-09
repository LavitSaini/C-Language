#include <stdio.h>

int main()
{
    int n, a = 0, b = 1;
    printf("Enter n: \n");
    scanf("%d", &n);

    printf("%d\t", a);
    printf("%d\t", b);

    for (int i = 2; i < n; i++)
    {
       int fib = a + b;
       printf("%d\t", fib);
       a=b;
       b=fib;
    }
    
    return 0;
}