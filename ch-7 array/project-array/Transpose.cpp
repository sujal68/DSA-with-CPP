#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter Rows : ";
    cin >> row;
    cout << "Enter Columns : ";
    cin >> col;

    int array[row][col];

    cout << endl
         << "Array Input...." << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Number [" << i << "][" << j << "] : ";
            cin >> array[i][j];
        }
    }

    cout << endl
         << "The array transpose matrix.." << endl;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
