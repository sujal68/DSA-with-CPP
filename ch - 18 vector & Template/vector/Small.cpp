#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Of Size : ";
    cin >> size;
    vector<int> vector(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << "[" << i << "]" << " Element Of Array : ";
        cin >> vector[i];
    }
    cout << endl
         << "Display Element..." << endl;
    for (int element : vector)
    {

        cout << element << "\t";
    }
    cout << endl
         << "Small Eleemnt right and left" << endl;
    for (int i = 1; i < size - 1; i++)
    {
        if (vector[i] < vector[i - 1] && vector[i] < vector[i + 1])
        {
            cout << vector[i] << "\t";
        }
    }
}