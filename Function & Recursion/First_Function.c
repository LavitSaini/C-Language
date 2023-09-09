#include <stdio.h>

void printHello(); // Function Declearation

int main(){
    printHello();  // Function Calling
    printHello();
    printHello(); 
    return 0;
}

void printHello(){ 
    printf("Hello World! \n"); // Function Works
}