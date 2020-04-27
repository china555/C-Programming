#include<stdio.h>
#define USD 32.86
#define JPY 0.29
float thbToUSD(float thb)
{
    float d;
    d = thb/USD;
    return d;
}
float thbToJPY(float thb)
{
    return thb/JPY;
}
int main()
{
    float thb,d;
    printf("input money: ");
    scanf("%f",&thb);
    thbToUSD(thb);
    d= thbToUSD(thb);
    printf("%.2f\n",d);
    printf("%.2f",thbToJPY(thb));


}
