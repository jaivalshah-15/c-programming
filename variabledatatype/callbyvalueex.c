#include<stdio.h>

int sum(int a, int b);

int main(){
    int x = 3, y = 65;
    sum(x, y);
    printf("After calling sum, x = %d and y = %d\n", x, y);
    return 0;
}

int sum(int a, int b){
    a = 100;
    b = 200;
    printf("Inside sum, a = %d and b = %d\n", a, b);
    return a + b;
}
