#include <iostream>
#include<vector>
using namespace std;
int main()
{
    // forward iterator
    // vector<int> vec = {1,2,3,4,5,12,11};
    // vector<int>::iterator i;
    // for(i = vec.begin() ; i != vec.end() ; i++)
    // {
    //     cout<< * (i)<<" ";
    // }
    // cout<<endl;

    // backward iterator
    vector<int> vec = {1,2,3,4,5,12,11};
    vector<int>::reverse_iterator i;
    for(i = vec.rbegin() ; i != vec.rend() ; i++)
    {
        cout<< * (i)<<" ";
    }
    cout<<endl;

    return 0;
}
