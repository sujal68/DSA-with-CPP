// Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else.Also, draw a Flowchart in your book.
#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    cout << "Enter C :";
    cin >> c;

    if (a == b && a == c && b == c)
        cout << endl
             << "All are Equal..";
    else if (a == b || a == c || b == c)
    {
        cout << endl
             << "Both are Equal..";
    }
    else
    {
        if (a < b)
        {
            if (a < c)
                cout << endl
                     << "A is min...";
            else
                cout << endl
                     << "C is min...";
        }
        else
        {
            if (b < c)
                cout << endl
                     << "B is min...";
            else
                cout << endl
                     << "C is min...";
        }
    }
}