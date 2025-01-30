#include<stdio.h>
#include<math.h>
void main()
{
int num,a,b,c;
printf("\n Enter the number\n");
scanf("%d",&num);
a=pow(num,1);
b=pow(num,2);
c=pow(num,3);
printf("\n output is\n");
printf("%d,%d,%d\n",a,b,c);
return 0;
}