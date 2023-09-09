#include <stdio.h>

void convert(char str[]);

int main(){
    char str[50];
    printf("Enter a String: \n");
    gets(str);

   convert(str);
    return 0;
}

void convert(char str[]){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a'){
            str[i] = 'A';
        }
        else if(str[i] == 'e'){
             str[i] = 'E';
        }
        else if(str[i] == 'i'){
             str[i] = 'I';
        }
        else if(str[i] == 'o'){
             str[i] = 'O';
        }
        else if(str[i] == 'u'){
             str[i] = 'U';
        }
    }
   puts(str);
}