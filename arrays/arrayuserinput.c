#include<stdio.h>

int main(){
    int numbers[5];

    printf("Take array inputs from the user\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Print array elments on the screen\n");
    for (int i = 0; i < 5; i++)
    {
         printf("%d\n", numbers[i]);
    }
    
    return 0;
}