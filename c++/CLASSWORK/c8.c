#include<stdio.h>
int main()
{
int vote_age;
printf("input the age of the candidates: ");
scanf("%d",&vote_age);
if(vote_age<18)
printf("not eligible");
else
printf("eligible");
return 0;
}