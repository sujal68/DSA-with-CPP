#include <iostream>
using namespace std;

// All are function
// addition
int add(int a, int b)
{
    return a + b;
}
// substraction
int sub(int a, int b)
{
    return a - b;
}
// multipication
int mul(int a, int b)
{
    return a * b;
}
// division
int divis(int a, int b)
{
    return a / b;
}
// modules
int mod(int a, int b)
{
    return a % b;
}

// main fucntion
int main()
{
    int number;
    int no1, no2;

    while (1)
    {
        cout << endl
             << endl
             << "Calculator.." << endl;
        cout << "1 press for +" << endl;
        cout << "2 press for - " << endl;
        cout << "3 press for * " << endl;
        cout << "4 press for / " << endl;
        cout << "5 press for %" << endl;
        cout << "0 for exit........" << endl;
        cout << "Enter Any Number For calculate : ";
        cin >> number;

        cout << endl;

        switch (number)
        {
            // this case is addition
        case 1:

            cout << "Enter any one numbers: ";
            cin >> no1;
            cout << "Enter any two numbers: ";
            cin >> no2;
            cout << "Calculate = " << add(no1, no2) << endl;
            break;

        case 2:
            // this case is substraction
            cout << "Enter any one numbers: ";
            cin >> no1;
            cout << "Enter any two numbers: ";
            cin >> no2;
            cout << "Calculate = " << sub(no1, no2) << endl;
            break;
        case 3:
            // thix case is multipications
            cout << "Enter any one numbers: ";
            cin >> no1;

            cout << "Enter any two numbers: ";
            cin >> no2;
            cout << "Calculate = " << mul(no1, no2) << endl;
            break;
        case 4:
            // this case is modules
            cout << "Enter any one numbers: ";
            cin >> no1;

            cout << "Enter any two numbers: ";
            cin >> no2;
            if (no2 == 0)
                cout << "Cant devide 0 zero..." << endl;
            else
                cout << "calculate = " << divis(no1, no2)
                     << endl;
            break;
        case 5:
            // this cese is division
            cout << "Enter any one numbers: ";
            cin >> no1;

            cout << "Enter any two numbers: ";
            cin >> no2;
            if (no2 == 0)
                cout << "Modulo zero" << endl;
            else
                cout << "Result = " << mod(no1, no2)
                     << endl;
            break;
        case 0:
            // exit case
            cout << endl
                 << "You Are exited In Calculatore.." << endl;
            return 0;
        default:
            cout << "Invalid Number please try again...." << endl;
        }
    }
    return 0;
}