#include<stdio.h>

int main(){
    FILE *ptr;
    char str[100];
    ptr = fopen("harry.txt", "r");

    if(ptr == NULL){
        printf("There was an issue opening the file");
        return 1;
    }

    fgets(str, 100, ptr);
    printf("The file content is %s", str);
    fgets(str, 100, ptr);
    printf("The file content is %s", str);
    fgets(str, 100, ptr);
    printf("The file content is %s", str);
    fgets(str, 100, ptr);
    printf("The file content is %s", str);
    fgets(str, 100, ptr);
    printf("The file content is %s", str);
    return 0;
}