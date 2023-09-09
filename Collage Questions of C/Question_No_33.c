#include <stdio.h>

struct s
{
    int a; 
    float b; 
    char c; 
};

union u
{
    int x;
    float y;
    char z;
};

int main()
{
    printf("Total Memory occupied by Structure is %ld Bytes \n", sizeof (struct s)); 
    printf("Total Memory occupied by Union is %ld Bytes \n", sizeof (union u));
    return 0;
}