#include <stdio.h>

int main(){
    char name[20];
    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("Your Name is %s", name);
    return 0;
}