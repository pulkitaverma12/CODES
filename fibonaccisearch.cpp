#include <iostream>
using namespace std;
class Solution  
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    Solution obj;
    int n = 4;
    cout << "Fibonacci number at position " << n << " is: " << obj.fib(n) << endl;
    return 0;
}
