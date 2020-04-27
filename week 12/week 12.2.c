#include <stdio.h>
void sort_nums(int *a,int *b,int *c )
{
    /*if(*a>*b)
    {
        swap(a,b);
    }
    if(*a>*c)
    {
        swap(a,c);
    }*/
    if(*b>*a)
    {
       swap(b,a);
    }
    if(*b>*c)
    {
        swap(b,c);
    }
    if(*c>*a)
    {
        swap(c,a);
    }
    if(*c>*b)
    {
        swap(c,b);
    }
   // printf("%d %d %d",*c,*b,*a);
}
void swap(int *a,int *b)
{
    int temp =0;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int x,y,z;
    printf("Enter 3 integers: ");
    scanf("%d %d %d",&x,&y,&z);
    sort_nums(&x,&y,&z);
    printf("%d %d %d",x,y,z);
}

