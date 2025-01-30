#include<stdio.h>
void main()
{
    int a[5]={4,8,9,80,24},n=5;
    int b[n],i;
    for(i=0;i<=n;i++)
    {
        b[i]=a[i];
    }
    printf("the first  array is: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("the second array is: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",b[i]);
    }
}