#include <stdio.h>
int f=1;
int fact(int x)
{
     if(x==0 || x==1)
     {
        return 1;
     }

     return x*fact(x-1);
}

int main()
{
    printf("The factorial of number is %d\n",fact(5));
    return 0;
}