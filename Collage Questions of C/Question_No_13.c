#include <stdio.h>
#include <conio.h>

int main()
{
    char ch1;
    printf("Enter a Character:");
    ch1 = getch();
    printf("\n You have Entered Character:");
    putch(ch1);


    char ch2;
    printf("\n Enter a Character:");
    ch2 = getche();
    printf("\n You have Entered Character:");
    putchar(ch2);

    char ch3;
    printf("\n Enter a Character:");
    ch3 = getchar();
    printf(" You have Entered Character:");
    putchar(ch3);
    return 0;
}