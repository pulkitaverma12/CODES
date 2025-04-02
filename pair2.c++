#include <iostream>
using namespace std;
int main()
{
    // pair <string,int> p ={ "priyal",12};
    pair<int,pair<char,int>> p ={ 1,{'s',11}};
    // cout<<p.first<<" "<<p.second<<" "<<endl;
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    return 0;
}
