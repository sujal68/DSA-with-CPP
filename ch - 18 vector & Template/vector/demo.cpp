#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    int value;

    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array Value : ";
        cin >> value;
        v1.push_back(value);
    }
    cout << endl
         << endl
         << "Pop stystem Exicuted One time..." << endl
         << endl;
    for (int i = 0; i < 1; i++)
    {
        v1.pop_back();
        cout << "Array under Deleted.... one time.." << endl
             << endl;
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }

    return 0;
}