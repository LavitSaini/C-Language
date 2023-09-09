#include <stdio.h>

int main(){
    int n = 99;
    while(n<=999){
        n++;
        if(n%2 != 0){
            printf("%d \n", n);
        }
    }
    return 0;
}