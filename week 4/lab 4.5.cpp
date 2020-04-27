#include <stdio.h>

int main()
{
    float n1,n2;
    char x;
    printf("Select an operator either (+,-,*,/)");
    scanf("%c",&x);
    printf("Press 2 number");
    scanf("%f %f",&n1,&n2);
    switch(x)
    {
    case '+': printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
    ;break;
    case '-': printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
    ;break;
    case '*': printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
    ;break;
    case '/': printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
    ;break;
    }

}
