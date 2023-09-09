#include <stdio.h>
#include <conio.h>

float fact(int n);

int main(){
    int n;
    printf("Enter a Number for Factorial: \n");
    scanf("%d", &n);

    printf("Factorial is %f", fact(n));
    getch();
}

float fact(int n){
    float fac=1;
    for(int i=1; i<=n; i++){
        fac = fac * i;
    }
    return fac;
}