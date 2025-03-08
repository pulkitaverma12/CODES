#include <iostream>
using namespace std;
int main()
{
    int amount=0,note100=0,note50=0,note20=0,note10=0;
    cout<<"enter the amount: ";
    cin>>amount;
    switch (4)
    {
    case 1:
        note100 = amount/100;
        amount %=100;
        cout<<"100 rs: "<<note100<<endl;
        break;
    case 2:
        note20 =amount/20;
        amount %=20;
        cout<<"50 rs: "<<note50<<endl;
        break;
    case 3:
        note50 = amount /50;
        amount %=50;
        cout<<"20 rs: "<<note20<<endl;
        break;
    case 4:
        note10 = amount/10;
        amount %=10;
        cout<<"10 rs: "<<note10<<endl;
        break;
    
    default:
        cout<<"inavlid"<<endl;
        break;
    }
    return 0;
}
