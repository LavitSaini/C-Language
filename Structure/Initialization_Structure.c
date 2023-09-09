#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    float cgpa;
};

int main()
{
    struct student first = {"Saini", 221110, 7.0};
    printf("Student Name: %s \n", first.name);
    printf("Student Name: %d \n", first.roll);
    printf("Student Name: %f \n", first.cgpa);
    return 0;
}