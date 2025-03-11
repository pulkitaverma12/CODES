#include<stdio.h>
typedef struct student
{
    int id;
    char name[50];
    float marks;
}stu;

int main()
{
    stu s1,s2;
    s1.id=89;
    s2.id=90;
    printf("%d\n",s1.id);
    printf("%d",s2.id);
}
