#include <stdio.h>

int main(){
    
    float n;
    float fact = 1;
    printf("Enter a Number For Factorial: \n");
    scanf("%f", &n);

    for(float i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("Factorial is %f \n", fact);
    return 0;
}