#include <iostream>
using namespace std;

main()
{
    int age;

    cout << "Enter Your Age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You Eligible To Vote.";
    }
    else
    {
        cout << "You Note Eligible For Vote! ";
    }
}