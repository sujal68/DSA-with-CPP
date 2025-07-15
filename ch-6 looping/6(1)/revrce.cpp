#include <iostream>
using namespace std;

main()
{
    int n;
    int rev = 0;
    int rem;

    cout << "Enter Any Number :";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev;
}
