#include <stdio.h>

int main()
{
    int x, y, n, a;

    printf("Enter First Number of Range: \n");
    scanf("%d", &x);

    printf("Enter Second Number of Range: \n");
    scanf("%d", &y);

    for (n = x; n <= y; n++)
    {
        a = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                a++;
            }
        }

        if (a == 2)
        {
            printf("\n%d \t", n);
        }
    }
    return 0;
}