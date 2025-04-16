//  Sort Array in Ascending Order(bubble sort)
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool bubblesort(vector<int>&vect)
{
    int n = vect.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(vect[j]>vect[j+1])
            {
                swap(vect[j],vect[j+1]);
            }
        }
    }
    return true;
}
int main()
{
    vector<int> arr ={45,90,12,1,5,3,2,11};
    int n;
    n = arr.size();
    bubblesort(arr);
    cout<<"after sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stable_sort(arr.begin() , arr.end());
    return 0;
}
