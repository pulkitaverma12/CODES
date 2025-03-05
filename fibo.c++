#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        if (i == 0 )
        {
            cout << t1 << " ";
            continue;
        }
        if (i == 1)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
