#include <stdio.h>
int main()
{
    int a[20],i=0,max=0,min;
    loop:
    if(i<20)
    {
        scanf("%d",&a[i]);
        i++;
        goto loop;
    }
    max = a[0];
    min = a[0];
    i=0;
    a:
    if(i<20)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
            i++;
            goto a;
        }

        printf("%d ",max);
        printf("%d",min);

}
