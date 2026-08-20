#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n<0)
        {
            
            break;
        }
        
        // printf("\n");
    } while (n != 0);
    printf("congrats you have cracked the puzzzle by entering zero %d",n);
    
    return 0;
}