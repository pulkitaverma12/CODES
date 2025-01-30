#include <iostream>
using namespace std;
int reclinear(int arr[],int n,int i,int key) 
{
    if(i>=n)
        return -1;
    if(arr[i]==key)
        return i;
    return reclinear(arr, n, i + 1, key); 
}
int main()
{
    int arr[] = {11, 45, 67, 89, 43, 12}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 12; 
    int pri=reclinear(arr,n,0,key);
    if (pri == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << pri << endl;
    return 0;
}