#include <stdio.h>

int main(){
    int small_num;
    printf("enter a number \n");
    scanf("%d", &small_num);

    if(small_num == 0){
        printf("this is a smallest number \n");
    }

    else{
        printf("this is not a smallest number \n");
    }
    return 0;
}