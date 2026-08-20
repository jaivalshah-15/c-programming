#include<stdio.h>

int main(){
    int a, b, choice;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operationn (1-Add, 2-Sub, 3-Mul, 4-Div)\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Result = %d\n", a+b);
            break;
        case 2:
            printf("Result = %d\n", a-b);
            break;
        case 3:
            printf("Result = %d\n", a*b);
            break;
        case 4:
            printf("Result = %d\n", a/b);
            break;
        default:
            printf("Invalid Choice\n"); 
    }

    return 0;
}