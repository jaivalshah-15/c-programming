#include<stdio.h>


void greet(){
    printf("Hello, Good Morning\n");
    printf("Thank you!\n");
}

int main(){
    int a = 8, b = 19;
    float average;
    average = (a + (float)b)/2;
    printf("The average is %f \n", average);

    int a1 = 18, b1 = 19;
    average = (a1 + (float)b1)/2;
    printf("The average is %f \n", average);

    int a2 = 18, b2 = 59;
    average = (a2 + (float)b2)/2;
    printf("The average is %f \n", average);


    greet(); // This executes or invokes the greet function 
    greet(); // This executes or invokes the greet function 
    greet(); // This executes or invokes the greet function 
    greet(); // This executes or invokes the greet function 
    return 0;
}