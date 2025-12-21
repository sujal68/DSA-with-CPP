#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
    k = k % n;
    int temp[k];

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int original[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << original[i] << " ";
    }
    cout << endl;

    leftRotate(arr, n, k);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}