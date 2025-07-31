// A
// B C
// D E F
// G H I J
// K L M N o

#include <iostream>
using namespace std;

main()
{
    char alpha = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
}