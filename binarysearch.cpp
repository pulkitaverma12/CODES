#include<iostream>
using namespace std;

int binary_search(int key, int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        //int mid = (start + end) / 2; 
        int mid = start + (end-start)/2;
        if (key == arr[mid])
            return mid;
        if (arr[mid] > key)
            end = mid - 1;  
        else
            start = mid + 1;  
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 10, 11, 12, 96, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 11;
    int pri = binary_search(key, arr, n);

    if (pri != -1)  
        cout << "Element is found at index " << pri << endl;
    else
        cout << "Element is not found" << endl;

    return 0;
}