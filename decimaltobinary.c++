#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long ans = 0;   
    int i = 1;         

    while (n != 0) {
        int bit = n & 1;
        ans = (bit * i) + ans; 
        n = n >> 1;
        i *= 10;  // Move to the next place value in binary
    }

    cout << "Answer is: " << ans << endl;
    return 0;
}
