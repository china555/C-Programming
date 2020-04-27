#include <stdio.h>

int main()
{
    int x;

    printf("Press a number");
    scanf("%d",&x);
    printf("%d\n",x);

    if(x<=4 && x>=1)
    {
    switch (x)
    {

    case 1:
        printf("You have ordered: coke");
        break;
    case 2:
        printf("You have ordered: Est Cola");
        break;
    case 3:
        printf("You have ordered: Oishi Green Tea");
        break;
    case 4:
        printf("You have ordered: Sprite");
        break;

    }
    }
    else
    printf("Invalid drink number!");




}
