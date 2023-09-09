#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Employee_Details.txt", "w");

    char name[30];
    int age;
    char email[50];

    printf("Enter Employee Name: \n");
    gets(name);

    printf("Enter Age: \n");
    scanf("%d", &age);

    printf("Enter Employee Email Address: \n");
    scanf("%s", email);

    fprintf(fptr, "Employee Name: %s \n", name);
    fprintf(fptr, "Age: %d \n", age);
    fprintf(fptr, "Employee Email Address: %s \n", email);

    return 0;
}