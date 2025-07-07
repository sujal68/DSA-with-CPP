// Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.
#include <iostream>
using namespace std;
main()
{
    int a, b, c, d;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    cout << "Enter C :";
    cin >> c;
    cout << "Enter D :";
    cin >> d;

    if (a == b && a == c && a == d && b == c && b == d && c == d)
    {
        cout << endl
             << "All Are Equal....";
    }
    else if (a == b || a == c || a == d || b == c || b == d || c == d)
    {
        cout << endl
             << "Both Are Equal....";
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                    cout << endl
                         << "A is Max";
                else
                    cout << endl
                         << "D is Max";
            }
            else
            {
                if (c > d)
                    cout << endl
                         << "C is Max";
                else
                    cout << endl
                         << "D is Max";
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    cout << endl
                         << "B is Max";
                }
                else
                {
                    cout << endl
                         << "D is Max";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << endl
                         << "C is Max";
                }
                else
                {
                    cout << endl
                         << "D is Max";
                }
            }
        }
    }
}