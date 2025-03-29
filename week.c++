//  Input the week number and print the weekday
#include <iostream>
using namespace std;
int main()
{
    int week;
    cout << "Enter the week number (1-7): ";
    cin >> week;
    switch(week)
    {
        case 1:
        cout << " monday"<<endl;
        break;
        case 2:
        cout << "tuesday"<<endl;
        break;
        case 3:
        cout<< " wednesday"<<endl;
        break;
        case 4:
        cout << "thursday"<<endl;
        break;
        case 5:
        cout << "friday"<<endl;
        break;
        case 6:
        cout << "saturday"<<endl;
        break;
        case 7:
        cout << "sunday"<<endl;
        break;
        default:
        cout << "invalid week number"<<endl;
        break;
    }
    return 0;
}
