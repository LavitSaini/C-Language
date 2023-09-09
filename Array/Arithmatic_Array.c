#include <stdio.h>

int main(){
    float price = 20.00;
    float *ptr = &price;
    printf("%f \n", *(ptr));
    ptr++;
    printf("%u \n", ptr);
    return 0;
}