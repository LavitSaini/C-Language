#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number of Terms of Fibonacci You want to Print: \n");
    scanf("%d", &n);

    int a = 0, b = 1, c;
    printf("%d \t", a);
    printf("%d \t", b);

    for(int i=2; i<n; i++){
        c = a + b;
        printf("%d \t", c);
        a = b;
        b = c;
    }
    return 0;
}