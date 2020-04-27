#include <stdio.h>
int main ()
{
    int n,d,a[10],i,sum = 0;
    printf("Input money 10 year");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];

    }

    printf("\nTotal = %d",sum);
    printf("\nPlese enter interest:");
    scanf("%d",&n);
    d = (sum * n)/100;
    printf("%d",d);
    printf("\n%d",sum+d);


}
