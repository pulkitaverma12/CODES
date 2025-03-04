#include <iostream>
using namespace std;

int main() {
    int size = 6; 

    // Upper part of the heart
    for (int i = size / 2; i <= size; i += 2) {
        
        for (int j = 1; j < size - i; j += 2) {
            cout << " ";
        }

        // Print left part of the heart
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces between two parts of the heart
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }

        // Print right part of the heart
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the heart (triangle)
    for (int i = size; i >= 0; i--) {
        // Print spaces before triangle
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }

        // Print the bottom part of the heart
        for (int j = 1; j <= (2 * i) - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
