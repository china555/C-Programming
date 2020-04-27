  #include <stdio.h>

int main()
{
    int r,c,n;
    printf("Enter a number of row: ");
    scanf("%d",&n);

    for(c=n;c>0;c--)
    {
        for(r=c;r>0;r--)
            printf("%d",r);
        printf("\n");

    }
}
