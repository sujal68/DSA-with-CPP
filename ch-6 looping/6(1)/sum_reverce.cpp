#include <iostream>
using namespace std;

main()
{
    int n, rem, sum = 0, rev = 0;
    cout << "Enter Any Number :";
    cin >> n;
    int original = n;

    for (int temp = n; temp != 0; temp /= 10)
    {
        rem = temp % 10;
        sum += rem;
        cout << rem;
    }
    cout << " This Is Reverce of : " << original << endl;
    cout << sum << " This Is Sum of : " << original;

    for (int temp = sum; temp != 0; temp /= 10)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
    }
    cout << endl
         << "The Reverce Of Sum :" << rev;
}
