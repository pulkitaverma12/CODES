#include <stdio.h>
#include<math.h>
void main()
{
    int n=1234567890;
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
printf("no. of digits=%d",count);
}