#include<stdio.h>

int main(){
    int a = 34;
    int *ptr = &a;

    printf("the value of ptr is %p\n",ptr);
    printf("the value of ptr is %d\n",*ptr);
    ptr++;
    printf("the value of ptr is %d\n",*ptr);
    ptr++;
    // When you add 1 to a pointer, it doesnt move by 1 byte, it rather moves by the size of the data type it points to
    return 0;
}