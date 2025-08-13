#include <iostream>
using namespace std;

main()
{
    // int array[6] = {10, 20, 30, 40, 50};
    // array[5] = 100;

    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << array[i];
    //     cout << endl;
    // }

    int a = 2, b = 5;
    a = (a + b) - (b = a);
    cout << a << b;
}
