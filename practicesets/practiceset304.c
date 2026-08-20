#include<stdio.h>

int main(){
    int x = 5;
    printf("x = %d\n", x);
    printf("Pre-increment: %d\n", ++x);
    printf("After pre-increment: %d\n", x);
    printf("Post-increment: %d\n", x++);
    printf("After post-increment: %d\n", x);
    return 0;
}