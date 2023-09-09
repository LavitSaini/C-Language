#include <stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    printf("Enter Your Password: \n");
    scanf("%s", password);

    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char NewPassword[200];

    strcpy(NewPassword, password);
    strcat(NewPassword, salt);
    puts(NewPassword);
}