//  Find the LCM of two Numbers
#include <iostream>
using namespace std;
int main()
{
    int a,b,lcm;
    cout<< " enter the a,b: ";
    cin >> a >> b;
    lcm = (a > b) ? a : b; // Start with the larger number
    while (true)
    {
        if (lcm % a == 0 && lcm % b == 0) // Check if lcm is divisible by both a and b
        {
            cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
            break; 
        }
        lcm++; 
    }
    return 0;
}
