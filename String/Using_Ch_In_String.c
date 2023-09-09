#include <stdio.h>

int main(){
    char str[50];
    char ch;
    int i=0;
    for(; ch != '\n'; i++){
        scanf("%c", &ch);
        str[i] = ch;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}