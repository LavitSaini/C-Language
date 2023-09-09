#include <stdio.h>

int main(){
    int side;
    printf("Enter the value of side of a cube \n");
    scanf("%d", &side);

    int volume = side * side * side;
    printf("Volume of a Cube is %d \n", volume);
    return 0;
}