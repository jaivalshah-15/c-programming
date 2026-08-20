#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if its an alphabet
    if((ch>='A' && ch <='Z') ||(ch>='a' && ch <='z')){
        // Check if its a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("Vowel\n");
            } else{
                printf("Consonant\n");
            }
    }
    // Check if its a digit
    else if(ch >= '0' && ch <= '9'){
        printf("Digit\n");
    }
    // Otherwise its a special character
    else{
        printf("Special Character\n");
    }

    return 0;
}