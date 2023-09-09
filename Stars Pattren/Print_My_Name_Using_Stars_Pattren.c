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
            if (col == 1 || row == 5) // Print L
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++) // For Space
        {
            printf("  ");
        }
        for (col = 1; col <= 5; col++)
        {
            if (row == 1 || col == 1 || col == 5 || row == 3) // Print A
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
            if (row == 5 && (col == 3) || row == 4 && (col == 2 || col == 4) || row == 3 && (col == 1 || col == 5) || row == 2 && (col == 1 || col == 5) || row == 1 && (col == 1 || col == 5)) // Print V
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
        for (col = 1; col <= 5; col++)
        {
            if (row == 1 || col == 3) // Print T
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

    for (row = 1; row <= 5; row++) // Rows
    {

        for (col = 1; col <= 5; col++) // Colums
        {
            if (row == 1 || row == 3 || row == 5 || row == 2 && col == 1 || row == 4 && col == 5) // Print S
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (space = 1; space <= 3; space++) // For Space
        {
            printf("  ");
        }
        for (col = 1; col <= 5; col++) // Print A
        {
            if (row == 1 || col == 1 || col == 5 || row == 3) // Print A
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
        for (col = 1; col <= 5; col++) // Print I
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
        for (col = 1; col <= 5; col++) // Print N
        {
            if (col == 1 || col == 5 || row == 2 && (col == 2) || row == 3 && (col == 3) || row == 4 && (col == 4))
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
        for (col = 1; col <= 5; col++) // Print I
        {
            if (row == 1 || row == 5 || col == 3)
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