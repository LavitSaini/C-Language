#include <stdio.h>

void fib(int n);

int main(){
    int n;
    printf("Enter Number of Terms of Fibonacci You want to Print: \n");
    scanf("%d", &n);
    fib(n);
    return 0;
}

void fib(int n){
    int a=0, b=1, c;
    printf("%d \t", a);
    printf("%d \t", b);

    for(int i=2; i<n; i++){
        c = a + b;
        printf("%d \t", c);
        a = b;
        b = c;
    }
}