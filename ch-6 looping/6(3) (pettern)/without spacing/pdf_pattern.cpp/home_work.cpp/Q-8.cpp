// 1 3 5 7 9
// 3 5 7 9
// 5 7 9
// 7 9
// 9

#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = i; j <= 9; j += 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}