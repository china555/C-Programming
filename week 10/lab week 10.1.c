#include <stdio.h>
int check(int in ,float f , double du)
{
    printf("The integer is %d",in);
    printf("\nThe floating point number is %f",f);
    printf("\nThe double precision number is %lf",du);
}
int main ()
{
    int in;
    float f;
    double du;
    printf("Enter an integer:");
    scanf("%d",&in);
    printf("Enter a floating point number:");
    scanf("%f",&f);
    printf("Enter a double precision number:");
    scanf("%lf",&du);
    check(in,f,du);

}

