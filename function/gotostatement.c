#include <stdio.h>

int main() {
    int number = 1;

    start:
        printf("%d ", number);
        number++;

        if (number <= 5) {
            goto start;
        }

    return 0;
}

