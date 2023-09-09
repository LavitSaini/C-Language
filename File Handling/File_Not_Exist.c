#include <stdio.h>

int main(){

    // In Write Mode if the given name file is not exist then the file is automatically created

    FILE *fptr;
    fptr = fopen("Nothing.txt", "r");

    if(fptr == NULL){
        printf("File Does Not Exist \n");
    }
    else{
        fclose(fptr);
    }
    return 0;
}