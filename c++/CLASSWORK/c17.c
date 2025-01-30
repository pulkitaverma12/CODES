#include<stdio.h>
void main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even %d",n);
    }
    else
    {
        printf("odd %d",n);
    }
}