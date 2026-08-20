#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n");
    } while (n != 0);
    printf("congrats you cracked the puzzle");
    return 0;
}