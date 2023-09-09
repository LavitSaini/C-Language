#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("open.txt", "r");
    for (int i=1; i<=14; i++)
    {
        char ch = getc(fptr);
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}