#include <stdio.h>/n
int main(){
    int a = 10,b =10,c=15;
    printf("The value of a is %d\n", a);
    a +=5;
    printf("The value of a is %d\n", a);
    a /=5;
    printf("The value of a is %d\n", a);
    b %=200;
    printf("The value of b is %d\n", b);
    c -=5;
    printf("The value of c is %d\n", c);
    c *=2;
    printf("The value of c is %d\n", c);
    return 0;
}