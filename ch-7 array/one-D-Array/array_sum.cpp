#include <iostream>
using namespace std;

main()
{
    int size, size2, size3;
    cout << "Enter Array Size : ";
    cin >> size;
    cout << "Enter Array2 Size : ";
    cin >> size2;
    cout << "Enter Array3 Size : ";
    cin >> size3;
    int array[size];
    int array2[size2];
    int sum[size3];

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
    cout << endl
         << "Sum Of Array...." << endl
         << endl;
    for (int i = 0; i < size3; i++)
    {
        sum[i] = array[i] + array2[i];
        cout << sum[i] << " ";
    }
}
