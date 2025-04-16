//  Write a C++ program to find the second largest element in an array.
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // for INT_MIN
using namespace std;
bool secondlargest(vector<int>&vect)
{
    int n= vect.size();
    if(n<2)
    {
        cout<<"array is too small"<<endl;
        return true;
    }
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(vect[i]>first)
        {
            second = first;
            first = vect[i];
        }
        else if(vect[i]>second && vect[i]!=first)
        {
            second = vect[i];
        }
        else{
            cout<<"no second largest element"<<endl;
            return true;
        }
    }
    cout<<"second largest element is: "<<second<<endl;
    return true;
}
int main()
{
    vector<int> arr={45,90,12,1,7,11};
    int n=arr.size();
    secondlargest(arr);
    stable_sort(arr.begin(),arr.end());
    cout<<"after sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"second largest element is: "<<arr[n-5]<<endl;
    return 0;
}
