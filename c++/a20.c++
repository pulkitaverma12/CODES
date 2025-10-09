// Prime Number Check
// Ek number prime hai ya nahi (1 aur khud ke alawa kisi se divide nahi hota)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    bool isprime = true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime = false;
            break;
        }
    }
    if(isprime && n>1)
    cout<<"prime";
    else
    cout<<"not prime";
    return 0;
}