#include "QuestionTwo.cpp"
#include <iostream>
using namespace std;

int main()
{
    LinkedList L1;
    ArraySerach A1;
    int choice, data, position;

    int size;
    cout << "Enter Size Of Array : ";
    cin >> size;
    int arr[size];

    cout << endl
         << "Array Input..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element Of [" << i << "] : ";
        cin >> arr[i];
    }

    cout << endl
         << "Array Elements are -->" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    do
    {
        cout << endl
             << endl
             << "...Welcome To Exam Menu..." << endl
             << endl;
        cout << "Press 1 For Insert Node From Starting." << endl;
        cout << "Press 2 For Insert Node From Ending." << endl;
        cout << "Press 3 For Insert Node From Any Position." << endl;
        cout << "Press 4 For Update." << endl;
        cout << "Press 5 For Linear Search From Array" << endl;
        cout << "Press 6 For Selection Sort From Array." << endl;
        cout << "Press 7 For Quick Sort From Array." << endl;
        cout << "Press 8 For Display." << endl;
        cout << "Press 0 For Exit." << endl
             << endl;

        cout << "Enter Your Choice! : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter Element Of Add From LinkedList : ";
            cin >> data;
            L1.AddElement(data);
            break;

        case 2:
            cout << endl
                 << "Enter Element Of Add From LinkedList : ";
            cin >> data;
            L1.AddElementFromEnding(data);
            break;

        case 3:
            cout << endl
                 << "Enter Element Of Add From LinkedList : ";
            cin >> data;
            cout << endl
                 << "Enter Position Of Add From LinkedList : ";
            cin >> position;
            L1.AddElementAnyPosition(data, position);
            break;

        case 4:
            cout << endl
                 << "Enter Position Of Add From LinkedList : ";
            cin >> position;
            cout << "Enter Element Of Add From LinkedList : ";
            cin >> data;
            L1.UpdateElement(data, position);
            break;

        case 5:
            A1.Searching(arr, size);
            cout << endl;
            break;

        case 6:
            A1.SelectionSort(arr, size);
            cout << endl
                 << "Selection Sorted Arrey is Here..." << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            break;

        case 7:
            A1.quickSort(arr, 0, size - 1);
            cout << endl
                 << "Quick Sorted Arrey is Here..." << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            break;

        case 8:
            cout << "Here Your Linked List Data.." << endl;
            L1.DisplayData();
            break;

        case 0:
            cout << endl
                 << "You Are Exited from Exam Menu..." << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice ! Please Try Again..." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}