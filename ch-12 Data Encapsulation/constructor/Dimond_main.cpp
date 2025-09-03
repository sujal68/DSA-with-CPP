#include <iostream>
#include <string.h>
#include "Dimond.cpp"
using namespace std;

main()
{
    int id, reven, import, quentiti, exports;
    string name, ceo;
    cout << endl
         << "Enter Company Id : ";
    cin >> id;
    cout << endl
         << "Enter Company Name : ";
    cin >> name;
    cout << endl
         << "Enter Company Revenue : ";
    cin >> reven;
    cout << endl
         << "Enter Company import raw dimond : ";
    cin >> import;
    cout << endl
         << "Enter Company Staff Quantity : ";
    cin >> quentiti;
    cout << endl
         << "Enter Company export Dimond : ";
    cin >> exports;
    Dimond dimond(id, name, reven, import, quentiti, exports);

    dimond.getDimondData();
}