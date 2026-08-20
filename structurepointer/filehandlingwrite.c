#include<stdio.h>

int main(){
    FILE *fptr;
    char str[] = "jaival is a good boy\nhe is intelligent\nhe will be rich\nhis dream is to get an bmw m4 by his own money\nhis dream is to be a cybersecurity expert at amazon,google,microsoft\n";
    fptr = fopen("aaa.txt", "w");
    fprintf(fptr, str);
    fclose(fptr);
    return 0;
}