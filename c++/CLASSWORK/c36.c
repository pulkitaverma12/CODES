#include<stdio.h>
void main()
{
    int a[]={1,39,76,25,89};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(a[i]);
    }
    printf("%d",sum);
}