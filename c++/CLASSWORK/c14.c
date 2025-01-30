#include<stdio.h>
int fact(int);
void main()
{
int n,f;
printf("Enter a number to calculate its factorial\n");
scanf("%d",&n);
f=fact(n);
printf("factorial of the num(%d)=%d\n",n,f);
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}