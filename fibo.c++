#include <iostream>
using namespace std;
int main()
{
    int n=12;
    // cout<<"enter the number for fibo: "<<endl;
    // cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++)
    {
        int nextnumber = a+b;
        cout<<nextnumber <<" ";
        a=b;
        b=nextnumber;
    }
    return 0;
}
