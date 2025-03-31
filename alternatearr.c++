// alternate swapping
#include <iostream>
using namespace std;
void alternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    int even[6]={5,7,90,34,45,12};
    int odd[5]={34,23,11,78,2};
    
    array(even,6);
    array(odd,5);

    alternate(even,6);
    alternate(odd,5);
    return 0;
}
