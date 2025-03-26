#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    cout<<"initial size= "<<vec.size()<<endl;
    vec.push_back(25);
    cout<<"after push back= "<<vec.size()<<endl;
    return 0;
}
