#include <stdio.h>

void Prime(int, int);

int main()
{
    int n1, n2;
    printf("Enter First Number of Range: \n");
    scanf("%d", &n1);
    printf("Enter Second Number of Range: \n");
    scanf("%d", &n2);

    Prime(n1, n2);
    return 0;
}

void Prime(int x, int y)
{
    int count;
    for (int i = x; i <= y; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d \n", i);
        }
    }
}