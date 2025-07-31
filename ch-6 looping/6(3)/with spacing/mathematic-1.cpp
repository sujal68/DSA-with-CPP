// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

#include <iostream>
using namespace std;

main()
{
    int i, j, n = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i + (n - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}