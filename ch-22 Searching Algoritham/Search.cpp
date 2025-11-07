#include <iostream>
using namespace std;

int Searching(int a[], int n)
{
    int search_element;
    int index = -1;
    cout << "Enter a number to search : ";
    cin >> search_element;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search_element)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int n;
    cout << "Enter a number of Array : ";
    cin >> n;
    int arr[n];
    cout << "Array Input" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element of [" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Array Elements are -->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int index = Searching(arr, n);
    if (index != -1)
    {
        cout << "Element found at index : " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}