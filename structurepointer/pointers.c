#include <stdio.h>
int main(){
    int x=10;
    int *p= &x;
    printf("the number x: %d\n",x);
    printf("the adress of x is %p\n",&x);
    printf("the adress of x is %p\n",p);
    printf("the number x is %d",*p);
    return 0;
}