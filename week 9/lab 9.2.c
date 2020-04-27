#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
int a[3][4],i=0,j=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7 = 0;
srand(time(NULL));

    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            {
            int rand_number = rand() % 10;
            a[i][j] = rand_number;
            printf("%d ",a[i][j]);
            if(i==0)
                {
                    sum1 = sum1 + a[0][j];
                }
            if(i==1)
                {
                    sum2 = sum2 + a[1][j];
                }
            if(i==2)
                {
                    sum3 = sum3 + a[2][j];
                }
            if(j==0)
                {
                    sum4 = sum4 + a[i][0];
                }
            if(j==1)
                {
                    sum5 = sum5 + a[i][1];
                }
            if(j==2)
                {
                    sum6 = sum6 + a[i][2];
                }
            if(j==3)
                {
                    sum7 = sum7 + a[i][3];
                }
            }

            printf("\n");
        }
printf("sum of rows:%d %d %d",sum1,sum2,sum3);
printf("\nSum of columns:%d %d %d %d",sum4,sum5,sum6,sum7);
return 0;
}

