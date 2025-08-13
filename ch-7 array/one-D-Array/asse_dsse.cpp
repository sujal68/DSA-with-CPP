#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter Array Index : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Any Number of array : " << "[" << i << "] : ";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int c = array[i];
                array[i] = array[j];
                array[j] = c;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << endl
             << array[i] << "\t";
    }
}