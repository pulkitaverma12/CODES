#include<stdio.h>
#define maxsize 20
void main()
{
    int arr[maxsize];
    int i,n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("negative numbers in this array: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d",arr[i]);
        }
        else
        {
            continue;
        }
    }
}
