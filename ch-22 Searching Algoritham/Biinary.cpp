#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
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

    int target;
    cout << "Enter Target Element to Search : " << endl;
    cin >> target;
    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}