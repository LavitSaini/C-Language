#include <stdio.h>

int main()
{
    int length, breath;
    printf("enter the value of length \n");
    scanf("%d", &length);

    printf("enter the value of breath \n");
    scanf("%d", &breath);

    int area = length * breath;
    printf("the area of rectangle is %d", area);

    return 0;
}