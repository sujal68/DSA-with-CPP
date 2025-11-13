// 1

// 0 1

// 1 0 1

// 0 1 0 1

// 1 0 1 0 1
#include <iostream>
using namespace std;

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
}