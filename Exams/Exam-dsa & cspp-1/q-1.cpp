#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter Any Number :";
    cin >> num;

    if (num > 0)
    {
        cout << endl
             << num << " This Number Is Positive..";
    }
    else
    {
        cout << endl
             << num << " This Number Is Negative..";
    }
}