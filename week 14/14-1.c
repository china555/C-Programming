#include <stdio.h>
#include <stdlib.h>
struct Birthday
    {
        int day;
        int month;
        int year;
    };
    struct Student
    {
        int id;
        char name[80];
        struct Birthday Birth;
    } person;
int calculateAge(int temp)
{
    int age = 0;
    age = 2018 - temp;
    return age;
}

int main()
{
    FILE *inFile;
    inFile = fopen("student.txt", "r");
    FILE *outFile, *outFile2;
    outFile = fopen("student_age.txt", "w");
    outFile2 = fopen("student_age2.txt", "w");
    if (inFile == NULL)
    {
        printf("Fail to open the file.\n");
        exit(1);
    }
    while (fscanf(inFile, "%d %s %d %d %d", &person.id, person.name, &person.Birth.day, &person.Birth.month, &person.Birth.year) != EOF)
    {
        printf("READ : %d %s %d %d %d", person.id, person.name, person.Birth.day, person.Birth.month, person.Birth.year);
        fprintf(outFile, "Student id : %d\n", person.id);
        fprintf(outFile, "Name : %s\n", person.name);
        fprintf(outFile, "Birthdate : %d/%d/%d\n", person.Birth.day, person.Birth.month, person.Birth.year);
        fprintf(outFile, "Age : %d\n", calculateAge(person.Birth.year));
    }
    printf("\nSaved to : student_age.txt");
    return 0;
}
