#include <iostream>
using namespace std;

main()
{
    int size, size2;
    cout << "Enter Array Size : ";
    cin >> size;
    cout << "Enter Array2 Size : ";
    cin >> size2;
    int array[size];
    int array2[size2];
    int marge[size + size2];

    cout
        << endl
        << "Array Input...." << endl
        << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Any Number of array : " << "[" << i << "] : ";
        cin >> array[i];
    }
    cout << endl
         << "Array-2 input...." << endl
         << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter Any Number of array-2 : " << "[" << i << "] : ";
        cin >> array2[i];
    }
    // Array marge
    for (int i = 0; i < size; i++)
    {
        marge[i] = array[i];
    }
    for (int i = 0; i < size2; i++)
    {
        marge[i + size] = array2[i];
    }
    for (int i = 0; i < size + size2; i++)
    {
        cout << marge[i] << "\t";
    }
}
