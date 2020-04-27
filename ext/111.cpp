/*Kittikorn Keeratikriengkrai 6188086
  Chayapon  Chantrasagul      6188069
  https://drive.google.com/file/d/1a5ULJlISdmQeTsF-WDofXMDp05xbsxsN/view?ts=5bab0af8
*/
#include <stdio.h>

int main ()
{
  int i,j,n;
  printf("n = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i%2!=0)
                printf("*");
            else printf("@");
        }
        printf("\n");
    }
}
