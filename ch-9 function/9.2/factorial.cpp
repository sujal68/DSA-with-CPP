#include <iostream>
using namespace std;

double fact(double n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main()
{
    double n;
    cout << "Enter Any Number :";
    cin >> n;
    double facto = fact(n);
    cout << "Your Factorial IS : " << facto << endl;
    return 0;
}