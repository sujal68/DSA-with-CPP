#include <iostream>
using namespace std;
// Take Nothing Return Something(TNRS)
int takeNReturnS()
{
    int a, b;
    cout
        << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    return a * b;
}

main()
{
    int multi = takeNReturnS();
    cout << multi;
}