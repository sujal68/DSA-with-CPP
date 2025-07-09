#include <iostream>
using namespace std;

main()
{
    float unit;
    float charge = 0.20;
    float bill;
    cout << "Enter Electricity Unit :";
    cin >> unit;

    if (unit <= 50)
    {
        bill = unit * 0.50;
        cout << endl
             << "Electricity Bill = " << bill + (bill)*charge;
    }
    else if (unit <= 150)
    {
        bill = 25 + (unit - 50) * 0.75;
        cout << endl
             << "Electricity Bill = " << bill + (bill)*charge;
    }
    else if (unit <= 250)
    {
        bill = 100 + (unit - 150) * 1.20;
        cout << endl
             << "Electricity Bill = " << bill + (bill)*charge;
    }
    else if (unit >= 250)
    {
        bill = 220 + (unit - 250) * 1.50;
        cout << endl
             << "Electricity Bill = " << bill + (bill)*charge;
    }
    else
    {
        cout << endl
             << "Invalid Number..!!";
    }
}