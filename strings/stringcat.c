#include<stdio.h>
#include<string.h>

int main(){ 
    char first[50] = "CodeWith";
    char second[] = "Harry"; 

    strcat(first, second); 
    printf("The first string is %s\n", first);
    return 0;
}