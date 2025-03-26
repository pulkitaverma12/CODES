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
    vec.push_back(11);
    vec.push_back(12);
    cout<<"after push back= "<<vec.size()<<endl;
    for(int i:vec)
    {
        cout<<i<<endl;
    }
    vec.pop_back();
    cout<<"after pop back= "<<vec.size()<<endl;
    for(int i:vec)
    {
        cout<<i<<endl;
    }
    cout<<"using functions"<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(2)<<endl;  //90 as per the arr starting index is 0
    cout<<vec.empty()<<endl;
    vec.clear();
    cout<<"after clear= "<<vec.size()<<endl;
    return 0;
}
