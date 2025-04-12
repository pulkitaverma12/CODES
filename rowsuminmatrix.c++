#include <iostream>
using namespace std;
int main()
{
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int col=3;
    // cout<<"matrix elements: "<<endl;
    for(int i=0;i<rows;i++)
    {
        cout<<"matrix elements: "<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        cout<<"row sum: "<<i+1;
        int sum =0;
        for(int j=0;j<col;j++)
        {
            sum+=matrix[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
