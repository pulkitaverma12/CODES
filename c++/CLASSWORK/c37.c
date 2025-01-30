#include<stdio.h>
int arr_sum(int n,int arr[])
{
    int sum=0;
    if(n<=0)
    {
        return sum;
    }
    else
    {
        sum =sum+arr[n];
    }
    arr_sum(arr,n-1);
}
void main()
{
    int arr[]={1,34,78,90,35};
    int sum;
    sum=arr_sum(arr,4);
    printf("\nsum is: %d",sum);
}
