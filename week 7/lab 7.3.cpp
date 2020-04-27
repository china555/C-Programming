#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],x,z,i;

    for(x=0;x<5;x++)
    {
        scanf("%d",&a[x]);
    }
/*printf("%d %d %d %d %d",a[4],a[2],a[1],a[3],a[0]);*/
    system("cls");
    for(i=0;i<5;i++){
    printf("%d ",a[i]);
    }
    printf("\n\n");
    z = a[0];
    a[0] = a[4];
    a[4] = z;

    z = a[1];
    a[1] = a[2];
    a[2] = z;

    for(i=0;i<5;i++){
    printf("%d  ",a[i]);
    }


}

