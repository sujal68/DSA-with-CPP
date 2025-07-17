#include <iostream>
using namespace std;

main()
{
    int n, sum, rem = 0, original;
    cout << "Enter Any Number :";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        sum = rem + (rem * rem * rem);
        n /= 10;
    }

    if (n == original)
    {
        cout << "The Disarium Numnber...";
    }
    else
    {
        cout << "does not Disarium Numnber...";
    }
}