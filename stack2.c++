#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(90);
    s.push(89);
    s.push(12);
    s.push(11);
    s.push(34);

    stack<int>s2;
    s2.swap(s);

    cout<<"s size: "<<s.size()<<endl;
    cout<<"s2 size: "<<s2.size()<<endl;
    return 0;
}
