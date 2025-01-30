#include<stdio.h>
void main()
{
    int a[]={12,34,76,90,78,36};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
        //printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
}