# include <stdio.h>

int main()
{ double number;
label1:
 printf("Enter a number:");
 scanf("%lf",&number);
 if(number < 0.0){
 printf("number is negative\n");
 goto label1;}
else
 printf("number is positive\n");
return 0;
}
