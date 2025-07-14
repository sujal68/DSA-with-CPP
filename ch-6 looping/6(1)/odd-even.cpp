#include <iostream>
using namespace std;

main()
{
    int a = 1;

    int n;
    cout << "Enter Any Number :";
    cin >> n;
    while (a <= n)
    {
        if (a % 2 != 0)
        {
            cout << a++ << "\t";
        } 
        a++;
    }
}