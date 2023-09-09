#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, space;
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || i == 2 && (j == 5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || i == 2 && (j == 5) || i == 3 && (j == 3) || i == 4 && (j == 3) || i == 5 && (j == 5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || j == 5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 && (j == 1 || j == 2 || j == 3 || j == 4) || i == 3 && (j == 1 || j == 2 || j == 3 || j == 4) || i == 5 && (j == 1 || j == 2 || j == 3 || j == 4) || i == 2 && (j == 5) || i == 4 && (j == 5) || j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 1 || j == 5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    getch();
}