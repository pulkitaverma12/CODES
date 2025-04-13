#include <iostream>
#include <utility>
#include<climits>
using namespace std;

// Return a pair of (row, col) if found, else (-1, -1)
pair<int, int> linearsearch(int matrix[4][3], int rows, int col, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == key)
            {
                return make_pair(i, j);  // or just {i, j} in C++11 and above
            }
        }
    }
    return make_pair(-1, -1);
}


int getmaxsum(int matrix[][3], int rows, int col)
{
    int maxsum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < col; j++)
        {
            rowsum += matrix[i][j];
        }
        maxsum = max(maxsum, rowsum);
    }
    return maxsum;
}


int main()
{
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rows = 4;
    int col = 3;

    pair<int, int> result = linearsearch(matrix, rows, col, 8);

    cout<<"rows: "<<result.first<<endl;
    cout<<"col: "<<result.second<<endl;
    cout << "Max row sum: " << getmaxsum(matrix, rows, col) << endl;

    // if (result.first != -1)
    // {
    //     cout << "Key found at row " << result.first << ", column " << result.second << endl;
    // }
    // else
    // {
    //     cout << "Key not found" << endl;
    // }

    return 0;
}
