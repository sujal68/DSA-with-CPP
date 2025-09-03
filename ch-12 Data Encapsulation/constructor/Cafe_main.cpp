#include "Cafe.cpp"
using namespace std;
int main()
{
    int n;
    cout << "Enter number of Cafe: ";
    cin >> n;

    Cafe c1[n];

    for (int i = 0; i < n; i++)
    {
        c1[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        c1[i].getData();
    }

    return 0;
}
