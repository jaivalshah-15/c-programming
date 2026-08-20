#include <stdio.h>

int factorial(int x)
{
    int fact = 1;

    for(int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter number of rows for Pascal triangle: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Print spaces
        for(int k = 0; k < n - i; k++)
        {
            printf(" ");
        }

        // Print numbers
        for(int j = 0; j <= i; j++)
        {
            int icj = factorial(i) / (factorial(j) * factorial(i-j));
            printf("%d ", icj);
        }

        printf("\n");
    }

    return 0;
}