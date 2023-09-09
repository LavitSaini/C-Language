#include <stdio.h>

   void printNamaste();
   void printBonjour();

int main(){
    char ch;
    printf("Enter i Or I for Indian And f Or F for French:");
    scanf("%c", &ch);

    if(ch == 'i' || ch == 'I'){
       printNamaste(); 
    }
    else if (ch == 'f' || ch == 'F')
    {
       printBonjour(); 
    }
    return 0;   
}

void printNamaste(){
    printf("Namaste \n");
}
void printBonjour(){
    printf("Bonjour \n");
}
