#include <stdio.h>

int main() {
    int a = 10, b = 5;
    //Relational Operators
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    // Logical  Operators
    printf("(a < b) && (b < 20): %d\n", (a < b) && (b < 20));
    printf("(a > b) || (b < 20): %d\n", (a > b) || (b < 20));
    printf("!(a == b): %d\n", !(a == b));

    return 0;
}