#include <stdio.h>

int main(){
    int year;
    printf("Enter a Year \n");
    scanf("%d", &year);

    if(year%4 == 0){
        printf("Leap Year \n");
    }
    else{
        printf("Not a Leap Year \n");
    }
    return 0;
}