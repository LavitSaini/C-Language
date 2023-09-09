#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("change.txt", "r");
    
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    int sum = a + b;
    fclose(fptr);

    fptr = fopen("change.txt", "a");
    fprintf(fptr, "\n Sum is: %d", sum);
    fclose(fptr);
    return 0;
}