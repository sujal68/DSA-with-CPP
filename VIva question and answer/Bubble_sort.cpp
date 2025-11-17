#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    int pass = 0;
    for (int i = 0; i < size - 1 - pass; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass++;
    }
}
int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;
    int arr[size];

    cout << "Array Input..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array element [" << i << "] : ";
        cin >> arr[i];
    }

    BubbleSort(arr, size);
    cout << "Sorted Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}