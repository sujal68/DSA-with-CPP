#include "SortingAndSearching.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    SortingAndSearchingAlgorithm sorter;
    int n, choice, target, index;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << endl
         << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element of a[" << i << "] : ";
        cin >> arr[i];
    }

    do
    {
        cout << endl;
        cout << "Press 1 for Selection Sort" << endl;
        cout << "Press 2 for Merge Sort" << endl;
        cout << "Press 3 for Binary Search (after Merge Sort)" << endl;
        cout << "Press 4 for Display Array" << endl;
        cout << "Press 5 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sorter.selectionsort(arr);
            cout << "Array selection Sort : ";
            sorter.display(arr);
            break;

        case 2:
            sorter.mergeSort(arr, 0, n - 1);
            cout << "Array Merge Sort : ";
            sorter.display(arr);
            break;

        case 3:

            cout << "Searching and sorting." << endl
                 << endl;
            sorter.mergeSort(arr, 0, n - 1);
            // int target;
            cout << "Enter element to search: ";
            cin >> target;
            index = sorter.binarySearch(arr, 0, n - 1, target);
            if (index == -1)
                cout << "Element not found....";
            else
                cout << "Element is Here : " << index << endl;
            break;

        case 4:
            cout << "Array elements are: ";
            sorter.display(arr);
            break;

        case 5:
            cout << "Exiting the sorting and searching program....." << endl;
            break;
        }

    } while (choice != 5);

    return 0;
}
