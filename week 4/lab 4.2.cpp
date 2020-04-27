#include <stdio.h>

int main()
{
int x,y,z,max=0;
printf("Press 3 number");
scanf("%d %d %d",&x,&y,&z);
if(x>y && x>z)
    max =1;
if(y>x && y>z)
    max =2;
if(z>x && z>y)
    max =3;
switch (max)
{
case 1:
    printf("Max number is %d",x);
    ;break;
case 2:
    printf("Max number is %d",y);
    ;break;
case 3:
    printf("Max number is %d",z);
    ;break;

}

}
