#include <iostream>
using namespace std;

class operation
{
public:
    void calculate(int a, int b)
    {
        cout << "Division = " << a << " / " << b << " = " << (a / b) << endl;
    }

    void calculate(int a, int b, int c)
    {
        cout << "Subtraction = " << a << " - " << b << " - " << c << " = " << (a - b - c) << endl;
    }

    void calculate(int a, int b, int c, int d)
    {
        cout << "Multiplication = " << a << " * " << b << " * " << c << " * " << d << " = " << (a * b * c * d) << endl;
    }

    void calculate(int a, int b, int c, int d, int e)
    {
        cout << "Addition = " << a << " + " << b << " + " << c << " + " << d << " + " << e << " = " << (a + b + c + d + e) << endl;
    }
};
