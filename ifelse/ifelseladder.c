#include<stdio.h>

int main(){
    int marks = 82;

    if (marks >=90){
        printf("Grade is A\n");
    } 
    else if (marks >=80){
        printf("Grade is B\n");
    } 
    else if (marks >=70){
        printf("Grade is C\n");
    } 
    else if (marks >=60){
        printf("Grade is D\n");
    } 
    else{
        printf("You failed the exam!\n");
    }
    return 0;
}