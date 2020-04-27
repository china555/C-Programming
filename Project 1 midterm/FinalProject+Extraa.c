#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fromfilefood(int A[4][10]);
int fromfiledrink(int A[3][10]);
int fromfilestatus(int A[10]);
int writefilefood(int A[4][10]);
int writefiledrink(int A[3][10]);
int writefilestatus(int A[10]);

int main(){

    static int status[10];
    static int  foodlist[4][10],drinklist[3][10];
    int i;
    int food_order[4],drink_order[3];
    float foodprice[4]={45,45,50,60},foodtotal[4];
    float drinkprice[3]={20,30,10},drinktotal[3];
    char confirm;
fromfilefood(foodlist);
fromfiledrink(drinklist);
fromfilestatus(status);
    int reset(int x){
        int i;
        for(i=0;i<4;i++){
            foodlist[i][x]=0;
        }
        for(i=0;i<3;i++){
            drinklist[i][x]=0;
        }
        status[x]=0;
    }
    int book(){
        system("CLS");
        int num_ppl,j=1;
        int num_table;
        int table_seat[10]={2,2,2,2,4,4,4,4,8,8};
        printf("[Book a table]\n");
        do{
            printf("\nEnter the number of people: ");
            scanf("%d",&num_ppl);
            fflush(stdin);
            if(num_ppl>8){
                printf("Not enough seat");
            }
            else if (num_ppl<1){
                printf("Invalid");
            }
        }
        while(num_ppl<=0||num_ppl>8);
        for(i=0;i<10;i++){
            if (status[i]==1){
                status[i]=1;
                writefilestatus(status);
            }
            else if(num_ppl>table_seat[i]){
                status[i]=2;
                writefilestatus(status);
            }
            else
                status[i]=0;
                writefilestatus(status);
        }
        printf("\n============================================================\nList of tables\t\t\t\tStatus\n============================================================\n");
        for(i=0;i<10;i++){
            printf("Table %d: %d seats",j,table_seat[i]);
            printf("\t\t\t");
            switch (status[i]){
                case 0:
                    printf("Avaliable");
                    break;
                case 1:
                    printf("Occupied");
                    break;
                case 2:
                    printf("Not enough seat");
                    break;
            }
            j++;
            printf("\n");
        }

        do{
            printf("\nEnter a table number (input 0 to cancel): ");
            scanf("%d",&num_table);
            fflush(stdin);
            if(num_table==0){
                system("CLS");
                main();
            }
            else if(num_table<1||num_table>10){
                printf("Invalid choice!");
            }
            else if(status[num_table-1]==0){
                status[num_table-1]=1;
                writefilestatus(status);
                system("CLS");
                main ();
            }
            else if(status[num_table-1]==1||status[num_table-1]==2){
                printf("Please enter the available table.");
            }

        }
        while (num_table<1||num_table>10||status[num_table-1]!=0);
}
    int order(){

        int num_table,count=0,food_choice,drink_choice;

        int update (int x){
            int i;
            for(i=0;i<4;i++){
                foodlist[i][x]+=food_order[i];
            }
            for(i=0;i<3;i++){
                drinklist[i][x]+=drink_order[i];
            }
        }

    for(i=0;i<4;i++){
        food_order[i]=0;
    }
    for(i=0;i<3;i++){
        drink_order[i]=0;
    }
        system("CLS");
        printf("[Order food & drink]\n\nList of occupied tables: ");
        for(i=0;i<10;i++){
            if (status[i]==1){
                printf("\nTable %d",i+1);
                count++;
            }
        }
        if(count==0)
                printf("\nNo occupied table\n");
        do{
            printf("\n\nEnter the table number [1-10] (0 to exit): ");
            //fflush(stdin);
            scanf("%d",&num_table);
            //fflush(stdin);

            if(num_table==0){
                system("CLS");
                main();
            }
            else if (num_table<0||num_table>10){
                printf("I said 1-10");
                //fflush(stdin);
            }
            else if(status[num_table-1]!=1){
                printf("Please enter table number from the list.");
                //fflush(stdin);
            }

        }
        while(status[num_table-1]!=1);

        printf("\n  For any purchase of 500 Baht or more.\n  Get a chance to win up to 100 Baht discount!\n");

        printf("\n============================================================\nOrder food & drink\n============================================================\n\n");
        printf("Food Menu\t\t\t\tPrice (Baht)\n------------------------------------------------------------\n");
        printf("[1] Kao Pad Kra Pao\t\t\t%.1f\n[2] Fried Rice\t\t\t\t%.1f\n[3] Kha Nar Mhoo Krob\t\t\t%.1f\n[4] Tom Yum Koong Nam Khon\t\t%.1f\n------------------------------------------------------------\n",foodprice[0],foodprice[1],foodprice[2],foodprice[3]);

        do{
            printf("Enter the choice (input 0 to stop): ");
            scanf("%d",&food_choice);
            fflush(stdin);

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
            fflush(stdin);

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
        do{
            printf("Confirm? (y|n): ");
            scanf(" %c",&confirm);
            fflush(stdin);

            if(confirm=='y'){
                update (num_table-1);
                writefilefood(foodlist);
                writefiledrink(drinklist);
                system("CLS");
                main();
            }
            else if(confirm=='n'){
                system("CLS");
                main();
            }
            else
                printf("Invalid\n");
        }
        while(confirm!='y'&&confirm!='n');
    }
    int clearbill(){
        int enter;
        int num_table,count=0;
        float total=0,discount=0;
        srand(time(NULL));
        char member;
        int display(int x){
        int i;

        for(i=0;i<4;i++){
            foodtotal[i]=foodlist[i][x-1]*foodprice[i];
            total+=foodtotal[i];
        }
        for(i=0;i<3;i++){
            drinktotal[i]=drinklist[i][x-1]*drinkprice[i];
            total+=drinktotal[i];
        }

    }
        system("CLS");
        printf("[Display and clear a bill]\n\nList of occupied tables:");
         for(i=0;i<10;i++){
            if (status[i]==1){
                printf("\nTable %d",i+1);
                count++;
            }
        }
        if(count==0)
                printf("\nNone\n");
        do{
            printf("\n\nEnter the table number [1-10] (0 to exit): ");
            scanf("%d",&num_table);
            fflush(stdin);

            if(num_table==0){
                system("CLS");
                main();
            }
            else if (num_table>0&&num_table<=10&&status[num_table-1]!=1){
                printf("\nThere is no one sitting at the table.\nPress Enter to go back to the main menu.\n");
                while(getchar()!='\n');
                getchar();
                system("CLS");
                main();
            }
            else if(num_table<=0||num_table>10){
                printf("\nInvalid table number\nPress Enter to go back to the main menu.\n");
                while(getchar()!='\n');
                getchar();
                system("CLS");
                main();
            }
            else if(foodlist[0][num_table-1]==0&&foodlist[1][num_table-1]==0&&foodlist[2][num_table-1]==0&&foodlist[3][num_table-1]==0&&drinklist[0][num_table-1]==0&&drinklist[1][num_table-1]==0&&drinklist[2][num_table-1]==0){
                printf("\nThere is no any ordered food or drink.\nPress Enter to go back to the main menu.\n");
                while(getchar()!='\n');
                getchar();
                system("CLS");
                main();
            }
        }
        while(status[num_table-1]!=1);

        printf("You have order the following:\n\nFood Menu\t\t\tQty.\tPrice (Baht)\n------------------------------------------------------------\n");
        display(num_table);

        if(foodlist[0][num_table-1]!=0){
            printf("[1] Kao Pad Kra Pao\t\t%d\t%.1f\n",foodlist[0][num_table-1],foodtotal[0]);
        }
        if(foodlist[1][num_table-1]!=0){
            printf("[2] Fried Rice\t\t\t%d\t%.1f\n",foodlist[1][num_table-1],foodtotal[1]);
        }
        if(foodlist[2][num_table-1]!=0){
            printf("[3] Kha Nar Mhoo Krob\t\t%d\t%.1f\n",foodlist[2][num_table-1],foodtotal[2]);
        }
        if(foodlist[3][num_table-1]!=0){
            printf("[4] Tom Yum Koong Nam Khon\t%d\t%.1f\n",foodlist[3][num_table-1],foodtotal[3]);
        }
        if(foodlist[0][num_table-1]==0&&foodlist[1][num_table-1]==0&&foodlist[2][num_table-1]==0&&foodlist[3][num_table-1]==0){
            printf("None\n");
        }

        printf("------------------------------------------------------------\n\nDrink Menu\t\t\tQty.\tPrice (Baht)\n------------------------------------------------------------\n");

        if(drinklist[0][num_table-1]!=0){
            printf("[1] Coca Cola\t\t\t%d\t%.1f\n",drinklist[0][num_table-1],drinktotal[0]);
        }
        if(drinklist[1][num_table-1]!=0){
            printf("[2] Orange Juice\t\t%d\t%.1f\n",drinklist[1][num_table-1],drinktotal[1]);
        }
        if(drinklist[2][num_table-1]!=0){
            printf("[3] Still Water\t\t\t%d\t%.1f\n",drinklist[2][num_table-1],drinktotal[2]);
        }
        if(drinklist[0][num_table-1]==0&&drinklist[1][num_table-1]==0&&drinklist[2][num_table-1]==0){
            printf("None\n");
        }
        printf("------------------------------------------------------------\n\n** Total amount: %.2f\n",total);

        do{
            printf("Do you want to clear the bill? (y|n): ");
            scanf(" %c",&confirm);
            fflush(stdin);

            if(confirm=='y'){
                do{
                    printf("\nDo you have a membership card? (y|n): ");
                    scanf(" %c",&member);
                    fflush(stdin);

                    if(member=='y'){
                        discount=total*0.15;
                        total=total*0.85;
                    }
                    else if(member=='n'){
                        break;
                    }
                    else
                        printf("Invalid\n");
                }
                while(member!='y'&&member!='n');

                if (total>=500){
                    printf("\nYou've got a chance of lucky draw!\n");
                    printf("Press enter to draw.");
                    while(getchar()!='\n');
                    getchar();
                int rand_number = 1 + rand() % 10;
                //printf("%d",rand_number);
                    if(rand_number==1||rand_number==2||rand_number==3){
                        printf("\n  Congratulations!! You've got 100 Baht discount.  \n");
                        total-=100;
                        discount+=100;
                    }
                    else if(rand_number==4||rand_number==5||rand_number==6){
                        printf("\n  Congratulations!! You've got 50 Baht discount.  \n");
                        total-=50;
                        discount+=50;
                    }
                    else
                        printf("\n  Sorry...Better luck next time.  \n");
                }
                printf("\n** Discount: %.2f\n",discount);
                printf("** Total amount (with discount): %.2f\n",total);
                reset(num_table-1);
                writefiledrink(drinklist);
                writefilefood(foodlist);
                writefilestatus(status);
                printf("\nPress X to go back to the main menu.\n");

                while(getchar()!='x');
                getchar();
                break;
            }
            else if(confirm=='n'){
                break;
            }
            else
                printf("Invalid\n");
        }
        while(confirm!='y'&&confirm!='n');
            system("CLS");
            main();
    }
    int target_main;

    printf("============================================================\nICT Restaurant System\n============================================================");
    printf("\n[1] Book a table\n[2] Order food & drink\n[3] Display and clear a bill\n[0] Exit\n------------------------------------------------------------");

   do{
    printf("\nEnter the choice: ");

    scanf("%d",&target_main);
    fflush(stdin);

    if (target_main==0){
        writefilestatus(status);
        exit(0);
    }
    else if(target_main==1){
        book();
    }
    else if(target_main==2){
        order();
    }
    else if(target_main==3){
        clearbill();
    }
    else
        printf("Please try again");

   }
while (target_main!=0||target_main>3);

}
int fromfilefood(int A[4][10]){
FILE *fp;
int i,j;

fp=fopen("food.txt","r+");
if(fp==NULL) exit(1);

 for(i=0;i<4;i++){
        for(j=0;j<10;j++){
                fscanf(fp,"%d",&A[i][j]);
        }
 }
 fclose(fp);
 return 0;
}
int fromfiledrink(int A[3][10]){
FILE *fp;
int i,j;

fp=fopen("drink.txt","r+");
if(fp==NULL) exit(1);

 for(i=0;i<3;i++){
        for(j=0;j<10;j++){
                fscanf(fp,"%d",&A[i][j]);
        }
 }
 fclose(fp);
 return 0;
}
int fromfilestatus(int A[10]){
FILE *fp;
int j;

fp=fopen("status.txt","r+");
if(fp==NULL) exit(1);

    for(j=0;j<10;j++){
            fscanf(fp,"%d ",&A[j]);
        }
 fclose(fp);
 return 0;
}
int writefilefood(int A[4][10]){
FILE *fp;
int i,j;

fp=fopen("food.txt","w");
if(fp==NULL) exit(1);

 for(i=0;i<4;i++){
        for(j=0;j<10;j++){
                fprintf(fp,"%d ",A[i][j]);
        }
 }
 fclose(fp);
 return 0;
}
int writefiledrink(int A[3][10]){
FILE *fp;
int i,j;

fp=fopen("drink.txt","w");
if(fp==NULL) exit(1);

 for(i=0;i<3;i++){
        for(j=0;j<10;j++){
                fprintf(fp,"%d ",A[i][j]);
        }
 }
 fclose(fp);
 return 0;
}
int writefilestatus(int A[10]){
FILE *fp;
int j;

fp=fopen("status.txt","w");
if(fp==NULL) exit(1);

    for(j=0;j<10;j++){
            fprintf(fp,"%d ",A[j]);
        }
 fclose(fp);
 return 0;
}




