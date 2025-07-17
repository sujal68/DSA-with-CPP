#include <iostream>
using namespace std;

int main()
{
    int n, rem, sum = 0;

    cout << "enter any number: ";
    cin >> n;

    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout << "single Number Sum : " << sum;
}