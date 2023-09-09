#include <stdio.h>
#include <conio.h>

int main()
{
    int row, col, space;

    printf("\n");

    for (row = 1; row <= 5; row++) // Rows
    {
        for (col = 1; col <= 5; col++) // Colums
        {
            if (row == 1 || col == 1 || row == 3 || row == 2 && (col == 5)) // Print P
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++) // Print Space
        {
            printf("  ");
        }
        for (col = 1; col <= 5; col++)
        {
            if (col == 1 || col == 5 || row == 5) // Print U
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
        for (col = 1; col <= 5; col++)
        {
            if (col == 1 || row == 1 || row == 3 || row == 2 && (col == 5) || row == 4 && (col == 3) || row == 5 && (col == 5))
            // Print R
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
        for (col = 1; col <= 5; col++)
        {
            if (col == 1 || col == 5 || row == 2 && (col == 2) || row == 3 && (col == 3) || row == 4 && (col == 4) || row == 5 && (col == 5)) // Print N
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
        for (col = 1; col <= 5; col++)
        {
            if (row == 1 || row == 5 || col == 3) // Print I
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
        for (col = 1; col <= 5; col++) // Print M
        {
            if (col == 1 || col == 5 || row == 2 && (col == 2 || col == 4) || row == 3 && (col == 3))
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
        for (col = 1; col <= 5; col++) // Print A
        {
            if (col == 1 || col == 5 || row == 3 && (1 <= col <= 5) || row == 1)
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