#include<stdio.h>

int main(){
    int marks = 75;
    int attendance = 60;

    if (marks >=50){
        printf("You passed the exam\n");

        if(attendance >= 75){
            printf("You also maintained good attendance\n");
        }
        else{
            printf("But your attendance is below 75%%\n");
        }
    }
    else{
        printf("You failed the exam\n");
    } 
    return 0;
}