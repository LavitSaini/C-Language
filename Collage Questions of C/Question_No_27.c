#include <stdio.h>
#include <string.h>

int main(){
    char S1[] = "First String";
    char S2[] = "Second String";
    
    // Second String Value Store in First String Using this String Function
    strcpy(S1, S2);
    puts(S1);
    return 0;
}