//   s s s     u       u     j j j j j    a a a     l
// s       s   u       u         j      a       a   l
// s           u       u         j      a       a   l
//   s s s     u       u         j      a a a a a   l
//         s   u       u         j      a       a   l
// s       s   u       u     j   j      a       a   l
//   s s s     u u u u u       j        a       a   l l l l l

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        // S
        for (int j = 1; j <= 5; j++)
        {
            if ((i == 1 || i == 4 || i == 7) && (j >= 2 && j <= 4) ||
                (i == 2 && (j == 1 || j == 5)) ||
                (i == 3 && j == 1) ||
                (i == 5 && j == 5) ||
                (i == 6 && (j == 1 || j == 5)))
            {
                cout << "s ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << "  ";

        // U
        for (int j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) && i != 7 ||
                (i == 7 && j > 1 && j < 5))
            {
                cout << "u ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << "  ";

        // J
        for (int j = 1; j <= 5; j++)
        {
            if ((i == 1 && j <= 5) ||
                (j == 3 && i <= 6) ||
                (i == 7 && j == 2) ||
                (i == 6 && j == 1))
            {
                cout << "j ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << "  ";

        // A
        for (int j = 1; j <= 5; j++)
        {
            if (
                (i == 1 && (j == 2 || j == 3 || j == 4)) ||
                (i >= 2 && i <= 3 && (j == 1 || j == 5)) ||
                (i == 4) ||
                (i >= 5 && (j == 1 || j == 5)))
            {
                cout << "a ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << "  ";

        // L
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || (i == 7))
            {
                cout << "l ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
