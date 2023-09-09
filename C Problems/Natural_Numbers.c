#include <stdio.h>

int main()
{
    int number;
    printf("Please Enter Only a Number Not a Character \n");
    scanf("%d", &number);

    if (number >= 1)
    {
        printf("Natural Number");
    }
    else {
         printf("Not Natural Number");
    }

    return 0;
}