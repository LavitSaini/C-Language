#include <stdio.h>

void Reverse(int array[], int n);
void Print(int array[], int n);

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Print(array, 9);
    printf("\n");
    Reverse(array, 9);
    Print(array, 9);
    return 0;
}

void Reverse(int array[], int n){
    for(int i=0; i<n/2; i++){
        int first = array[i];
        int second = array[n - i - 1];
        array[i] = second;
        array[n - i -1] = first;
    }
}

void Print(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", array[i]);
    }
}

