// 0 1 0 1 0
//   1 0 1 0
//     0 1 0
//       1 0
//         0

#include <iostream>
using namespace std;

main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s < i; s++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}