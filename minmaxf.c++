#include <iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int num)
{
    int max=INT_MIN;
    for(int i=0;i<num;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int num)
{
    int min=INT_MAX;
    for(int i=0;i<num;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout<<"enter the size:";
    cin>>size;
    cout<<"enter the elements: ";
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout << "Maximum value: " << getmax(num, size) << endl;
    cout << "Minimum value: " << getmin(num, size) << endl;
    return 0;
}
