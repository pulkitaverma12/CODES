#include <iostream>
using namespace std;
int main()
{
    int n,sum =0;
    cout << "enter the number: ";
    cin >> n;
    for (size_t i = 2; i <= n; i +=2)
    {
        sum +=1;
    }
    cout << "sum of the even number from 1 to " << n << "is: "<<sum <<endl;
    return 0;
}
