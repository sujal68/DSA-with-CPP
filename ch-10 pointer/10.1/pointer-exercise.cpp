#include <iostream>
using namespace std;

int main()
{
    int ab;
    cout << "Your Size : " << sizeof(int) << endl;
    cout << "Your Size : " << sizeof(double) << endl;
    cout << "Your Size : " << sizeof(long int) << endl;
    cout << "Your Size : " << sizeof(long long int) << endl;
    cout << "Your Size : " << sizeof(float) << endl;
    cout << "Your Size : " << sizeof(char) << endl;

    int a[50];
    cout << endl
        << "your Array Size : " << sizeof a;
}