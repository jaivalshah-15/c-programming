#include<stdio.h>

int main(){
    int sum = 0, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i; // Add i to sum
    }
    // printf("The value of sum of first %d natural numbers is %d", n, sum);
    printf("Sum = %d", sum);
    
    return 0;
}