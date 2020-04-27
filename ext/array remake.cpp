/*#include <stdio.h>

int main()
{
    int i,j,mx,mn,n;
    printf("Enter array size");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    mx = a[0];
    mn = a[0];


    for(i=1;i<n;i++)
    {

       if(a[i]>mx)
       {
        mx = a[i];
       }

       if(a[i]<mn)
       {
           mn = a[i];
       }

    }
        printf("Maximum is %d\n",mx);
        printf("Minimum is %d\n",mn);
}*/
#include<stdio.h>
int main()
{
    int i,n,max=0,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i] > max){
          max = a[i];}
       if (a[i] < min){
          min = a[i];}
    }
    printf("Max is %d\n", max);
    printf("Min is %d", min);

    return 0;
}
