#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Integers.txt", "r");
    int Integer;
    for(int i=1; i<=5; i++){
        fscanf(fptr, "%d", &Integer);
        printf("%d \n", Integer);
    }
    fclose(fptr);
    return 0;
}