// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
#include <iostream>
using namespace std;

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}