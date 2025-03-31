// sum of all elements of array
#include <iostream>
using namespace std;

int sumarray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum; 
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    
    if (n <= 0 || n > 100) {
        cout << "Invalid size" << endl;
        return 1; 
    }

    int arr[n]; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int result = sumarray(arr, n); 

    cout << "Sum of elements: " << result << endl; 

    return 0;
}
