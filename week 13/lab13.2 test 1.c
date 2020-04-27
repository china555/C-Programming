#include<stdio.h>
#include<string.h>
struct Monsters
{
    char name[80];
    int attack;
    int hp;
}monsters[3] = {{"bone",20,50},
                {"snot ",30,100},
                {"plague",50,70}};
int main()
{
    int hp1 =100;
    int i=0,x;
    while(i>=0)
    {
        printf("Enter the monster's name: ");
        scanf("%s",monsters[i].name);
        if(strcmp(monsters[i].name,"bone")==0)
            {
                printf("Enter attack power from 1 to 100: ");
                scanf("%d",&x);
                printf("Monster: %s",monsters[i].name);
                if(x>=monsters[i].hp)
                    {
                        monsters[0].hp =0;
                        printf("\nHp: %d",monsters[i].hp);
                        printf("\nYour Hp: %d",hp1);
                    }
                else if(x<monsters[i].hp)
                    {
                        printf("\nHP: %d",monsters[i].hp - x);
                        monsters[i].hp = monsters[i].hp - x;
                        if(hp1-monsters[i].attack<0)
                        {
                            hp1= 0;
                            printf("\nYour Hp: %d",hp1);
                            printf("\nYour lose!");
                            break;
                        }
                        else
                        {
                            printf("\nYour Hp: %d",hp1-monsters[i].attack);
                            hp1 = hp1-monsters[i].attack;
                        }
                    }
                printf("\n");
            }
            if(strcmp(monsters[i].name,"snot")==0)
                {
                    i=1;
                    printf("Enter attack power from 1 to 100: ");
                    scanf("%d",&x);
                    printf("Monster: %s",monsters[i].name);
                    if(x>=monsters[i].hp)
                        {
                            monsters[1].hp =0;
                            printf("\nHp: %d",monsters[i].hp);
                            printf("\nYour Hp: %d",hp1);
                        }
                    else if(x<monsters[i].hp)
                        {
                            printf("\nHP: %d",monsters[i].hp - x);
                        monsters[i].hp = monsters[i].hp - x;
                        if(hp1-monsters[i].attack<0)
                        {
                            hp1= 0;
                            printf("\nYour Hp: %d",hp1);
                            printf("\nYour lose!");
                            break;
                        }
                        else
                        {
                            printf("\nYour Hp: %d",hp1-monsters[i].attack);
                            hp1 = hp1-monsters[i].attack;
                        }
                        }
                        printf("\n");
                }
                if(strcmp(monsters[i].name,"plague")==0)
                {
                    i=2;
                    printf("Enter attack power from 1 to 100: ");
                    scanf("%d",&x);
                    printf("Monster: %s",monsters[i].name);
                    if(x>=monsters[i].hp)
                        {
                            monsters[2].hp =0;
                            printf("\nHp: %d",monsters[i].hp);
                            printf("\nYour Hp: %d",hp1);
                        }
                    else if(x<monsters[i].hp)
                        {
                            printf("\nHP: %d",monsters[i].hp - x);
                        monsters[i].hp = monsters[i].hp - x;
                        if(hp1-monsters[i].attack<0)
                        {
                            hp1= 0;
                            printf("\nYour Hp: %d",hp1);
                            printf("\nYour lose!");
                            break;
                        }
                        else
                        {
                            printf("\nYour Hp: %d",hp1-monsters[i].attack);
                            hp1 = hp1-monsters[i].attack;
                        }
                        }
                        printf("\n");

                }
                if(monsters[0].hp ==0&&monsters[1].hp ==0&&monsters[2].hp ==0)
                {
                    printf("You won");
                    break;
                }
    }
}
