#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr; 
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int)); // malloc takes the number of bytes

    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i<n; i++){
        printf("%d ", ptr[i]);
    }

    free(ptr); // release the memory
    ptr = NULL; // avoid dangling pointer
    return 0;
}