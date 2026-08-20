#include<stdio.h>

int main(){ 
    int i, j;
    for(i=1; i<=5; i++){
        // for i = 1 print star 1 time and for i=2 print star 2 times, for i print star i times
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}