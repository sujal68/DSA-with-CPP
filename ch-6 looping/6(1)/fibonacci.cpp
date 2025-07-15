#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Numbers: ";
    cin >> n;

    int A = 0, B = 1, C;
    int i = 1;

    cout << "Fibonacci Series: ";

    while (i <= n)
    {
        cout << A << " ";
        C = A + B;
        A = B;
        B = C;
        i++;
    }
}
