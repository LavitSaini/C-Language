#include <stdio.h>

int main(){
    char FullName [100];
    printf("Enter Your Full Name: ");
    // Take Input Using gets Function and print output using puts function
    // gets(FullName);
    // puts(FullName);

    // Take Input Using fgets Function and print output using puts function
    fgets(FullName, 100, stdin);
    puts(FullName);
    return 0;

}