#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter first number \n");
    scanf("%d", &a);

    printf("enter second number \n");
    scanf("%d", &b);

    printf("enter third number \n");
    scanf("%d", &c);

    printf("enter fourth number \n");
    scanf("%d", &d);

    if(a>b && a>c && a>d)
    {
        printf("The greater number is %d", a);
    }
    else if(b>a && b>c && b>d)
    {
         printf("The greater number is %d", b);
    }
    else if(c>a && c>b && c>d)
    {
         printf("The greater number is %d", c);
    }
    else if(d>a && d>b && d>c)
    {
       printf("The greater number is %d", d); 
    }
    return 0;
}