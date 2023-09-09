#include <stdio.h>

void print_string(char arr[]);

int main(){
    char First_Name[] = "LAVIT";
    char Second_Name[] = "SAINI";
    
    print_string(First_Name);
    print_string(Second_Name);
    return 0;
}

void print_string(char arr[]){
  for(int i=0; arr[i] != '\0'; i++){
    printf("%c", arr[i]);
  }
  printf("\n");
}