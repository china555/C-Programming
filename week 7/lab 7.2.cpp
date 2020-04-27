#include <stdio.h>
int main()
{
    int a[10],i = 0,x;
    float avg = 0;
    printf("input number");
    while(i < 10)
    {
        scanf("%d",&a[i]);
        if(a[i] >= 0){
            avg = avg + a[i];
            i++;
        }else if(a[i] < 0){
            break;
        }

    }
    avg = avg / i;
    printf("AVG = (");
    for(x = 0;x < i; x++ ){
            if(i - x != 1){
                printf("%d+",a[x]);
            }else if(i - x == 1){
            printf("%d",a[x]);
            }

    }
    printf(")/%d = %.1f",i,avg);

}
