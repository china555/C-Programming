#include <stdio.h>
int main ()
{
    int a[5] ={5,4,3,2,1},x,b[5],countA = 4,countB=0;
    for(x=0;x<5;x++)
    {
    b[x]=a[x];
    }
    for(x=4;x>=0;x--)
    {
        printf("%d",b[x]);
    }



/*
    while(countA >= 0){
        b[countB]=a[countA];
        printf("%d",a[countA]);
        printf("%d ",b[countB]);
        countA--;
        countB++;
    }
*/
}

