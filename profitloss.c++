// find profit and loss
#include <iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout << "enter the cost price and selling price: ";
    cin >> cp>>sp;
    if(sp>cp)
    {
        cout<< "profit:"<<sp-cp<<endl;
    }
    else if(cp>sp)
    {
        cout << "loss: "<<cp-sp<<endl;
    }
    else{
        cout << "no profit no loss"<<endl;
    }
    return 0;
}
