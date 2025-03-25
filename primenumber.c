//  Write a C program to find all prime numbers between 1 and 
// a user-input integer n using a for loop. For each number, check if it’s prime, 
// print it if it is, and keep a count of how many primes are found. 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int count = 0;
    for(int i=2;i<=n;i++)  // 1 is not a prime number
    {
        if(i==2)  // 2 is the only even prime number
        {
            printf("%d\n",i);
            count ++;
        }
        else
        {
            for(int j=2;j<i;j++)  // checking the prime number
            {
                if(i%j==0)  // if the number is divisible by any number other than 1 and itself
                {
                    break;
                }
                else if(j==i-1)  // if the number is not divisible by any number other than 1 and itself
                {
                    printf("%d\n",i);
                    count++;
                }
            }
        }
    }
}
