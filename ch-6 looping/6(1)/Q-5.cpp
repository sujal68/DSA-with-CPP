#include <iostream>
using namespace std;

main()
{
    int a;
    cout << "Enter First Number :";
    cin >> a;
    int n;
    cout << "Enter Second Number :";
    cin >> n;
    while (a <= n)
    {
        if (a % 4 == 0)
        {
            cout << a << "\t";
        }
        a++;
    }
}