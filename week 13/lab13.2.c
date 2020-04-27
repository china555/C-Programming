#include<stdio.h>
#include<string.h>
struct Monsters
{
    char name[80];
    int attack;
    int hp;
}monsters[3];
int main()
{
    int mon[10],i,x;
    printf("Enter the monster's name: ");
    while(i>3)
    {
        scanf("%s",mon);
        if(strcmp(mon,"bone")==0)
        {
            i=0;
            monsters[i].attack = 20;
            monsters[i].hp= 50;
            printf("Enter attack power from 1 to 100: ");
            scanf("%d",&x);
            for(i=0;i<=10;i++)
            {
                printf("%s",monsters.name);
            }
        }
        else if(strcmp(mon,"snot")==0)
        {
            i=1;
        }
        else if(strcmp(mon,"plague")==0)
        {
            i=2;
        }

    }

}
