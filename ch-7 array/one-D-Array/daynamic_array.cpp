#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int array[size];
    int sum = 0;

    cout << endl
         << "Array Input...." << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Any Number of array : " << "[" << i << "] : ";
        cin >> array[i];
    }
    cout << endl
         << "Array OutPut...." << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout
            << array[i] << " ";
    }
    cout << endl
         << "Array Sum....." << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << sum << endl;
}
