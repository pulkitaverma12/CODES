#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str ="Hello World!";
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    cout<<"Reversed string is: "<<str<<endl;
    cout<<"Length of the string is: "<<str.length()<<endl;
    cout<<"First character is: "<<str[0]<<endl;
    cout<<"Last character is: "<<str[str.length()-1]<<endl;
    return 0;
}
