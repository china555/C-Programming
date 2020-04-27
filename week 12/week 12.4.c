#include<stdio.h>
int num[5];
float findMean (int *nptr)
{
    int i;
    float sum =0;
    for(i=0;i<5;i++)
    {
       sum += *(nptr + i);
        //sum += num[i];
    }
    return sum/5.0;

}
int findMin()
{
    int min=99999;
    for(int i=0;i<5;i++)
    {
        if(num[i]< min)
        {
            min = num[i];
        }
    }
    return min;

}
int findmax()
{
    int max=0;
    for(int i=0;i<5;i++)
    {
        if(num[i]> max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int i;

    printf("Enter 5 integers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    findMean(num);
    findMin();
    printf("Mean: %.3f and Min: %d",findMean(num),findMin(num));
    printf("\nThe range is: %d",findmax() - findMin());
}
