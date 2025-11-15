#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Of Index Size : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array Element of [" << i << "] : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter Target: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Your target Are Found " << arr[i] << " + " << arr[j] << " = " << target << endl;
                cout << "Your Targeted Sum Index : [" << i << "] , [" << j << "]" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << endl
             << "Your Target Are Not Found... Please try Again..." << endl;
    }
    return 0;
}
