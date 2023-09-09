#include <stdio.h>

void Str_Reverse(char str[], int count);

int main()
{
    int count = 0;
    char str[50];
    printf("Enter a String: \n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    Str_Reverse(str, count);

    return 0;
}

void Str_Reverse(char str[], int count)
{
    for (int i = 0; i <= count; i++)
    {
        printf("%c", str[count - i]);
    }

}