#include <stdio.h>

int main()
{

float n;
char x;
printf("input number : ");
scanf("%f %c",&n,&x);
if ( x == 'i')
    printf(" %.2f inch = %.2f cm",n,n*2.54);
else if ( x == 'c')
    printf(" %.2f cm = %.2f inch",n,n/2.54);
    return 0;
}
