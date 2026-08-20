#include <stdio.h>
#include <stdlib.h>
int main()
{
    int secn=rand() % 100 + 1;
    int guess,k=5;
    printf("you have 5 tries to guess the secret number ALL THE BEST!\n");
    for(int i=0;i<=4;i++)
    {
        printf("Guess the secret number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess==secn)
        {   printf("Congratulations you guess the number correctly\n");
            break;
        }
        else
        printf("incorrect guess, try again you have %d tries left\n",(k-1));
        k--;
    }
    printf("the number was %d :",secn);
    return 0;
}