#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter 1-7 Number For Check day :";
    cin >> num;

    if (num == 1)
    {
        cout << endl
             << "Monday";
    }
    else if (num == 2)
    {
        cout << endl
             << "Tuesday";
    }
    else if (num == 3)
    {
        cout << endl
             << "Wednesday";
    }
    else if (num == 4)
    {
        cout << endl
             << "thursday";
    }
    else if (num == 5)
    {
        cout << endl
             << "Friday";
    }
    else if (num == 6)
    {
        cout << endl
             << "Seterday";
    }
    else if (num == 7)
    {
        cout << endl
             << "Sunday";
    }
    else
    {
        cout << endl
             << "Invalid Number !!";
    }
}