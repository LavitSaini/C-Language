#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter a String: \n");
    scanf("%s", &str);

    int length = strlen(str);
    printf("%d", length);
    return 0;
}