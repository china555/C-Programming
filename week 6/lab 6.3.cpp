#include <stdio.h>

int main()
{
    int n,k,r,c,count,sp = 1;
    printf("Input n: ");
    scanf("%d",&n);
    count=1;
    tmp=n;
    for(c=n;c>0;c=c-2)
    {
        for(r=1;r<count;r++)
        {
         printf(" ");
        }

        for(k=sp;k>=1;k--)
        {
            printf("*");
        }
        count++;
        sp-=2;
        printf("\n");
    }
}

