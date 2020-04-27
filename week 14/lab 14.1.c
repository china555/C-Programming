#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int id;
    char name[80];
    struct Birthdate
    {
        int day;
        int month;
        int year;
    };
};
int main()
{
    FILE *inFile;
inFile = fopen("student.txt", "r");
if (inFile == NULL) {
printf("Failed to open the file.\n");
exit(1);
}
while (fscanf(inFile, "%d %s %d %d %d", &Student.id, Student.name, &Student.Birthdate.day, &Student.Birthdate.month, &Student.Birthdate.year) != EOF) {
printf("Read %d %s %d %d %d\n", id, name, day, month, year);
}

}
