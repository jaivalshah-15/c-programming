#include<stdio.h>

int main(){
    int n; 
    int sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        if(i%2 != 0){
            continue;
        }
        sum += i;
    }
    printf("The sum of even numbers between 1 and 20 is %d\n", sum );
    
    return 0;
}