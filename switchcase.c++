#include <iostream>
using namespace std;
int main()
{
    int num=2;
    char ch='1';
    cout<<endl;
    // switch(num)
    switch (ch)
    {
    case 1:
        cout <<"first"<<endl;
        break;

    case 2:
        cout<<"second"<<endl;
        break;
    
    case '1':
        cout<<"character"<<endl;
        break;
    
    default: 
        cout<<"this is default"<<endl;
        break;
    }
    return 0;
}
