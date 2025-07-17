#include <iostream>
using namespace std;

main()
{
    int n, first, last;
    cout << "Enter Any Number : ";
    cin >> n;

    last = n % 10;
    while (n >= 10)
    {
        n /= 10;
    }
    first = n;
    cout << "The Sum Of First And Last Digit :" << (first + last);
}