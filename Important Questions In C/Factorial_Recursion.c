#include <stdio.h>

float fact(int n);

int main(){
    int n;
    printf("Enter a Number For Factorial: \n");
    scanf("%d", &n);

    printf("Factorial is %f", fact(n));
    return 0;
}

float fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return (n * fact(n-1));
}