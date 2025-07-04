#include <iostream>
using namespace std;

main()
{
    int first;
    int second;

    cout << "Enter First Number :";
    cin >> first;
    cout << endl
         << "Enter Second Number :";
    cin >> second;

    if (first > second)
    {
        cout << endl
             << "The Maximum Number is :" << first;
    }
    else if (first < second)
    {
        cout << endl
             << "The Maximum Number is :" << second;
    }
    else
    {
        cout << endl
             << "Both Are Same Number.";
    }
}