// reverse an array
#include <iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start =0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
}
void array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
int main()
{
    int arr[]={2,7,9,-2,8};
    int brr[]={6,89,90,45,12,11};
    reverse(arr,5);
    reverse(brr,6);

    array(arr,5);
    array(brr,6);

    return 0;
}
