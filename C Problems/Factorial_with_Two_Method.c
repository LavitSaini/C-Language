#include <stdio.h>

// function Declaration

int first_factorial(int n); // function Iterative

int second_factorial(int n); // function Recursion

int main(){
    int n;
    printf("Enter a Number for factorial \n");
    scanf("%d", &n);
    
    int factorial_Iterative = first_factorial(n);
    int factorial_Recursion = second_factorial(n);

    printf("factorial with function Iterative Method is %d \n", factorial_Iterative);
    printf("factorial with function Recursion Method is %d \n", factorial_Recursion);

    return 0;
}

//function Iterative

int first_factorial(int n){ // function Defination

    int fact = 1;

    for(int i = 1; i <= n; i++){
       fact = fact * i;
    }

    return fact;
}

// function Recursion

int second_factorial(int n){  // function Defination
    
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * second_factorial(n - 1);
    }
}