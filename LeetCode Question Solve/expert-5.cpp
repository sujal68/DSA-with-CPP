// Q - move 0's to end of array
#include <iostream>
using namespace std;

int main()
{
    int array[] = {10, 0, 11, 0, 23, 5};
    int n = 6;

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            array[index] = array[i];
            index++;
        }
    }
    while (index < n)
    {
        array[index] = 0;
        index++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
