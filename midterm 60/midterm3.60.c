#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b<a)
    {
        printf("Pythagorean is invalid! 'a' must lessthan 'b'");
    }
    else if(c<a||c<b)
    {
        printf("Pythagorean is invalid! 'a' and 'b'must less than 'c'");
    }
    else if(c*c != a*a+b*b)
    {
        printf("Pythagorean is invalid!");
    }
    else
    {
        printf("Pythagorean is valid!");
    }
}
