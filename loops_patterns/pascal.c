#include <stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}


int main()
{ 
    for(int i=0;i<4;i++)
    {
        for(int k = 0; k < 4 - i; k++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            int icj=factorial(i)/factorial(j)*factorial(i-j);
            printf("%d  ",icj);

        }
        printf("\n");
    }
    return 0;
}
