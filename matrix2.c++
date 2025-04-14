#include <iostream>
#include<vector>
using namespace std;
bool searchmatrix(vector<vector<int>> &matrix,int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int r=0,c=n-1;
    while(r<m && c >=0)
    {
        if(matrix[r][c] == target)
        {
            return true;
        }
        else if(matrix[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 5;
    if(searchmatrix(matrix,target))
    {
        cout<<"Element found"<<endl;    
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    cout<<endl;
    return 0;
}
