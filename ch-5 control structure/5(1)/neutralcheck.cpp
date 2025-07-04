// Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.
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
             << num << " The Number Is Positive..";
    }
    if (num < 0)
    {
        cout << endl
             << num << " The Number Is Nagative..";
    }
    if (num == 0)
    {
        cout << endl
             << num << " This number is Neutral";
    }
}