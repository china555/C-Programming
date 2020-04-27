 #include<stdio.h>
struct Person
{
    char Name[81];
    char Phone[11];
} people1,people2;
int main()
{
    int n;
    char sort[10];
    printf("Enter name #1 ");
    scanf("%s",people1.Name);
    //scanf("%s",people1.Name);
    printf("Enter phone #1 ");
    scanf("%s",people1.Phone);
    printf("Enter name #2 ");
    scanf("%s",people2.Name);
    printf("Enter phone #2 ");
    scanf("%s",people2.Phone);
    printf("sort by: ");
    scanf("%s",sort);
    if(strcmp(sort,"name")==0)
    {
        if(strcmp(people1.Name,people2.Name)<0)
            {
                printf("%s %s",people1.Name,people1.Phone);
                printf("\n%s %s",people2.Name,people2.Phone);
            }
        else
            {
                printf("%s %s",people2.Name,people2.Phone);
                printf("\n%s %s",people1.Name,people1.Phone);
            }
    }
    if(strcmp(sort,"phone")==0)
    {
        if(strcmp(people1.Phone,people2.Phone)<0)
        {
            printf("%s %s",people1.Name,people1.Phone);
            printf("\n%s %s",people2.Name,people2.Phone);
        }
        else
            {
                printf("%s %s",people2.Name,people2.Phone);
                printf("\n%s %s",people1.Name,people1.Phone);
            }
    }
    /*else if(strcmp(sort,"phone")==0)
    {
        printf("Sort by: phone\n");
    }*/

}
