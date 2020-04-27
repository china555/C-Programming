#include <stdio.h>

int main()
{
    int quiz,midterm,final,sum;
    scanf("%d%d%d",&quiz,&midterm,&final);

    if (quiz<0||quiz>30||midterm<0||midterm>35||final<0||final>35)
    {
        printf("the score is invalid");
    }
    else
    {
        sum=quiz+midterm+final;
        printf("\nyou have got:",sum);
        if (sum>=90)
        {
            printf("A");
        }
        else if (sum>=80 && sum<90)
        {
            printf("B");
        }
        else if (sum>=70 && sum< 80)
        {
            printf("C");
        }
        else if (sum>=60 && sum< 70)
        {
            printf("D");
        }
            else if (sum>=70 && sum< 80)
        {
            printf("C");
        }

    }
}
