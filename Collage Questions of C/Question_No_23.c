#include <stdio.h>

void fun ();

int main(){
    fun ();
    return 0;
}

void fun (){
    for(int i=1; i<=20; i++){
        printf("%d \t Square is %d \n", i, (i*i));
    }
}