#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,x,s;
    printf("Enter array size of set n[x]");
    scanf("%d",&x);
    int n[x];

    for(i=0;i<x;i++)
        {
        scanf("%d",&n[i]);
        printf("%d ",n[i]);
        }
        system("cls");
        printf("set n[i] = {");
        for(i=0;i<x;i++)
        {
            if (x-i != 1)
            {
            printf("%d,",n[i]);
            }
            else if(x-i == 1)
            {
                printf("%d}",n[i]);
            }

        }
    printf("\nEnter array size of set k[s]");
    scanf("%d",&s);
    int k[s];
    for(j=0;j<s;j++)
        {
        scanf("%d",&k[j]);
        printf("%d",k[j]);
        }
    for (i=0;i<=x;i++)
        {
        if(n[i] == k[j])
        {
            printf("K is a subset of N %d");
        }
        }





}

