//  Find all roots of a quadratic equation
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;
    int d = b*b - 4*a*c; // Discriminant
    if (d > 0)
    {
        float root1 = (-b + sqrt(d)) / (2*a);
        float root2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different: " << root1 << " and " << root2 << endl;
    }
    else if (d == 0)
    {
        float root = -b / (2*a);
        cout << "Roots are real and the same: " << root << endl;
    }
    else
    {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-d) / (2*a);
        cout << "Roots are complex: " << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
