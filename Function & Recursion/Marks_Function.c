#include <stdio.h>

float Percantage(float Science, float Math, float Sanskrit);

int main(){
    float S, M, SK;
    printf("Enter Marks in Science \n");
    scanf("%f", &S);

    printf("Enter Marks in Math \n");
    scanf("%f", &M);

    printf("Enter Marks in Sanskrit \n");
    scanf("%f", &SK);
    
    float Result = Percantage(S, M, SK);
    printf("Your Result is %f \n", Result);
    return 0;
}

float Percantage(float Science, float Math, float Sanskrit){
    float percentage = ((Science + Math + Sanskrit) / 3.0);
    return percentage;
}