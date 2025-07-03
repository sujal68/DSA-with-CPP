// Q.7 Write a Program to find the formula's answer (x+y+z)^2.
#include <iostream>
using namespace std;

main()
{
    int x;
    int y;
    int z;

    cout << "Enter X value : ";
    cin >> x;

    cout << "Enter Y value : ";
    cin >> y;

    cout << "Enter Z value : ";
    cin >> z;

    cout << "answer (x+y+z)^2 : " << (x + y + z) * (x + y + z);
}