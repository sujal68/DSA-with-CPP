#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int col, row;
    cout << "Enter Row : ";
    cin >> row;
    cout << "Enter Column : ";
    cin >> col;
    vector<int> v(col);
    vector<vector<int>> matrix(row, v);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Matrix [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}