#include <stdio.h>

int Multiple_Five(int array[], int n);

int main(){
    int arr[] = {455, 678545, 5678675, 345625, 67894675, 34543464};
    printf("%d \n", Multiple_Five(arr, 6));
    return 0;
}

int Multiple_Five(int array[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(array[i] % 5 == 0){
            count++;
            printf("%d \n", array[i]);
        }
    }
    return count;
}