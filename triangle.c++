// Input the angles of a triangle and check whether the triangle is valid or not.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter the angles:";
    cin>>a>>b>>c;
    if(a+b+c==180)
    {
        cout<< " valid triangle"<<endl;
    }
    else{
        cout << "invalid"<<endl;
    }
    return 0;
}
