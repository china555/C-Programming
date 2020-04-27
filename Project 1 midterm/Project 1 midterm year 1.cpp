#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int reserve_table[10];
int main()
{
    int num,table();
    printf("=============================================");
    printf("\nICT Restaurant System");
    printf("\n=============================================");
    printf("\n[1] Book a table");
    printf("\n[2] Order food & drink");
    printf("\n[3] Display and clear a bill");
    printf("\n[0] Exit");
    printf("\n----------------------------------------------");
    printf("\nEnter the choice:");
    scanf("%d",&num);
    if(num==1)
    {
        table();
    }
}

    void table()
{
    int x,table[10] ,s[10] = {2,2,2,2,4,4,4,4,8,8},i=x;
    system("cls");
    printf("[Book a table]");
    printf("\n\n Enter the number of people");
    scanf("%d",&x);
    printf("\n=============================================");
    printf("\nList of tables\t\t\tStatus");
    printf("\n=============================================");
    for(int i=1;i<=10;i++)
    {
        printf("\nTable %d: %d seats",i,s[i-1]);
        if (table[i] == true)
            {
             printf("\t\tOccupied");
            }

        if (s[i-1]<=x)
            {
                printf("\t\tnot enough seat");
            }
        else
            {
                printf("\t\tAvailable");
            }

    }

    printf("\n\nEnter a table number(input 0 to cancel):");
    scanf("%d",&x);



}

