// Armstrong Number
// Ye number wahi hota hai jisme har digit ke cube (ya digit-count power) ka sum number ke equal hota hai.
// Example: 153 = 1³ + 5³ + 3³
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int temp=n,count=0,sum=0;
    while(temp>0)
    {
        count++;
        temp /= 10;
    }
    while(temp>0)
    {
        int digit = temp % 10;
        sum += pow(digit,count);
        temp /=10;
    }
    if(sum == temp)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }


}