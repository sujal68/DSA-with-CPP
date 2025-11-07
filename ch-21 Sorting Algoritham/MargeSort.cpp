#include <iostream>
#include <vector>
using namespace std;

void marge(vector<int> &arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = start; i <= end; ++i)
    {
        arr[i] = temp[i - start];
    }
}

void margeSort(vector<int> &arr, int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;

        margeSort(arr, start, mid);
        margeSort(arr, mid + 1, end);
        marge(arr, start, mid, end);
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
    cout << "The elements in the array are: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }

    margeSort(arr, 0, n - 1);
    cout << endl
         << "The sorted elements in the array are : ";
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}