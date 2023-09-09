#include <stdio.h>


void AreaCircle(float radius);

int main()
{
    int radius;
    printf("Ente the Value of Radius \n");
    scanf("%d", &radius);

    AreaCircle(radius);
    return 0;
}

void  AreaCircle(float radius)
{
    const float pi = 3.14;
   printf("Area of Circle is %f \n", pi * radius * radius);
}