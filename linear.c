#include <stdio.h>

// Function to perform linear search
void linear_search(int a[], int n, int key) {
    int c = 0;  

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element found at position: %d\n", i + 1);
            c = 1;  
            return;     
        }
    }
    if (c == 0)
    {
        printf("Element not found\n");
    }
}
int main()
{
    int arr[] = {12, 45, 67, 89, 43, 12}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 96; 
    linear_search(arr, n, key);
    return 0;
}

    
