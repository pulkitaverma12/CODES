#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("neither negative nor postive");  
    }
    else if(n<0)
    {
        printf("negative %d");
    }
    else{
        printf("positive %d");
    }
}