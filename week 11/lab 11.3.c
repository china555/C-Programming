#include <stdio.h>

#define N 4

int gcd(int num1, int num2) {
    int result = 0,min = 0,max= 0;
    if (num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
    if (max % min == 0)
        result = min;
    else
        result = 1;
    printf("Result is %d\n", result);
    //printf("Max is %d, Min is %d",max, min);
    /*if(num1>num2)
    {
        min = num2;
        max = num1;
    }
    else if(num2>num1)
    {
        min = num1;
        max = num2;
    }
    for(int i=max;i>=min;i--)
    {
        if(min % i == 0 && min % max == 0)
        {
            result = i;
            break;
        }
        else
            result = 1;
    }*/
    return result;
}

int main() {
    int num[N];
    int result;

    printf("Enter %d numbers: ", N);
    for (int i=0 ; i<N ; i++) {
        scanf("%d", &num[i]);
    }
    result = gcd(num[0],num[1]);
    result = gcd(result,num[2]);
    result = gcd(result,num[3]);
    printf("GCD of ");
    for (int i=0 ; i<N ; i++) {
        printf("%d ", num[i]);
    }
    printf("is %d\n", result);

    return 0;
}
