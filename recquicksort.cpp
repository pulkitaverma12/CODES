#include <iostream>
using namespace std;

int partition(int start, int end, int arr[]) {
    int i = start - 1; 
    int pivot = arr[end]; 

    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {  
            //if(arr[j]>=pivot)  for decending order
            i++;                  
            //arr={12,34,56,89,11,1} 
            //piv=1 , j=12...34...56...89...11 , i=arr[-1]...arr=[0]...=arr[1]...arr[2]
            swap(arr[i], arr[j]); //swapping of smaller value then pivot with j 
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1; 
}

void quicksort(int start, int end, int arr[]) {
    if (start < end) { 
        int pivi = partition(start, end, arr);
        quicksort(start, pivi - 1, arr);   //rightside
        quicksort(pivi + 1, end, arr);     //leftside
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 12, 11, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quicksort(0, n - 1, arr);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
