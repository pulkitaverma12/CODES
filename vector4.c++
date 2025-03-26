#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(23);
    vec.push_back(89);
    vec.push_back(90);
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(67);
    
    cout<<"push_back size= "<<vec.size()<<endl;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
    cout<<vec[5]<<endl;

    vec.capacity();
    cout<<"capacity= "<<vec.capacity()<<endl;
    return 0;
}
