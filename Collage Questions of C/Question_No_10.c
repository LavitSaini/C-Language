#include <stdio.h>

int main(){
    float BS, DA, HRA, NET_SALARY;

    printf("Enter the Basic Salary of a Employee \n");
    scanf("%f", &BS);

    DA = 0.25 * BS; // 25 Percent DA of the Basic Salary
    HRA = 0.15 * BS;// 15 Percent HRA of the Basic Salary
    NET_SALARY = BS - (0.10 * (BS + DA + HRA));
    
    printf("Net Salary of a Employee is %f \n", NET_SALARY);
    return 0;
}