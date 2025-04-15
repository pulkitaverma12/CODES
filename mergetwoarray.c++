#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr1 = {4,5,6};
    vector<int> arr2 = {7,12,4,2,10};
    vector<int> merged;

    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        merged.push_back(arr1[i++]);
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j++]);
    }

    cout << "Merged Sorted Vector: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;
    stable_sort(arr1.begin() , arr1.end());
    stable_sort(arr2.begin() , arr2.end());
    stable_sort(merged.begin() , merged.end());

    cout << "Sorted array: ";
    for (int num : arr1) cout << num << " ";
    cout << endl;
    cout << "Sorted array: ";
    for (int num : arr2) cout << num << " ";
    cout << endl;
    cout << "Sorted array: ";
    for (int num : merged) cout << num << " ";
    cout << endl;

    return 0;
}
