#include <stdio.h>

int main ()
{
    int money,x,moneyleft,money500,moneyleft2,money100,moneyleft3;
    printf("put you cash");
    scanf("%d",&money);
    x=money/1000;
    moneyleft=money%1000;
    money500=moneyleft/500;
    moneyleft2=moneyleft%500;
    money100=moneyleft2/100;
    moneyleft3=moneyleft2%100;
    if(moneyleft3!=0)
    {
        printf("cannot withdrawn.");
    }
    else
    {


    printf("Summary of banknotes\n");
    printf("%d notes of 1000 bath\n",x);
    printf("%d notes of 500 bath\n",money500);
    printf("%d notes of 100 bath\n",money100);
    }


}
