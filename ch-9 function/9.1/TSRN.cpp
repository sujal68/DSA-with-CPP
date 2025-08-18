#include <iostream>
using namespace std;
// Take Somthing Return Nothing(TSRN)
void takeSReturnN(int a, int b)
{

    cout << "The Multipication : " << a * b;
}

main()
{
    int a, b;
    cout
        << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    takeSReturnN(a, b);
}