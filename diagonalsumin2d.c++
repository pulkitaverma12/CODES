#include <iostream>
using namespace std;
int diagonalsum(int matrix[][3],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum +=matrix[i][j];
            }
            else if(j == n-1-i)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int n=4;
    int rows=4;
    int col=3;
    cout<<diagonalsum(matrix,n)<<endl;
    
    return 0;
}
