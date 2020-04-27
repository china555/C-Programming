#include <stdio.h>
int main()
{
    int r,c,n,sp;
    printf("Input n: ");
    scanf("%d",&n);
    if(n %2 != 0){
        for(r=1;r<=n;r+=2)
        {
            for(sp=r/2;sp<=(n/2)-1;sp++) /*for(sp=1;sp<=r/2;sp++)*/
        {   printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
            printf("\n");
        }
    }
    else if (n % 2 == 0)
    {
        for(r=1;r<=n;r+=2)
        {
            for(sp=r/2;sp<=(n/2)-2;sp++) /*for(sp=1;sp<=r/2;sp++)*/
        {   printf(" ");
        }
        for(c=0;c<=r;c++)
        {
            printf("*");
        }
            printf("\n");
        }
    }

}
