#include <stdio.h>

int main(){
    int year;
    printf("enter a year \n");
    scanf("%d", &year);

    if(year % 4 == 0)
    {
    printf("Entered year is leap year \n");
    }
    else
    {
    printf("Entered year is not leap year \n");
    }
    return 0;
}