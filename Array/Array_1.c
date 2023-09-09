#include <stdio.h>

int main(){
    
    int marks[3];
    printf("Enter phy marks: \n", marks[0]);
    scanf("%d", &marks[0]);

    printf("Enter chem marks: \n", marks[1]);
    scanf("%d", &marks[1]);

    printf("Enter bio marks: \n", marks[2]);
    scanf("%d", &marks[2]);

    printf("phy: %d \n", marks[0]);

    printf("chem: %d \n", marks[1]);

    printf("bio: %d \n", marks[2]);

    return 0;
}