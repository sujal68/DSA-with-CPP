#include <iostream>
using namespace std;

int main()
{
    // 1St Pattern
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // Without Space Pattern
    // for (int i = 1; i <= 5; i++) // outer loop
    // {
    //     for (int j = 1; j <= i; j++) // inner loop
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // 2nd Pattern
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch;
        }
        cout << endl;
    }

    // 3th
    // 1
    // 1 2
    // 1 2 3
    // 1 2
    // 1
    for (int i = 8; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}