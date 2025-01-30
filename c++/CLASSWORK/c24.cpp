#include<iostream>
using namespace std;
int main()
{
    int num,on,remainder,result=0;              //on=originalnumber
    cout<<"enter a four-digit integer: ";      //370,153,407,1634
    cin>>num;
    on=num;
    while(on!=0)
    {
        remainder =on%10;
        result+= remainder*remainder*remainder*remainder;
        on/=10;
    }
    if(result==num)
    {
        cout<<num<<" is an armstrong number.";
    }
    else
    {
        cout<<num<<" is not an armstrong number.";
    }
}