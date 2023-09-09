#include <stdio.h>

int main(){
    int a;
    int *ptr; //Pointer Variable
    ptr = &a; // Now Address of variable a is stored in pointer p
    printf("Address of Variable a is %u \n", ptr); // Print the value of pointer (ptr)
    return 0;
}