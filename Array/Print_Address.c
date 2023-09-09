#include <stdio.h>

int main(){
    
    int a=2;
    int *ptr = &a;
    printf("%d \n", a);
    printf("%p \n", ptr);
    printf("%d", *(ptr));
    return 0;
}