#include <stdio.h>
int main()
{
    int a[5],sum=0,i;

    printf("input 5 number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    if(a[i]>=0) /* if(a[0]>=0&&a[1]>=0&&a[2]>=0&&a[3]>=0&&a[4]>=0) */
    {
        sum= a[0]+a[2]+a[4];
        printf("%d",sum);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
