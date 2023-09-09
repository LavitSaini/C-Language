#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("read.txt", "r");
    for(int i=1; i<=18; i++){
        char ch = fgetc(fptr);
        printf("%c \n", ch);
    }
    fclose(fptr);
    return 0;
}