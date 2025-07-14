#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter Any Number :";
    cin >> num;

    if (num % 2 == 0 && num % 5 == 0)
        cout << num << " This Number Is Even And This Number Divisible By 5.";
    else if (num % 2 == 0 && num % 5 != 0)
        cout << num << "  This Number Is Even And Not This Number Divisible By 5.";
    else if (num % 2 != 0 && num % 5 == 0)
        cout << num << " This Number Is Odd And This Number Divisible By 5.";
    else
        cout << num << " This Number Is Odd And Not This Number Divisible By 5.";
}