#include<stdio.h>

int sum(int a, int b);

int main(){
    int x = 3, y = 65;
    printf("The sum of 3 and 65 is %d", sum(x, y));
    return 0;
}

int sum(int a, int b){
    int result; 
    result = a + b;
    return result;
}