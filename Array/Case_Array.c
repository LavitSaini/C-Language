#include <stdio.h>

int main(){
    
    int age=22;
    int _age=23;

    int *ptr= &age;
    int *_ptr= &_age;

    // Difference
    printf("%u %u %u \n", &ptr, &_ptr, ptr-_ptr);

    // Comparison
    _ptr=&age;
    printf("%u \n", ptr==_ptr);
    return 0;
}