#include <iostream>
using namespace std;

main()
{
    int num, i, a = 1, b = 1, c;
    cout << "Enter Any Number : ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        cout << a << " ";
        c = a + b;
        b++;
        a = c;
    }
}
