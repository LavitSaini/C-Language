#include <stdio.h>

void Reverse_Array(char arr[], int n);
void Print_Array(char arr[], int n);

int main()
{
    char arr[11];
    printf("Enter Any Eleven Digit Name: \n");
    gets(arr);

    printf("Simple Array: \n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    Reverse_Array(arr, 11);
    Print_Array(arr, 11);
    return 0;
}

void Reverse_Array(char arr[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int fir = arr[i];
        int sec = arr[n - i - 1];
        arr[i] = sec;
        arr[n - i - 1] = fir;
    }
}

void Print_Array(char arr[], int n)
{
    printf("Reverse Array: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%c", arr[i]);
    }
}