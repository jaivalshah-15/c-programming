#include <stdio.h>

int main() {
    char uname, pass;

    printf("Enter username (single character): ");
    scanf(" %c", &uname); 

    printf("Enter password (single character): ");
    scanf(" %c", &pass);

    if (uname == 'g' && pass == '6') {
        printf("Login Successful\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}
