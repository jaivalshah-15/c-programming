#include<stdio.h>
#include<string.h>

int main(){
    char name[] = "Harry";

    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }
    

    return 0;
}