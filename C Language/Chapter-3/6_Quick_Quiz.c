#include <stdio.h>

int main()
{
    int marks;
    printf("enter student marks \n");
    scanf("%d", &marks);

    if (marks==100||marks==99||marks==98||marks==97||marks==96||marks==95||marks==94||marks==93
    ||marks==92||marks==91)
    {
        printf("student get A grade \n");
    }
    else if (marks==90||marks==89||marks==88||marks==87||marks==86||marks==85||marks==84||marks==83||
    marks==82||marks==81)
    {
        printf("student get B grade \n");
    }
    else if (marks==80||marks==79||marks==78||marks==77||marks==76||marks==75||marks==74||marks==73||
    marks==72||marks==71)
    {
        printf("student get C grade \n");
    }
    else if (marks==70||marks==69||marks==68||marks==67||marks==66||marks==65||marks==64||marks==63||
    marks==62||marks==61)
    {
        printf("student get D grade \n");
    }
    else if (60 >= marks < 33)
    {
        printf("student get E grade \n");
    }
    else{
        printf("Student is Fail");
    }

    return 0;
}