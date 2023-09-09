#include <stdio.h>

int count_length(char arr[]);

int main(){
    char str[50];
    printf("Enter a String: \n");
    scanf("%s", &str);

    printf("Length of String is %d", count_length(str));
    return 0;
}

int count_length(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
     count++;
    }
    return count;
}