#include<stdio.h>

int sum(int* a, int* b);

int main(){
    int x = 3, y = 65;
    printf("We are passing %d and %d to the sum function\n", &x, &y);
    printf("The sum of 3 and 65 is %d\n", sum(&x, &y));
    printf("After calling sum, x = %d and y = %d\n", x, y);
    return 0;
}

int sum(int* a, int* b){
    int result; 
    result = *a + *b;
    *a = 556;
    return result;
}