#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    cout << "Enter A Number : ";
    cin >> a;
    cout << "Enter B Number : ";
    cin >> b;
    cout << "Enter C Number : ";
    cin >> c;

    (a > b)
        ? (a > c) ? cout << "A is Maximummm.." : cout << "C is Maximummm.."
        : (b > c) ? cout << "B is Maximummm.." : cout << " C is Maximummm..";
}