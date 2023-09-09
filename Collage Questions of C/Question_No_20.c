#include <stdio.h>

int main()
{

    int n, a, b;
    printf("Please Enter a Number Betwwen 1 to 4 (1 - Sum, 2 - Subtract, 3 - Multiply, 4 - Divide) \n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter two Numbers: \n");
        scanf("%d %d", &a, &b);
        printf("%d + %d = %d \n", a, b, (a + b));
        break;

    case 2:
        printf("Enter two Numbers: \n");
        scanf("%d %d", &a, &b);
        printf("%d - %d = %d \n", a, b, (a - b));
        break;

    case 3:
        printf("Enter two Numbers: \n");
        scanf("%d %d", &a, &b);
        printf("%d * %d = %d \n", a, b, (a * b));
        break;

    case 4:
        printf("Enter two Numbers: \n");
        scanf("%d %d", &a, &b);
        printf("%d / %d = %d \n", a, b, (a / b));
        break;

    default:
        printf("You Entered a Wrong Number");
        break;
    }
    return 0;
}