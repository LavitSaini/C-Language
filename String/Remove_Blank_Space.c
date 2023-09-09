#include <stdio.h>

void remove_blank_space(char str[]);

int main(){
    char str[50];
    printf("Enter a String: \n");
    gets(str);

    remove_blank_space(str);
    return 0;
}

void remove_blank_space(char str[]){
  
    for(int i=0,j=1; str[i] != '\0', str[j] != '\0'; i++, j++){
     if(str[i] == ' ' || str[i] == '\t'){
       str[i] = str[i+j];
     }
    }
    puts(str);
}
