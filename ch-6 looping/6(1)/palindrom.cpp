#include <iostream>
using namespace std;

main()
{
    int n, rem, original, rev = 0;
    cout << "Enter Any Number :";
    cin >> n;
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (original == rev)
    {
        cout << "Yes this is palindrom Number...";
    }
    else
    {
        cout << "no this is no palindrom Number...";
    }
}