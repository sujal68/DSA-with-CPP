#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter Any Number For Check ODD and EVEN : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even Number....";
    }
    else
    {
        cout << "Odd Number....";
    }
}