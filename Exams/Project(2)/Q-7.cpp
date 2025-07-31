#include <iostream>
using namespace std;

main()
{
    int n, last;
    cout << "Enter Any Number : ";
    cin >> n;

    last = n % 10;
    while (n >= 10)
    {
        n /= 10;
    }
    cout << "The Sum Of First And Last Digit :" << (n + last);
}