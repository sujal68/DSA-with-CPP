#include <iostream>
using namespace std;

void rightRotate(int arr[], int n, int k)
{
    k = k % n;
    int temp[k];
    
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }
    
    for (int i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }
    
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
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

    rightRotate(arr, n, k);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}