#include <stdio.h>

int main(){
    int marks;
    printf("Enter Student Marks \n");
    scanf("%d", &marks);

    if(marks >= 30 && marks <= 100){
        printf("Student is Pass \n");
    }
    else if (marks <30 && marks >= 0){
        printf("Student is Fail \n");
    }
    
    return 0;
}