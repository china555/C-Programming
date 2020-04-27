#include<stdio.h>

int main ()
{
    int x;
    printf("Plese enter the number");
    while(scanf("%d",&x)!=EOF && x>0 &&x<=30)
    {
        printf("%d |",x);
        for(int y=1;y<=x;y++)
            {
            printf("*");
            }
            printf("\n");
    }

}
