// 0
// 0 1
// 0 1 0
// 0 1 0 1
// 0 1 0 1 0
#include <iostream>
using namespace std;
main()
{
    for (int i = 2; i <= 6; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
}