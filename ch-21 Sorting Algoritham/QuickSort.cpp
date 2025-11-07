#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1); // Left
        quickSort(arr, pivot + 1, end);   // Right
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i)
    {
        int element;
        cout << "Enter element a[" << i << "]" << ": ";
        cin >> element;
        arr.push_back(element);
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}