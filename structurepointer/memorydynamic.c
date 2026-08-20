#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("How many students\n");
    scanf("%d", &n);

    // int arr[n]; // Not allowed in C
    int *ptr = (int*) malloc(n*sizeof(int));

    return 0;
}