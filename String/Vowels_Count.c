#include <stdio.h>

int count_vowels(char str[]);

int main(){
    char str[100];
    printf("Enter a String: \n");
    gets(str);

    int Number_of_vowels = count_vowels(str);
    printf("Total Vowels Count: %d", Number_of_vowels);
    return 0;
}

int count_vowels(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
           count++;
        }
    }
    return count;
}