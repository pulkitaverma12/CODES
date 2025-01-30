#include <iostream>
using namespace std;
int recbs(int start, int end, int key, int arr[]) {
    if(start>end){
    return -1;
}
    if (start <= end) {
        int mid = start + (end - start) / 2;
        if (key > arr[mid]) {
            return recbs(mid + 1, end, key, arr);  
        } else if (key < arr[mid]) {
            return recbs(start, mid - 1, key, arr);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 10, 11, 12, 96, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int start = 0;
    int end = n - 1;

    int pri = recbs(start, end, key, arr);  
    if (pri != -1)
        cout << "Element is found at index " << pri << endl;
    else
        cout << "Element is not found" << endl;

    return 0;
}
