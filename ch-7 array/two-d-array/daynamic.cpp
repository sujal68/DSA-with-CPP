#include <iostream>
using namespace std;

main()
{
    int index, element;
    int sum = 0;
    cout << "Enter Number Of Array Index : ";
    cin >> index;
    cout << "Enter Number Of Array Element : ";
    cin >> element;
    int array[index][element];

    cout << endl
         << "Array Input......" << endl
         << endl;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < element; j++)
        {
            cout << "Enter Element of " << "[" << i << "][" << j << "] : ";
            cin >> array[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Array Output......" << endl
         << endl;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < element; j++)
        {
            cout
                << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < element; j++)
        {
            sum += array[i][j];
        }
    }
    cout << endl
         << "Array Sum..." << endl;

    cout << endl
         << sum;
    cout << endl
         << "Array avg..." << endl;
    cout << endl
         << (float)sum / (index * element);
}