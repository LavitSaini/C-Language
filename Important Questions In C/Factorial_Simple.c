#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number for Factorial: \n");
    scanf("%d", &n);

    float fac=1;
    for(int i=1; i<=n; i++){
        fac = fac * i;
    }
    printf("Factorial is %f", fac);
    return 0;
}