#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char password[20];
    cout << "Enter Your Password :";
    cin >> password;

    int len = strlen(password);
    cout << "Length : " << len << endl;

    int upper = 0, lower = 0, digit = 0, symbol = 0;

    if (len >= 6)
    {
        for (int i = 0; i <= len; i++)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                upper++;
            }
            else if (password[i] >= 'a' && password[i] <= 'z')
            {
                lower++;
            }
            else if (password[i] >= 48 && password[i] <= 57)
            {
                digit++;
            }
            else
            {
                symbol++;
            }
        }
        if (upper > 0 && lower > 0 && digit > 0 && symbol > 0)
        {
            cout << endl
                 << "Your Password Is Strong....." << endl;
        }
        else
        {
            cout << endl
                 << "Your Password Is Not Strong..." << endl
                 << endl;
            if (upper == 0)
                cout << "Missing Uppercase..." << endl;
            if (lower == 0)
                cout << "Missing Lowercase.." << endl;
            if (digit == 0)
                cout << "Missing Digit.." << endl;
        }
    }
    else
    {
        cout << endl
             << "Please Enter Valid Password....";
    }
}