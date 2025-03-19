#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n = 5;
    
    // Using malloc
    int *arr1 = (int*) malloc(n * sizeof(int));
    
    // Using calloc 
    int *arr2 = (int*) calloc(n, sizeof(int));

    printf("Memory allocated with malloc (garbage values):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);    // Contains garbage values
    }
    
    printf("\nMemory allocated with calloc (initialized to 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);   // All zeros
    }
