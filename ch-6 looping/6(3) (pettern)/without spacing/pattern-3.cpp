// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <iostream>
using namespace std;

main()
{
    int i, j;
    for (i = 1; i <= 21; i+=5)
    {
        for (j = i; j <= 4+i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}
