#include <iostream>
using namespace std;

int main()
{
    int size = 100;
    int array[size];
    int i;

    for (i = 0; i < size; i++) // Corrected scope
    {
        array[i] = i + 1;
        cout << "Enter Any Number of array : [" << i << "] : ";
        cout << array[i] << endl;
    }

    system("cls"); // Optional: Remove if not needed

    int ans = i % 2; // i = 100, so 100 % 2 = 0

    if (ans == 0)
    {
        cout << "Door is Open....." << endl;
    }
    else
    {
        cout << "Door is Close...." << endl;
    }

    return 0;
}
