// 1 3 5 7 9
// 11 13 15 17 19
// 21 23 25 27 29
// 31 33 35 37 39
// 41 43 45 47 49

#include <iostream>
using namespace std;

main()
{
    int i, j;
    for (i = 1; i <= 41; i += 10)
    {
        for (j = i; j <= 8 + i; j += 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}