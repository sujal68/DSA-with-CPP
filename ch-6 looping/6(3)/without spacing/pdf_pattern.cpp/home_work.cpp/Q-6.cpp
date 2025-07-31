// 1 B 3 D 5
// B B B B
// 3 D 5
// D D
// 5

#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                char ch2 = i + 64;
                cout << ch2 << " ";
            }
            else
            {
                if (j % 2 == 0)
                {
                    char ch = j + 64;
                    cout << ch << " ";
                }
                else
                {
                    cout << j << " ";
                }
            }
        }
        cout << endl;
    }
}