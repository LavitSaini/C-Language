#include <stdio.h>
// Last is 16 Factorial 
int main(){
    int n;
    printf("Enter Value of n:");
    scanf("%d", &n);

    int factorial = 1;
    for(int i=1; i<=n; i++){
        
        factorial=factorial*i;
    }

    printf("%d \n", factorial);
    return 0;
}