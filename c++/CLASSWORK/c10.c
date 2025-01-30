#include<stdio.h>
void main()
{
char Pname[20];
char Sname[20];
printf("Enter the name of the person: ");
scanf("%s %s",&Pname,&Sname);
printf("Abbreviated name: ");
printf("%c %c\n",Pname[0],Sname[0]);
}