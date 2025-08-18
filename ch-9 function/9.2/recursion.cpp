#include <iostream>
using namespace std;

int loop(int start, int end)
{
    if (start < end)
    {
        cout << start << endl;
        start++;
        loop(start, end);
    }
}

int main()
{
    int looping = loop(1, 10);
    cout << looping << endl;
    return 0;
}