#include<stdio.h>
void main()
{
    int a[]={1,0,0,1,0,0,1};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not at all");
    }
}  