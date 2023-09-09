#include <stdio.h>

int main()
{
    // Question - 1:
    // int a; b = a; //invalid
    int v = 3 ^ 3; // valid
    printf("%d", v);
    //  ^ is bitwise opreator
    // char dt = '21 Dec 2022'; //invalid



    //  Question - 2:
    printf("3.0/8 -2 is %f \n", 3.0 / 8 - 2);
    // float/int = float , float = double , output is float so use %f
    //  any decimal number in c compiler is double ex- 0.444



    // Question - 3: write a program to check whether a number is divisible by 97 or not ?
    int num;
    printf("enter the value of number\n");
    scanf("%d", &num);

if ( num % 97 == 0){
    printf("divisiability test returns: %d \n:", num % 97);
}
else{
    printf("Number is not divisiable by 97 \n");
}


    // Question - 4:
    int x = 2, y = 3, z = 3, k = 1;
    printf("3 * x / y - z + k is %d \n", 3 * x / y - z + k);

    // 3 * x / y - z + k
    // 3 * 2 / 3 - 3 + 1
    // 0

    return 0;


    // Question - 5: 3.0 + 1 will be :
    // (a) integer
    // (b) floating point number
    // (c) character

    // Answer is (b) floating point number

}