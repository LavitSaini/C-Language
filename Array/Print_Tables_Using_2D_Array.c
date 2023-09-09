#include <stdio.h>

int print_table(int array[][10], int n, int m, int number);

int main(){
    int tables[2][10];
    print_table(tables, 0, 10, 6);
    print_table(tables, 1, 10, 9);

    // Print Tables Using Array Because the Values Already Store in Memory Locations
    for (int i = 0; i < 10; i++) {
        printf("%d \t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d \t", tables[1][i]);
    }
    return 0;
}
int print_table(int array[][10], int n, int m, int number){
    for (int i = 0; i < m; i++){
        array[n][i] = number * (i + 1); // 2, 4, 6, 8, _ _ , 3, 6, 9, 12, 15 _ _  
    }
}