#include <stdio.h>

float Average(int, int);

int main()
{
    int n1, n2;
    printf("Enter First Number of Range: \n");
    scanf("%d", &n1);
    printf("Enter Second Number of Range: \n");
    scanf("%d", &n2);

    printf("Average is %f", Average(n1, n2));
    return 0;
}

float Average(int x, int y)
{
    int count = 0;
    float z = 0;
    float Avg;
    for (int i = x; i <= y; i++)
    {
        z = z + i;
        count++;
    }
    printf("Sum is %f\n", z);
    printf("Count = %d\n", count);
    Avg = z / count;
    return Avg;
}