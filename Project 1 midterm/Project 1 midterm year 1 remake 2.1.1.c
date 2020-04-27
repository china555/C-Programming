#include <stdio.h>
#include <stdlib.h>

int a[10] = {0,0,0,0,0,0,0,0,0,0};
int sumarray = 0;
int food[10][100],drink[10][100];
float foodprice[4]={45,45,50,60};
float drinkprice[3]={20,30,10};
int food_order[4],drink_order[3];

int reserve_table[10];
int main()
{   system("cls");
    int num;
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
    if(num==2)
    {
        Order();
    }
}

    int table()
{
    int x,value_table,s[10] = {2,2,2,2,4,4,4,4,8,8},num,label;
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
        if (a[i-1] == 1)
            {
             printf("\t\tOccupied");
            }

        else if (s[i-1]<x)
            {
                printf("\t\tnot enough seat");
            }
        else
            {
                printf("\t\tAvailable");
            }

    }
    label:
    printf("\n\nEnter a table number(input 0 to cancel):");
    scanf("%d",&value_table);
    if(value_table==0)
        {
            main();

        }

    if (a[value_table-1] == 1)
        {
            printf("Please enter the available table.");
            goto label;
        }
    if(value_table>=11)
        {

            printf("Invalid choice!");
            goto label;
        }
    else if (value_table<0)
        {

            printf("Invalid choice!");
            goto label;
        }
    else if (s[value_table-1]< x)
        {
            printf("Not enough seat.");
            goto label;
        }
    else {
        (a[value_table -1 ] = 1);
    }


    if(value_table<=10)
    {
        main();

    }
}

int Order()
{
    int i,tablefail,tabletrue,n1,n,checktable = 1,num_table,count=0,food_choice,drink_choice;
    system("cls");
    printf("  [Order food & drink]");
    printf("\n\nList of occupied tables:");
    for(i=1;i<=10;i++)
        {
            sumarray = sumarray + a[i-1];
        }

    if(sumarray == 0)
        {
            printf("\n None");
            while(checktable==1)
                {
                    printf("\nEnter the table number [1-10] (0 to exit): ");
                    scanf("%d",&tablefail);
                    if(tablefail>0)
                        {
                            printf("No table have been occupied yet");
                        }
                    else if (tablefail == 0 )
                        {
                            checktable = 0;
                                main();
                        }
                }
        }
    else if (sumarray>0)
        {
            for(i=1;i<11;i++)
                {
                    if(a[i-1] == 1)
                        {
                           printf("\nTable %d",i);
                        }

                }
        }
    select_table:
    printf("\n\nEnter the table number [1-10] (0 to exit): ");
    scanf("%d",&tabletrue);
    if(a[tabletrue-1] == 1)
        {
            if(tabletrue < 0 || tabletrue >10)
                {
                    printf("Invalid table number");
                    goto select_table;
                }
            else if (tabletrue == 0)
                {
                    main();
                }
            printf("\n\n=============================================");
            printf("\nOrder food & drink");
            printf("\n=============================================");
            printf("\n\nFood Menu\t\tPrice(Baht)");
            printf("\n---------------------------------------------");
            printf("\n[1] Kao Pad Kra Pao\t\t45.0");
            printf("\n[2] Fried Rice\t\t\t45.0");
            printf("\n[3] Kha Nar Mhoo Krob\t\t50.0");
            printf("\n[4] Tom Yum Koong Nam Khon\t60.0");
            printf("\n---------------------------------------------");

        }
    else if (a[tabletrue-1] == 0)
        {
            printf("Please enter table number from the list.");
            goto select_table;
        }
       do{
            printf("Enter the choice (input 0 to stop): ");
            scanf("%d",&food_choice);

            switch (food_choice){
                case 0:
                    break;
                case 1:
                    food_order[0]++;//kraprao
                    break;
                case 2:
                    food_order[1]++;//friedrice
                    break;
                case 3:
                    food_order[2]++;//khanamookrob
                    break;
                case 4:
                    food_order[3]++;//tomyumkoong
                    break;
                default:
                    printf("Invalid choice!\n");
            }

        }
        while(food_choice!=0);

        printf("\nDrink Menu\t\t\t\tPrice (Baht)\n------------------------------------------------------------\n");
        printf("[1] Coca Cola\t\t\t\t%.1f\n[2] Orange Juice\t\t\t%.1f\n[3] Still Water\t\t\t\t%.1f\n------------------------------------------------------------\n",drinkprice[0],drinkprice[1],drinkprice[2]);

        do{
            printf("Enter the choice (input 0 to stop): ");
            scanf("%d",&drink_choice);

            switch (drink_choice){
                case 0:
                    break;
                case 1:
                    drink_order[0]++;//cocacola
                    break;
                case 2:
                    drink_order[1]++;//orangejuice
                    break;
                case 3:
                    drink_order[2]++;//water
                    break;
                default:
                    printf("Invalid choice!\n");
            }

        }
        while(drink_choice!=0);

        printf("\nYou have order the following:\n");
        if(food_order[0]!=0){
            printf("[F] Kao Pad Kra Pao x%d\n",food_order[0]);
        }
        if(food_order[1]!=0){
            printf("[F] Fried Rice x%d\n",food_order[1]);
        }
        if(food_order[2]!=0){
            printf("[F] Kha Nar Mhoo Krob x%d\n",food_order[2]);
        }
        if(food_order[3]!=0){
            printf("[F] Tom Yum Koong Nam Khon x%d\n",food_order[3]);
        }
        if(drink_order[0]!=0){
            printf("[D] Coca Cola x%d\n",drink_order[0]);
        }
        if(drink_order[1]!=0){
            printf("[D] Orange Juice x%d\n",drink_order[1]);
        }
        if(drink_order[2]!=0){
            printf("[D] Still Water x%d\n",drink_order[2]);
        }
}
