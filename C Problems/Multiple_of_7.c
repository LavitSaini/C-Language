#include <stdio.h>
//Question --> Entered Number is Multiple of 7 Then Stop Program?
int main(){
    int n;

    do{
        printf("Enter Number:");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0){
            break;
        }
    } while(1);

    printf("Entered Number is Multiple of 7 \n");
    return 0;
}