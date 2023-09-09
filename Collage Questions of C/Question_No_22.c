#include <stdio.h>

void Largest_Number();

int main()
{
    Largest_Number();
    return 0;
}

void Largest_Number()
{
    int a, b, c;
    printf("Enter First Number: \n");
    scanf("%d", &a);

    printf("Enter Second Number: \n");
    scanf("%d", &b);

    printf("Enter Third Number: \n");
    scanf("%d", &c);

    if(a > b){
        if(a > c){
            printf("First Number is Greater \n");
        }
        else{
            printf("Third Number is Greater \n");
        }
    }
    else{
        if(b > c){
            printf("Second Number is Greater \n");
        }
        else{
            printf("Third Number is Greater \n"); 
        }
    }
}