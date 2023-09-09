#include <stdio.h>

int main()
{
    FILE *fptr;
    int n;
    fptr = fopen("Odd_Numbers.txt", "w");

    printf("Enter a Number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            fprintf(fptr, "%d \n", i);
        }
    }

    fclose(fptr);
    return 0;
}