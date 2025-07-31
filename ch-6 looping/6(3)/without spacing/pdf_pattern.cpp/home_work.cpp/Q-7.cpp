// a B c D e
// 2 c 4 e
// c D e
// 4 e
// e

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
                if (j % 2 == 0)
                {
                    cout << j << " ";
                }
                else
                {
                    char ch2 = j + 96;
                    cout << ch2 << " ";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    char ch4 = j + 64;
                    cout << ch4 << " ";
                }
                else
                {
                    char ch3 = j + 96;
                    cout << ch3 << " ";
                }
            }
        }
        cout << endl;
    }
}