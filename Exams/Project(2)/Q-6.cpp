#include <iostream>
using namespace std;

main()
{
    int n;
    int count = 0;
    cout << "Enter Any Number :";
    cin >> n;

    while (n != 0)
    {
        count++;
        n /= 10;
    }
    cout << count;
}