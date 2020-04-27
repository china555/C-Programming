#include<stdio.h>
#define USD 32.86
#define JPY 0.29
float thbToUSD(float thb)
{
    return thb/USD;
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
    printf("%.2f\n",thbToUSD(thb));
    printf("%.2f",thbToJPY(thb));


}
