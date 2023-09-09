#include <stdio.h>

void check(char str[], char ch);

int main(){
    char str[50];
    char ch;
    printf("Enter a String; \n");
    gets(str);

    printf("Enter a Character for String Character Matching: \n");
    scanf("%c", &ch);

    check(str, ch);
    return 0;
}

void check(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Yes, Character is Present In String");
            return;
        }
    }
    printf("No, Character is Not Present In String");
}