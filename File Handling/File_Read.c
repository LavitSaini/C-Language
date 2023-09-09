#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("open.txt", "r");

    char ch;
   for(int i=1; i<=14; i++){
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
   }
    fclose(fptr);
    return 0;
}