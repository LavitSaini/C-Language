#include <stdio.h>

int main(){
    int a, b;

    printf("Enter Value of a \n");
    scanf("%d", &a);

    printf("Enter Value of b \n");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum  is %d \n", sum);
    return 0;
}