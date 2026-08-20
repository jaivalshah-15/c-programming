#include<stdio.h>


float average (int a, int b);

int main(){
    printf("The average of two numbers 6 and 7 is %.2f\n", average(6, 7));
    printf("The average of two numbers 16 and 7 is %.2f\n", average(16, 7));
    printf("The average of two numbers 6 and 17 is %.2f\n", average(6, 17));
    printf("The average of two numbers 26 and 7 is %.2f\n", average(26, 7));
    return 0;
}

float average(int a, int b){
    float average;
    average = ((float)a + b)/2;
    return average;
}