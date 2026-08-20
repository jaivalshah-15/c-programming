#include<stdio.h>

int main(){
    int x = 10;
    printf("Initial value: %d\n", x);

    x +=5;
    printf("The value of x now is: %d\n", x);

    x-=3;
    printf("The value of x now is: %d\n", x);

    x*=2;
    printf("The value of x now is: %d\n", x);

    x/=4;
    printf("The value of x now is: %d\n", x);

    x%=3;
    printf("The value of x now is: %d\n", x);
    return 0;
}