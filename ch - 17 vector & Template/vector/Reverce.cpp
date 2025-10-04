#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    vector<int> v(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << "[" << i << "]" << " Element Of Array : ";
        cin >> v[i];
    }
    cout << endl
         << "Display Element..." << endl;
    for (int element : v)
    {

        cout << element << "\t" << endl;
    }
    for (int i = 0; i < size / 2; i++)
    {
        int element = v[i];
        v[i] = v[size - i - 1];
        v[size - i - 1] = element;
    }
    cout << endl
         << "Reverse Element ...." << endl;
    for (int element : v)
    {

        cout << element << "\t";
    }
    return 0;
}