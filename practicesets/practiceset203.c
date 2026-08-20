#include <stdio.h>

int main(){
    int a=3,b=6;
    int temp;
    printf("before swap : a= %d, b= %d\n" , a,b);
    temp = a;
    a=b;
    b=temp;
    printf("after swap : a = %d, b = %d", a,b);
    return 0;
}