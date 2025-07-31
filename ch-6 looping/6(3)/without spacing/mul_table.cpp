#include <iostream>
using namespace std;

main()
{
    int start, end;
    cout << "Enter First Multipication Table :";
    cin >> start;
    cout << "Enter First Multipication Table :";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
}