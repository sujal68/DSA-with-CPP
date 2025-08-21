#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        // cout << ptr[i] << "\t";
        printf("%u", ptr[i]);
        cout << "\t";
    }
}