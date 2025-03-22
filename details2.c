#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct person
{
    char name[30];
    struct date *birthdate;
};
int main()
{
    struct date date ={50,3,1995};
    struct person person;
    person.birthdate =&date;
    strcpy(person.name,"priyal");
    printf("person details\n");
    printf("name: %s\n",person.name);
    printf("birthdate: %d/%d/%d\n",person.birthdate->day,person.birthdate->month,person.birthdate->year);
    return 0; 
}
