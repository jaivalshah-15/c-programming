#include<stdio.h>

int veryComplicatedFunc(int x);

int main(){
    printf("Hello World\n");
    int a = 45;
    int b = 5;
    int c = veryComplicatedFunc(b);
    return 0;
}

int veryComplicatedFunc(int x){
    // It takes 7 hours to calculate this value
    return 7;
}