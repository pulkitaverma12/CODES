// Write a C program to print the multiplication table (up to 10) for
//  a user-input number using a for loop.  
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
