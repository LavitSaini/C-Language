#include <stdio.h>

int main()
{

    int Size_int;
    float Size_float;
    char Size_char;
    double Size_double;

    printf("Size of int is %u bytes \n", sizeof(Size_int));
    printf("Size of float is %u bytes \n", sizeof(Size_float));
    printf("Size of char is %u byte \n", sizeof(Size_char));
    printf("Size of double is %u bytes \n", sizeof(Size_double));

    return 0;
}