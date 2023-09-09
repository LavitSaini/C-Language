#include <stdio.h>

void SqaureNumber(int square);

int main(){
    int square;
    printf("Enter a Number \n");
    scanf("%d", &square);

    SqaureNumber(square);
    return 0;
}

void SqaureNumber(int square){
  square = square * square;
  printf("Square of Number is %d \n", square);
}