// Write a C program to calculate and print the sum of all even number
//  between 1 and a user-input integer n using a for loop.  
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum +=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
