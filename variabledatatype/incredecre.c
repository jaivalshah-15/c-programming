#include <stdio.h>/n
int main(){
    int a = 10;
    printf("the value of a is %d\n",a);
    // a = a+1; same as a +=1;
    // a++; post increment operator
    printf("the value of a is %d\n",a++);
    printf("the value of a is %d\n",a);
    a = 10;// ++a; pre increment operator
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",++a);
    printf("the value of a is %d\n",a);
    return 0;

    a = 10;// a--; post decrement operator
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",a--);
    printf("the value of a is %d\n",a);
    a = 10;// --a; pre decrement operator
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",--a);
    printf("the value of a is %d\n",a);
    return 0;
}