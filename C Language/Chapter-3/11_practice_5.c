#include <stdio.h>

int main()
{
    // 97 - 112 = a - z --> small character which called to lowercase
    char ch;
     
    printf("Enter the Character \n");
    scanf("%c", &ch);

    if(ch <= 112 && ch >= 97)
    {
    printf("character is lowercase \n");
    }
    else
    {
     printf("character is not lowercase \n");
    }
    return 0;
}