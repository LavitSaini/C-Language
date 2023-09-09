#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    // This will be lead to an infinite loop
    while(a > 5){
    printf("%d \n", a);
    a++;
    }
    return 0;
}