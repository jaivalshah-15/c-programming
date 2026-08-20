#include <stdio.h>

int main() {
    int math, physics, chemistry;
    printf("Enter marks in Math, Physics, Chemistry: ");
    scanf("%d %d %d", &math, &physics, &chemistry);

    int total = math + physics + chemistry;

    if (math >= 60) {
        if (physics >= 50) {
            if (chemistry >= 40) {
                if (total >= 200) {
                    printf("Eligible for admission\n");
                } else {
                    printf("Total marks less than 200\n");
                }
            } else {
                printf("Chemistry marks too low\n");
            }
        } else {
            printf("Physics marks too low\n");
        }
    } else {
        printf("Math marks too low\n");
    }

    return 0;
}
