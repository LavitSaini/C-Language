#include <stdio.h>

int main(){
    int a, b;
    int *ptr1;
    int *ptr2;
    printf("Enter the First Number: \n");
    scanf("%d", &a);

    printf("Enter the Second Number: \n");
    scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;
    printf("Multiply of Two Numbers: %d", (*ptr1)*(*ptr2));
    return 0;
}