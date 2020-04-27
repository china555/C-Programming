#include <stdio.h>
int DATA[8] = {1, 10, 2, 6, 7, 0, 4, 3};
int found_idx = -1;
int i=0;
void search_for(int target);
void min();
int main()
{
    int a;
    int target = 6;
    i=7;
    search_for(target);
    if (found_idx != -1)
        {
    printf("Found the value %d at the index: %d\n", target, found_idx);
        }
    else
        {
    printf("Cannot find the value %d in the data\n", target);
        }
        min();
    return 0;
}
void search_for(int target)
{
    for (int i=0 ; i<7 ; i++)
        {
            if (DATA[i] == target)
                {
                    found_idx = i;
                    break;
                }
        }
}
void min()
{
    int min1 =DATA[0];
    for(i=1;i<8;i++)
    {
            if(min1>DATA[i])
            {
                printf("%d",i);
                min1 = DATA[i];
            }
    }
    printf("min = %d",min1);
}

