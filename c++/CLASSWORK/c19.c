#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("number is divisible by 5 %d",num);
    }
    else if (num%11==0)
    {
        printf("number is divisible by 11 %d",num);
    }
    else{
        printf("number is not divisible %d",num);
    }
  return 0;
}