#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);

int main()
{
    int x, y;
    printf("Enter Two Numbers: \n");
    scanf("%d %d", &x, &y);
    printf("Sum is %d\n", sum(x, y));
    return 0;
}

int sum(int a, int b)
{
    printf("Sub is %d\n", sub(a, b));
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}