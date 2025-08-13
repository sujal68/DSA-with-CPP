#include <iostream>
using namespace std;

main()
{
    int row, col;
    int num;
    cout << "Enter Number Of Array row : ";
    cin >> row;
    cout << "Enter Number Of Array column : ";
    cin >> col;

    int array_A[row][col];
    int array_B[row][col];
    int sum[row][col];

    cout << endl
         << "Array Input......" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Element of [" << i << "][" << j << "] : ";
            cin >> num;
            array_A[i][j] = num;
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array_B[i][j] = array_A[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Array Output......" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array_A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array_B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = array_A[i][j] + array_B[i][j];
        }
        cout << endl;
    }

    cout << "Sum Array......" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}
