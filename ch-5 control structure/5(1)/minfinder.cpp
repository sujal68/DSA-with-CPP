// Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.
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

    if (first < second)
    {
        cout << endl
             << "The Minimum Number is :" << first;
    }
    else
    {
        cout << endl
             << "The Minimum Number is :" << second;
    }
}