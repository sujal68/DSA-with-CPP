#include <iostream>
using namespace std;

main()
{
    int n, original, rem, sum = 0;
    cout << "Enter Any Number :";
    cin >> n;
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }

    if (sum == original)
    {
        cout << original << "This Is Armstrong Number..";
    }
    else
    {
        cout << original << "\t" << "This Is NO Armstrong Number!!!!";
    }
}
