#include <stdio.h>

int main(){
    int w;
    printf("Enter a Number:");
    scanf("%d", &w);

    for(int i=0; i<=w; i++){
        printf("%d \n", i);
    }
    return 0;
}