#include <stdio.h>
int find_abs(double z)
{
    if(z<0)return -z;
    return z;
}
int main()
{
    double x,y;
    printf("Enter a number:");
    scanf("%lf",&x);
    y= find_abs(x);
    printf("The absolute value of %.0lf is %.0lf",x,y);
}

