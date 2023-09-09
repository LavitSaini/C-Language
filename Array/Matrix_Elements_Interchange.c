#include <stdio.h>

int main()
{
    // This Program Only Interchange the Elements of 2x2 Matrix -->

    int a[3][3], i, j;

    printf("Enter the Elements of Matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter index[%d][%d]: \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix Elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    // Interchange Matrix Elements -->

    int b[2][2]; // Another Array for Exchange Elements

    b[0][0] = a[0][0];
    b[0][1] = a[1][0];

    b[1][0] = a[0][1];
    b[1][1] = a[1][1];

    printf("Elements of Matrix After Interchange: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}