#include <stdio.h>

int main()
{

    // 3x3 -- Matrix Using 3D Array

    int matrix[3][3];

    printf("Enter Matrix First Row First Element: \n");
    scanf("%d", &matrix[0][0]);

    printf("Enter Matrix First Row Second Element: \n");
    scanf("%d", &matrix[0][1]);

    printf("Enter Matrix First Row Third Element: \n");
    scanf("%d", &matrix[0][2]);

    printf("Enter Matrix Second Row First Element: \n");
    scanf("%d", &matrix[1][0]);

    printf("Enter Matrix Second Row Second Element: \n");
    scanf("%d", &matrix[1][1]);

    printf("Enter Matrix Second Row Third Element: \n");
    scanf("%d", &matrix[1][2]);

    printf("Enter Matrix Third Row First Element: \n");
    scanf("%d", &matrix[2][0]);

    printf("Enter Matrix Third Row Second Element: \n");
    scanf("%d", &matrix[2][1]);

    printf("Enter Matrix Third Row Third Element: \n");
    scanf("%d", &matrix[2][2]);

    printf("%d", matrix[0][0]);
    printf(" %d", matrix[0][1]);
    printf(" %d", matrix[0][2]);
    printf("\n");
    printf("%d", matrix[1][0]);
    printf(" %d", matrix[1][1]);
    printf(" %d", matrix[1][2]);
    printf("\n");
    printf("%d", matrix[2][0]);
    printf(" %d", matrix[2][1]);
    printf(" %d", matrix[2][2]);
    return 0;
}