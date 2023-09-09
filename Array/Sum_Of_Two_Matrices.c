#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];

    printf("Enter First Matrix Elements: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Index [%d][%d]: \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Second Matrix Elements: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Index [%d][%d]: \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of Two Matrices is: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}