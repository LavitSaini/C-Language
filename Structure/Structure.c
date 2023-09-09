#include <stdio.h>
#include <string.h>

struct student
{
    char name[25];
    int roll;
    float cgpa;
};

int main()
{
    
    printf("\n");

    struct student s1;
    s1.roll = 221110;
    s1.cgpa = 8.6;
    strcpy(s1.name, "Lavit");

    printf("Student Name: %s \n", s1.name);
    printf("Student Roll Number: %d \n", s1.roll);
    printf("Student CGPA: %f \n", s1.cgpa);

    printf("\n");

    struct student s2;
    s2.roll = 221142;
    s2.cgpa = 8.9;
    strcpy(s2.name, "Prabhnoor Singh");

    printf("Student Name: %s \n", s2.name);
    printf("Student Roll Number: %d \n", s2.roll);
    printf("Student CGPA: %f \n", s2.cgpa);

    printf("\n");

    struct student s3;
    s3.roll = 221125;
    s3.cgpa = 9.2;
    strcpy(s3.name, "Neeraj Jagga");

    printf("Student Name: %s \n", s3.name);
    printf("Student Roll Number: %d \n", s3.roll);
    printf("Student CGPA: %f \n", s3.cgpa);

    printf("\n");

    return 0;
}