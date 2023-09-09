#include <stdio.h>

int main(){
    
    int n1, n2, n3;
    printf("Enter three Numbers : \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>n2){
        if(n1>n3){
            printf("%d is greater Number \n", n1);
        }
        else{
            printf("%d is greater Number \n", n3);
        }
    }
    else{
        if(n2>n3){
            printf("%d is greater Number \n", n2);
        }
        else{
            printf("%d is greater Number \n", n3);
        }
    }
    return 0;
}