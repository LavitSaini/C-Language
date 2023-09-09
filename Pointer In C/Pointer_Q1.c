#include <stdio.h>

int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; // x =0

    // Values

    printf("%d \n", x);    // 0
    printf("%d \n", *ptr); // 0

    printf("\n");

    *ptr += 5;
    printf("%d \n", x);    // 5
    printf("%d \n", *ptr); // 5

    printf("\n");

    (*ptr)++;
    printf("%d \n", x);    // 6
    printf("%d \n", *ptr); // 6

    printf("\n");

    // Address

    printf("%p \n", &x);
    printf("%p \n", &ptr);
    printf("%p \n", &(*ptr));
    return 0;
}