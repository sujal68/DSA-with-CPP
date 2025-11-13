//         1
//       2 3 4
//     5 6 7 8 9
//   10 11 12 13 14 15 16

#include <iostream>
using namespace std;

main()
{
    int n = 1;
    for (int i = 1; i <= 8; i += 2)
    {
        for (int s = 8; s > i; s--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}