#include <iostream>
using namespace std;
int bits(int num)
{
    int count=0;
    while(num>0)
    {
        count +=(num&1);
        num >>= 1;

    }
    return count;
}
int total(int a,int b)
{
    return bits(a) + bits(b);
}
int main()
{
    int a,b;
    cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    cout<<"total setbits: "<<total(a,b)<<endl;  //setbits:3(number of 1's in the 2 and 3) a=2(0010) b=3(0011)  
    return 0;
}
