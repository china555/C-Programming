#include <stdio.h>
int main()
{
    int x=0,y=0,i,j,check = 0;
    loop:
    printf("Enter the number of rows and colums:");
    scanf("%d %d",&x,&y);
    if (x != y)
        {
            printf("The matrix must be a square matrix.");
            printf("\n\n");
            goto loop;
        }
    int mat[x][y];
    if(x<=5||y<=5)
    {
        for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                    {

                        printf("Enter element%d,%d:",i,j);
                        scanf("%d",&mat[i][j]);

                    }
            }
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    if(mat[i][j] != mat[j][i])
                    {
                        check++;
                    }
                }
            }
            if(check !=0)
            {
                printf("The matrix is not a symmetric.");
            }
            else
            {
                printf("The matrix is a symmetric.");
            }
            printf("\n\n");
            goto loop;
    }
    else
    {
        printf("The maximum number colum and row is not more than 5.");
    }
}
