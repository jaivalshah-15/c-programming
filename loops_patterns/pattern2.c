#include <stdio.h>
int main()
{   
    int j;
    for(int i=1;i<=5;i++)
    {
         // spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // stars
        for (j = 1; j <= i; j++) {
            printf("%d",i);
        }

        printf("\n");
    }

    return 0;
}