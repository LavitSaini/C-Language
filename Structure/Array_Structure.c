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
    struct student bca[2]; //Arrays in Structures 
    struct student mca[2]; 

    printf("\n");

    printf("Bachelor of Computer Application Students --> \n");
 
    printf("\n");

    bca[0].roll = 221110;
    bca[0].cgpa = 7.5;
    strcpy(bca[0].name, "Lavit");
    printf("Student Name: %s \n", bca[0].name);
    printf("Student Roll Number: %d \n", bca[0].roll);
    printf("Student CGPA: %f \n", bca[0].cgpa);

    printf("\n");

    bca[1].roll = 221142;
    bca[1].cgpa = 9.5;
    strcpy(bca[1].name, "Prabhnoor Singh");
    printf("Student Name: %s \n", bca[1].name);
    printf("Student Roll Number: %d \n", bca[1].roll);
    printf("Student CGPA: %f \n", bca[1].cgpa);

    printf("\n");

    printf("Master of Computer Application Students --> \n");

    printf("\n");

    mca[0].roll = 221125;
    mca[0].cgpa = 9.8;
    strcpy(mca[0].name, "Neeraj Jagga");
    printf("Student Name: %s \n", mca[0].name);
    printf("Student Roll Number: %d \n", mca[0].roll);
    printf("Student CGPA: %f \n", mca[0].cgpa);

    printf("\n");

    mca[1].roll = 221111;
    mca[1].cgpa = 9.9;
    strcpy(mca[1].name, "Manjeet Singh");
    printf("Student Name: %s \n", mca[1].name);
    printf("Student Roll Number: %d \n", mca[1].roll);
    printf("Student CGPA: %f \n", mca[1].cgpa);

    printf("\n");

    return 0;
}