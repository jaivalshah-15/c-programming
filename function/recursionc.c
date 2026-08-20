#include<stdio.h>

int factorial(int n);

int main(){
    printf("The factorial of 5 is %d\n", factorial(5));
    printf("The factorial of 4 is %d\n", factorial(4));
    printf("The factorial of 2 is %d\n", factorial(2));
    return 0;
}

int factorial(int n){
    // n! = n * (n-1)!
    if(n == 0 || n == 1){
        return 1; // Base case
    }
    return n * factorial(n -1);
}

/* 

5! = 5 * 4 * 3 * 2 * 1
6! = 6 * 5 * 4 * 3 * 2 * 1
6! = 6 * 5!

n! = n * (n-1)!


DRY RUN!!
factorial(5)
5 * factorial(4)
5 * 4 * factorial(3)
5 * 4 * 3 * factorial(2)
5 * 4 * 3 * 2 * factorial(1)
5 * 4 * 3 * 2 * 1

*/