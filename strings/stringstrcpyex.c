#include<stdio.h>
#include<string.h>

int main(){ 
    char source[] = "CodeWithHarry";
    char destination[50]; 

    strcpy(destination, source);
    printf("The source string is %s\n", source);
    printf("The destination string is %s\n", destination);
    return 0;
}