#include <stdio.h>

void printnumber(int array[], int n);

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  printnumber(arr, 6);
  return 0;
}

void printnumber(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d \t", array[i]);
  }
}