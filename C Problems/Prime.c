#include <stdio.h>

int main()
{
    int n;
    int count=0;
    printf("Enter a Number:");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }

    if (count==2)
    {
        printf("Prime Number \n");
    }
    else
    {
        printf("Not a Prime Number \n");
    }
    return 0;
}