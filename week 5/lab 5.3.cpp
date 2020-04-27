#include <stdio.h>

int main ()
{
    float i;
    for(i=0;i<=4;i=i+0.5)
        printf("\nDistance for %.2f hours is %.2f",i,i*60);
    return 0;
}
