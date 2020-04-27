#include <stdio.h>

int main()
{
    int n,k,r,c,count,sp = 1;
    printf("Input n: ");
    scanf("%d",&n);
    count=n/2;
    for(c=0;c<=n-c-1;c++)
    {
        for(r=1;r<count+1;r++)
        {
         printf(" ");
        }

        for(k=1;k<=sp;k++)
        {
            printf("*");
        }
        count--;
        sp+=2;
        printf("\n");
    }
}
