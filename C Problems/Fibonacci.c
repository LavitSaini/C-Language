#include <stdio.h>

int main(){
    int a=0, b=1, c, d;
    printf("Enter the Number of terms You wants to Print Fibonacci Series: ");
    scanf("%d", &d);

    printf("%d\t%d\t", a, b); // Print 0 and 1

    for(int i = 2; i < d; i++){
        c = a + b;
        printf("%d \t", c);
        a = b;
        b = c;
    }
    return 0;
}