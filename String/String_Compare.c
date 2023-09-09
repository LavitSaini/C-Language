#include <stdio.h>
#include <string.h>

int main(){
    char S1[50];
    char S2[50];

    printf("Enter first String: \n");
    fgets(S1, 50, stdin);

    printf("Enter Second String: \n");
    fgets(S2, 50, stdin);

    if(strcmp(S1, S2) == 0){
        printf("Strings are Equal \n");
    }
    else{
        printf("Strings are Not Equal \n");
    }
    return 0;
}