#include<stdio.h>
#include<stdlib.h>

int func1(int x, int y);
int main(){ 
    int a = 34;
    float b = 3.2;
    int arr[5];
    printf("Hello World");
    func1(3, 5);
    // int arr[56]; // Cannot be done directly like this if arr is already defined

    /* There are two types of memory allocations
    - Static Memory Allocation - We use stack for this
    - Dynamic Memory Allocation - We use heap for this
    */
    return 0;
}

int func1(int x, int y){
    return x-y;
}
//call stack of a function -once a fuunc is executed all the variables involved will be destroyed and the memory allocated to them will not be reserved