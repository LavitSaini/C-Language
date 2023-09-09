#include <stdio.h>

void Reverse(int array[], int n);
void Print_Array(int array[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    for(int i=0; i<=4; i++){
        printf("%d\t", arr[i]);
    }  
    printf("\n"); 
    Reverse(arr, 5);
    Print_Array(arr, 5);
    return 0;
}

void Reverse(int array[], int n){
    for (int i = 0; i < n/2; i++)
    {
       int First_Value = array[i];
       int Second_Value = array[n - i -1];
       array[i] = Second_Value;
       array[n - i -1] = First_Value;
    }  
}

void Print_Array(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", array[i]);
    }
}