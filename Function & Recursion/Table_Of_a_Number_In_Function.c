#include <stdio.h>

void printTable(int n);

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);

    printTable(n); // Here n Varaible is  Argument / Actual Parameter
    return 0;
}

void printTable(int n)
{                        // Here n Varaible is Parameter / Formal Parameter
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
}