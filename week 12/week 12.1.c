#include<stdio.h>
int boneHP = 50,snotHP = 100,plagueHP = 70;
int *current_monsterHP;
int ATK(char mon)
{
    int at = 0,b;
    if(mon == 'b')
    {
        printf("Enter the attack power from 1 to 100:");
        scanf("%d",&at);
        current_monsterHP = &boneHP;

        if(at>=*current_monsterHP)
        {
            printf("Current HP: 0\n");
            printf("Attack power : %d\n",at);
            printf("Remaining HP: 0\n");
            *current_monsterHP =0;
        }
        else
        {
            printf("Current HP: %d\n",*current_monsterHP);
            printf("Attack power : %d\n",at);
            printf("Remaining HP: %d\n",*current_monsterHP = boneHP - at);
        }
    }
    if(mon =='s')
    {
        printf("Enter the attack power from 1 to 100:");
        scanf("%d",&at);
        current_monsterHP = &snotHP;
        if(at>=*current_monsterHP)
        {
            printf("Current HP: 0\n");
            printf("Attack power : %d\n",at);
            printf("Remaining HP: 0\n");
            *current_monsterHP =0;
        }
        else
        {
            printf("Current HP: %d\n",*current_monsterHP);
            printf("Attack power : %d\n",at);
            printf("Remaining HP: %d\n",*current_monsterHP = snotHP - at);
        }
    }
    if(mon =='p')
    {
        printf("Enter the attack power from 1 to 100:");
        scanf("%d",&at);
        current_monsterHP = &plagueHP;
        if(at>=*current_monsterHP)
        {
            printf("Current HP: 0\n");
            printf("Attack power : %d\n",at);
            printf("Remaining HP: 0\n");
            *current_monsterHP =0;
        }
        else
        {
            printf("Current HP: %d\n",*current_monsterHP);
            printf("Attack power : %d\n",at);
            printf("Remaining HP: %d\n",*current_monsterHP = plagueHP - at);
        }
    }
    main();

}


int main()
{
    char x;
        printf("Enter the 1st character of Monster's name:");
        scanf(" %c",&x);
        ATK(x);
}
