// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

#include <iostream>
using namespace std;

main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--)
    {
        for (s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}