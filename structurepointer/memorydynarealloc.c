#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int n = 3;
    int *ptr = (int *) malloc(n * sizeof(int));

    ptr = realloc(ptr, 10*sizeof(int));
    
    return 0;
}