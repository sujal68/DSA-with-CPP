// Q.4 Write a Program to find the formula's answer (x-y)^2.
#include <iostream>
using namespace std;

main()
{
    int x;
    int y;

    cout << "Enter X value : ";
    cin >> x;

    cout << "Enter Y value : ";
    cin >> y;

    cout << "answer (x-y)^2 : " << (x - y) * (x - y);
}