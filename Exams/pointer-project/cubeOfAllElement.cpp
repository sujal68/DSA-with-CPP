#include <iostream>
using namespace std;

int cube(int *n)
{
    return (*n) * (*n) * (*n);
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[10][10];

    cout << "Enter array of elements :";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*(arr + i) + j);
        }
    }

    cout << "cube of all elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << cube(&arr[i][j]) << "  ";
        }
        cout << endl;
    }

    return 0;
}
