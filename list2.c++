#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l ={1,2,3,4,5,6,7,8,9,10};
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}
