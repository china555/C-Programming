#include <stdio.h>
int main()
{
    char a,b;
    float sum = 0 , avg = 0;
    scanf("%c",&a);
    printf("%d\n",a);
    scanf("\n%c",&b);
    printf("%d",b);
    sum = a + b;
    avg = sum/2;
    printf("\n%.2f",sum);
    printf("\n%.1f",avg);
    return 0;
}
