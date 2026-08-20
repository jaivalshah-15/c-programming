#include<stdio.h>

void printArray(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    // arr[0] = 98888; 
}
int main(){
    int arr[7] = {435, 342, 2, 5, 23, 5, 22};
    printf("Passing arrays to functions\n");
    printArray(arr, 7);
    printf("\nThe value of arr[0] at the end is %d ", arr[0]);
    return 0;
}

