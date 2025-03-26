#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    cout<<"initial size= "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(10);
    vec.push_back(90);
    cout<<"after push back= "<<vec.size()<<endl;
    for(int i:vec)
    {
        cout<<i<<endl;
    }
    return 0;
}
