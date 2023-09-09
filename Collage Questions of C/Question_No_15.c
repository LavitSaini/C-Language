#include <stdio.h>

int main(){
    
    int n1, n2;

    printf("Enter two Numbers: \n");
    scanf("%d %d", &n1, &n2);
    
    if(n1 < n2){
        printf("%d is Largest Number \n", n2);
    }
    else{
       printf("%d is Largest Number \n", n1); 
    }
    return 0;
}