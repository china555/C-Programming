#include <stdio.h>
int main()
{
    int r,c,n,sp;
    printf("Input n: ");
    scanf("%d",&n);
    for(r=1;r<=n;r+=2)
        {
            for(sp=1;sp<=r/2;sp++)
        {   printf(" ");
        }
        for(c=r;c<=n;c++)
        {
            printf("*");
        }
            printf("\n");
        }

}
