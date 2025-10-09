// Strong Number / Factorial Digit Sum
// Ek number jisme har digit ka factorial ka sum number ke equal hota hai.
// Example: 145 = 1! + 4! + 5!
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int temp=n,sum=0,fact=1;
    while(temp>0)
    {
        int digit = temp % 10;
        for(int i=digit;i>=1;i--)
        {
            fact *=i;
        }
        sum += fact;
        fact = 1;
        temp /= 10;
    }
    if( sum == n)
    cout<<"strong number";
    else
    cout<<"not strong";
}