//  Check whether the triangle is an equilateral, isosceles or scalene triangle.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< " enter the sides :";
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<< " equilateral triangle"<<endl;
    }
    else if ( a==b || b==c || a==c)
    {
        cout<< "isosceles triangle"<<endl;
    }
    else
    {
        cout<< " scalene triangle"<<endl;
    }
    return 0;
}
