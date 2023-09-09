#include <stdio.h>

int main(){
    // if we want to change value of a string then we use string as a pointer
    char *str = "Hello World";
    puts(str);

    str = "Hello";
    puts(str);

    //   char str[] = "Hello World";
    //   puts(str);

    //   str = "Hello";
    //   puts(str);
    return 0;
}