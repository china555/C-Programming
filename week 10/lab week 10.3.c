#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int HI_LO(int rand_number,int y,int i,int a )
{
    for(i=7;i>=1;i--)
    {
       printf("Enter your guess:");
       scanf("%d",&y);
    if(y<rand_number)
    {
        if (i==1)
        {
            break;
        }
        printf("Wrong number :( Your guess was too low.\n");
        printf("You have %d guesses left. Try again.\n",i-1);
    }
    else if(y>rand_number)
    {
        if(i==1)
        {
            break;
        }
        printf("Wrong number :( Your guess was too high.\n");
        printf("You have %d guesses left. Try again.\n",i-1);
    }
    else if (y==rand_number)
    {
        printf("Enter your guess: %d\n",rand_number);
        printf("Hooray,you have won!\n");
        return y;
        break;
    }
    }
return 0;
}
int main()
{
    int y,i,a;
    srand(time(NULL));
    int rand_number = 1 + rand() % 100;
    printf("Random number: %d\n", rand_number);
    a=HI_LO(rand_number,y,i,a);
    if(a == 0)
    {
        printf("You lose");
    }

}

