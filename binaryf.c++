// binary search
#include <iostream>
#include<algorithm>
using namespace std;
int binary(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid = (start+end)/2;
    while(start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
             end = mid -1;
        }
        mid =(start+end)/2;
    }
    return -1;
}
int main()
{
    int even[6]={45,89,90,23,1,12};  //{1,12,23,45,89,90}
    int odd[5]={12,45,76,80,11};     //{11,12,45,76,80}
    sort(even,even + 6);
    sort(odd,odd + 5 );
    int evenindex=binary(even,6,12);
    cout<<"The 45 is in index: "<<evenindex<<endl;
    int oddindex=binary(odd,5,80);
    cout<<" The 12  is in index: "<<oddindex<<endl;
    return 0;
}
