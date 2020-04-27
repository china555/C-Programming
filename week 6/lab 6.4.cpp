#include <stdio.h>
int main()
{
    int r,c,n,sp;
    printf("Input n: ");
    scanf("%d",&n);
    if(n % 2  != 0){
        for(r=1;r<=n;r+=2)
        {
         for(sp=(r/2)+1;sp<=n/2;sp++)
         {
         printf(" ");
         }
         for(c=0;c<=r-1;c++)
         {
            printf("*");
         }
            printf("\n");
        }
       for(r=2;r<=n;r+=2)
        {
            for(sp=0;sp<r/2;sp++)
        {   printf(" ");
        }
        for(c=r;c<=n-1;c++)
        {
            printf("*");
        }
            printf("\n");
        }
    }else if(n % 2 == 0){
        for(r=1;r<=n;r+=2)
        {
         for(sp=(r/2)+2;sp<=n/2;sp++)
         {
         printf(" ");
         }
         for(c=0;c<=r;c++)
         {
            printf("*");
         }
            printf("\n");
        }
        for(r=2;r<=n;r+=2)
        {
            for(sp=0;sp<r/2;sp++)
        {   printf(" ");
        }
        for(c=r;c<=n-1;c++)
        {
            printf("*");
        }
            printf("\n");
        }
    }

}
