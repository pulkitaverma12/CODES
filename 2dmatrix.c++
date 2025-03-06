#include <iostream>
using namespace std;

int main()
{
    int rows, col;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> col;
    int m[100][100];  // Temporary fix, but use dynamic memory in real cases
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << "The entered matrix is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
