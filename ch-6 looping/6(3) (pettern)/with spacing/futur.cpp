// 1
// 6 2
// 10 7 3
// 13 11 8 4
// 15 14 12 9 5

#include <iostream>
using namespace std;

main()
{
    int n = 1;
    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j >= n; j--, n++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}