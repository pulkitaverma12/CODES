#include<vector>
#include<iostream>
using namespace std;
int main()
{ 
    //erase size change karta hai capacity utni hi rehti
    vector<int> vec={1,2,3,4,5};
    // vec.erase(vec.begin() + 1);
    // vec.erase(vec.begin() + 1,vec.begin() + 3);  

    // insert function
    // vec.insert(vec.begin()+1,100);
    // vec.clear();

    cout<<"vec.begin: "<<*(vec.begin())<<endl;
    cout<<" vec.end: "<<*(vec.end())<<endl;  //gives garbage or any value
    
    
    for(int val :vec)
    {
        cout << val <<" ";
    }
    cout<<endl;
    return 0;
}
