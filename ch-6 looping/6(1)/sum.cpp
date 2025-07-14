#include <iostream>
using namespace std;

main()
{
    int a = 1;
    int sum = 0;
    int n;
    cout << "Enter any number :";
    cin >> n;

    while (a <= n)
    {
        sum += a;
        a++;
    }
    cout << "Sum\t :" << sum << endl;
}