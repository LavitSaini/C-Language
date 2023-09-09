#include <stdio.h>

int main()
{
    // Using 2x2 Matrices

    int a[2][2], b[2][2], c[2][2], i, j;

    printf("Enter First Matrix Elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Value of [%d] [%d]: \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Second Matrix Elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Value of [%d] [%d]: \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of Two Matrices is: \n");

    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}