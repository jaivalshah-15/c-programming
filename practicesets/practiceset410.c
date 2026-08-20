#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>=1 && num <=10){
        printf("Between 1 and 10\n");
    }
    else if(num>=11 && num <=20){
        printf("Between 11 and 20\n");
    } 
    else{
        printf("Greater than 20\n");
    }
    return 0;
}