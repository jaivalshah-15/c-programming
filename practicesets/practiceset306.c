#include <stdio.h>

int main(){
    int a = 5, b = 2;
    int intResult = a/b;
    float floatResult = (float)a/b;
    printf("Integer division result: %d\n", intResult);
    printf("Floating-point division result: %.2f\n", floatResult);
    return 0;
}