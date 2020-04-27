#include <stdio.h>
#include <stdlib.h>

int a[10][10] = {{0},
                 {0},
                 {0},
                 {0},
                 {0},
                 {0},
                 {0},
                 {0},
                 {0},
                 {0}};
int reserve_table[10];
int main()
{   system("cls");
    int num=0;
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

    void table()
{
    int people,n,s[10] = {2,2,2,2,4,4,4,4,8,8},num,label;
    system("cls");
    printf("[Book a table]");
    printf("\n\n Enter the number of people");
    scanf("%d",&people);
    printf("\n=============================================");
    printf("\nList of tables\t\t\tStatus");
    printf("\n=============================================");
    for(int i=1;i<=10;i++)
    {
        printf("\nTable %d: %d seats",i,s[i-1]);
        if (a[0][i-1] == 1)
            {
                printf("\t\tOccupied");
            }

        else if (s[i-1]<people)
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
    scanf("%d",&n);
    if(n==0)
        {
            main();

        }

    if (a[0][n-1] == 1)
        {
            printf("Please enter the available table.");
            goto label;
        }
    if(n>=11)
        {

            printf("Invalid choice!");
            goto label;
        }
    else if (n<0)
        {

            printf("Invalid choice!");
            goto label;
        }
    else if (s[n-1]< people)
        {
            printf("Not enough seat.");
            goto label;
        }
    else
        {
            (a[0][n -1 ] = 1);
        }


    if(n<=10)
        {
            main();

        }
}

void Order()
{
    int i=0,x=0,n1=0,n=0,none,j=0,sumbug=0;
    system("cls");
    printf("  [Order food & drink]");
    printf("\n\nList of occupied tables:");
    for(j=1;j<=10;j++)
        {
            sumbug = sumbug + a[0][j];
        }
    /*if(sumbug == 0)
        {
            printf("\nnone");
            int check = 1;
            while(check==1)
                {
                    printf("\nEnter the table number [1-10] (0 to exit): ");
                    scanf("%d",&none);
                    if(none>0){
                            printf("No table have been occupied yet");
                    }else if (none == 0 ){
                        check = 0;
                            main();
                    }
                }
        }
    else if(sumbug >0)
        {
            for(i=1;i<=10;i++)
            {
                if(a[0][i-1] == 1)
                    {
                        printf("\nTable %d",i);
                    }
            }
        }*/


    printf("\n\nEnter the table number [1-10] (0 to exit): ");
    scanf("%d",&x);
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
 /*   b:
    printf("\nEnter the choice (input 0 to stop): ");
    scanf("%d",&n);
    switch (n)
    case 1 : if (n == 1)
                {
                    n1++;
                    goto b;
                    printf("%d",n1);
                }
    if (x==0)
        {
            main();
        }*/
}
