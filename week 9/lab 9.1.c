#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
int a[3][4],i=0,j=0,rand_number;
srand(time(NULL));

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            rand_number = rand() % 10;
            a[i][j] = rand_number;
            printf("%d ",a[i][j]);
        }
    printf("\n");

}
return 0;
}
