#include<stdio.h>
#include<math.h>
    double euc_dist(double,double,double,double);
    int main()
{
    double x1,x2,y1,y2,d;
    printf("Please enter a value for x1: ");
    scanf("%lf",&x1);
    printf("Please enter a value for y1: ");
    scanf("%lf",&y1);
    printf("Please enter a value for x2: ");
    scanf("%lf",&x2);
    printf("Please enter a value for y2: ");
    scanf("%lf",&y2);
    d=euc_dist(x1,y1,x2,y2);
    printf("The distance between the points is: %lf",d);
}
    double euc_dist(double x1,double y1,double x2,double y2)
{
    double d =0;
    d= sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    return d;

}
