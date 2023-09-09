#include <stdio.h>

    int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter First Number : \n");
    scanf("%d", &a);

    printf("Enter Second Number : \n");
    scanf("%d", &b);

    int s= sum(a , b);
    printf("Sum is :%d \n", s);

    return 0;
}

int sum(int a, int b){
    return a + b;
}