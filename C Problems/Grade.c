#include <stdio.h>

int main(){
    int marks;
    printf("Enter Student Marks \n");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90){
        printf("grade A+ \n");
    }

    else if (marks < 90 && marks >= 70){
        printf("grade A \n");
    }

    else if (marks < 70 && marks >= 30){
    printf("grade B \n");
    }

    else if(marks < 30 && marks > 0){
        printf("grade c \n");
    }
}