#include <stdio.h>
struct hod
{
    char name[30];
    int age;
    float salary;
};
struct college
{
    char branch1[500];
    char branch2[500];
    char branch3[500];
    char branch4[500];
    struct hod details;
};
int main()
{
    struct college clge;
    struct hod details;
    struct college *ptr=&clge;
    struct hod *ptr1=&details;
    
    for(int i=0; i<4; i++)
    {
        printf("Name : ");
        scanf("%s", &ptr1[i].name);
        printf("Age : ");
        scanf("%d", &ptr1[i].age);
        printf("Salary : ");
        scanf("%f", &ptr1[i].salary);
    }
        
    for(int i=0; i<4; i++)
    {
        printf("The details of HOD of branch%d :\n", i+1);
        printf("Name : %s\n", ptr1[i].name);
        printf("Age : %d\n", ptr1[i].age);
        printf("Salary : %.2f\n", ptr1[i].salary);
    }
}
