#include <stdio.h>

void CubeNumber(int cube);

int main(){
    int a;
    printf("Enter a Number \n");
    scanf("%d", &a);

    CubeNumber(a); 
    return 0;
}

void CubeNumber(int cube){
    cube = cube * cube * cube;
    printf("Cube of a Number is %d", cube);
}