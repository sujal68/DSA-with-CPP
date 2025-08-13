#include <iostream>
using namespace std;
int main()
{
    int row, col;
    int number;
    int sum = 0;

    cout << "Enter array of Rows : ";
    cin >> row;
    cout << "Enter array of Columns : ";
    cin >> col;

    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Array Element of array[" << i << "][" << j << "] : ";
            cin >> array[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Enter the number of array row to sum : ";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += array[i][j];
        }
    }

    cout << endl
         << "Sum of Row " << number << "is : " << sum;

    return 0;
}