#include <iostream>
using namespace std;

class ArrayCurd
{
private:
    int arr[100];
    int size;

public:
    ArrayCurd()
    {
        cout << endl
             << "(For Array Curd) Enter Number of Index : ";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << "Enter Any Number of array [" << i << "] : ";
            cin >> arr[i];
        }
    }

    void insertArray(int position, int element)
    {
        if (position >= 0 && position <= size)
        {
            for (int i = size; i > position; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[position] = element;
            size++;
            cout << "Element inserted successfully." << endl;
        }
        else
        {
            cout << "Invalid position!" << endl;
        }
    }
    void PushArray(int element)
    {
        arr[size] = element;
        size++;
        cout << "Element pushed successfully." << endl;
    }
    void ArrayFetch()
    {
        cout << endl
             << "Array Elements: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void UpdateArray(int position, int element)
    {
        if (position >= 0 && position < size)
        {
            arr[position] = element;
            cout << "Element updated successfully." << endl;
        }
        else
        {
            cout << "Invalid position!" << endl;
        }
    }
    void DeleteArrayElem(int position)
    {
        if (position >= 0 && position < size)
        {
            for (int i = position; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            cout << "Element deleted successfully." << endl;
        }
        else
        {
            cout << "Invalid position!" << endl;
        }
    }
    void PopArray()
    {
        if (size > 0)
        {
            size--;
            cout << "Last element popped successfully." << endl;
        }
        else
        {
            cout << "Array is empty!" << endl;
        }
    }
    int linearSearch()
    {
        int searchElement;

        cout << endl;
        cout << "Enter any element : ";
        cin >> searchElement;

        int index = -1;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == searchElement)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            cout << endl
                 << "Element not found.." << endl;
        }
        else
        {
            cout << endl
                 << "Searching element index : " << index << endl;
        }

        return index;
    }
    int binarySearching(int a[], int start, int end, int target)
    {
        if (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (target < a[mid])
            {
                return binarySearching(a, start, mid - 1, target);
            }
            else if (target > a[mid])
            {
                return binarySearching(a, mid + 1, end, target);
            }
            else
            {
                return mid;
            }
        }

        return -1;
    }
    void binarySearch()
    {

        int target;
        cout << endl
             << "Enter search element : ";
        cin >> target;

        int index = binarySearching(arr, 0, size - 1, target);

        if (index == -1)
        {
            cout << endl
                 << "Element not found.." << endl;
        }
        else
        {
            cout << endl
                 << "Searching element index : " << index << endl;
        }
    }
    void sortArray()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Array sorted successfully." << endl;
    }
};
