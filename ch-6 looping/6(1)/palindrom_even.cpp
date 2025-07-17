#include <iostream>
using namespace std;

main()
{
    int n, rem, sum = 0, rev = 0;
    cout << "Enter Any Number : ";
    cin >> n;

    int original = n;
    for (int temp = n; temp != 0; temp /= 10)
    {
        rem = temp % 10;
        sum += rem;
    }

    if (sum % 2 == 0)
    {
        for (int temp = n; temp != 0; temp /= 10)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
        }
        if (rev == original)
        {
            cout << "Yes it's it palindrom Number And It's It Even Number....";
        }
        else
        {
            cout << "No it's it palindrom Number But It's Is Even Number....";
        }
    }
    else
    {
        cout << "This Is Odd Number to Not Valid!!!";
    }
}