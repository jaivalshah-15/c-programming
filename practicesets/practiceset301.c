#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nRemainder = %d\n", a+b, a-b, a*b, a/b, a%b);
    return 0;
}