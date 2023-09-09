#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[30];
    int age;
    float cgpa;

    printf("Enter Student Name: \n");
    gets(name);

    printf("Enter Student Age: \n");
    scanf("%d", &age);

    printf("Enter Student CGPA: \n");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name : %s\n", name);
    fprintf(fptr, "Student Age : %d\n", age);
    fprintf(fptr, "Student CGPA : %f \n", cgpa);

    fclose(fptr);
    return 0;
}