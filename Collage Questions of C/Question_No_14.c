#include <stdio.h>
#include <conio.h>

int main(){
    float len, bre;
    printf("Enter the Value of Length: \n");
    scanf("%f", &len);
    printf("Enter the Value of Breath: \n");
    scanf("%f", &bre);

    float area = len * bre;
    printf("Area of Rectangle is %f \n", area);
    getch();
}