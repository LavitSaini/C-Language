#include <stdio.h>
#include<string.h>

int main(){
    char str[15];
    printf("Enter a String: \n");
    gets(str);

    printf("String Reverse: %s", strrev(str));
    return 0;
}
