#include <stdio.h>

int sum(int a,int b);
void greet();

int main(){
    greet();
    return 0;
}


void greet(){
    printf("good morning");
}

int sum(int a,int b){
    int sum;
    sum=a+b;
    return sum;


printf("the sum is %d",sum(4,5));
}

