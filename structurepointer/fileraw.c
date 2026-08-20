#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    /*
    "r" - Open for reading
    "w" - Open for writing
    "a" - Open for appending
    "rb" - Open a file for reading in binary
    "wb" - Open a file for writing in binary
    "ab" - Open a file for appening in binary 
    "r+" - Open for both reading and writing (text)
    "w+" - Open for both reading and writing (text). Truncates or creates. w+ will not create a new file and will clear the existing data
    "a+" - Open for both reading and writing. Appends or creates
    */

    if(ptr == NULL){
        printf("There was an issue opening the file");
        return 1;
    }
    return 0;
}