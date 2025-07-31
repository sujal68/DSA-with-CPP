// 1                 1
// A B             A B
// 1 2 3         1 2 3
// A B C D     A B C D
// 1 2 3 4 5 1 2 3 4 5
// A B C D E E D C B A
// 1 2 3 4     4 3 2 1
// A B C         C B A
// 1 2             2 1
// A                 A
#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << j << " ";
            }
            else
            {

                char ch = j + 64;
                cout << ch << " ";
            }
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (i % 2 == 0)
            {

                cout << j << " ";
            }
            else
            {
                char ch = j + 64;
                cout << ch << " ";
            }
        }
        cout << endl;
    }
}