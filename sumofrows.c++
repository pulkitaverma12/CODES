#include <iostream>
using namespace std;

int main()
{
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rows = 4;
    int cols = 3;

    cout << "Matrix elements with row sums:\n" << endl;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
            sum += matrix[i][j];
        }
        cout<<endl;
        cout << "Sum = " << sum << endl;
    }

    return 0;
}
