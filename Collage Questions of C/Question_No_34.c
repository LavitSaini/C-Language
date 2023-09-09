#include <stdio.h>

struct Student_I_Card
{
  char name[30];
  char course[20];
  char college_name[50];
  char address[50];
};

int main()
{
  struct Student_I_Card id = {"Lavit Saini", "BCA", "Chandigrah Group of Colleges", "Sector 59 Phase 5 Mohali"};

  printf("Student Name: %s \n", id.name);
  printf("Course: %s \n", id.course);
  printf("College Name: %s \n", id.college_name);
  printf("Address: %s \n", id.address);
  return 0;
}