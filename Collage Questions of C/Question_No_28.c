#include <stdio.h>
#include<string.h>

int main(){
    char s1[15];
    char s2[15];
    printf("Enter First String: \n");
    gets(s1);
    printf("Enter Second String: \n");
    gets(s2);

    if(strcmp(s1, s2) == 0){
        printf("String are Same \n");
    }
    else{
        printf("Strings are not Same");
    }
    return 0;
}