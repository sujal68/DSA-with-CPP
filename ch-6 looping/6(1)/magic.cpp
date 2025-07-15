#include <iostream>
using namespace std;

main()
{
    int n, sum = 0, multple = 1, original, rem;
    cout << "Enter any Number :";
    cin >> n;
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        multple *= rem;
        n /= 10;
    }
    if (sum == multple)
    {
        cout << original << " This Is Magic Number...";
    }
    else
    {
        cout << original << " This Is not Magic Number...";
    }
}