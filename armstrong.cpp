#include <iostream>
using namespace std;
int main()
{
    int n,temp,sum=0,r;
    cout<< "enter the number: "<<endl;
    cin >> n;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum += r*r*r;
        temp /= 10;
    }
    if(sum ==n)
    {
        cout<< "the number is armstrong "<<n<<endl;
    }
    else
    {
        cout<<"the number is not armstrong "<<n<<endl;
    }
    
    return 0;
}
