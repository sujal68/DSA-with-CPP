// 1        |        1
// 1 2      |      2 1
// 1 2 3    |    3 2 1
// 1 2 3 4  |  4 3 2 1
// 1 2 3 4 5|5 4 3 2 1

#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}