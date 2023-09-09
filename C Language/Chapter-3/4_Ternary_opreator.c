#include <stdio.h>

int main(){
    int num;
    printf("enter your number \n");
    scanf("%d", &num);
    // one line else condition
    // ternary opreator
    (num > 5)? printf("number is greater than 5 \n"): printf("number is less than 5 \n");
    return 0;
}