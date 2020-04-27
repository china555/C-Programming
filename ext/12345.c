#include <stdio.h>
void main()
{
    int r,x,c;
    printf("Enter the number");
    scanf("%d",&x);
    for(r=1;r<=x;r++)
        {
            for(c=1;c<=r;c++)
            {
             printf("%d",r);
            }
            printf("\n");
        }
}
