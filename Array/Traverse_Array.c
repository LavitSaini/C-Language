#include <stdio.h>

int main()
{

    int aadhar[5];
    int *ptr = &aadhar[0];

    // Input Values in Pointe0r Addresses

    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
    }

    // Output Values of Pointer Addresses

    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d \n", i, *(ptr + i));
    }
    return 0;
}