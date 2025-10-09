// square of mid digit of a number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int count=0;
    int temp = n,i=0;
    while(temp>0)
    {
        count++;
        temp /= 10;
    }
    while(count<n && i != count/2)
    {
        n /= 10;
        i++;
    }
    int mid = n %10;
    cout<<"square: "<<mid*mid;
    return 0;

}