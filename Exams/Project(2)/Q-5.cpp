#include <iostream>
using namespace std;

main()
{
    char a = 'a';
    do
    {
        cout << a << "\t";
        a += 4;
    } while (a <= 'z');
}