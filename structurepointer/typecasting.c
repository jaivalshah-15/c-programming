#include <stdio.h>/n
int main(){
    int a =9 , b =2;
    printf("The value of a/b is %f\n" , (float)a/b);
    int x=5;
    float y = 2.4;
    float z = x+y;
    printf("the value of z is %f\n",z);//implicit typecasting or automatic typecasting or implicit conversion
    printf("the value of y as integer is %d\n", (int)y);//Explicit typecasting

    return 0;
}