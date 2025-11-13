#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a * a << " ";
        }
        a++;
        cout << endl;
    }

    return 0;
}
