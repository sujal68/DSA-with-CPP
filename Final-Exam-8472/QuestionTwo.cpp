#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    // linked list
    LinkedList()
    {
        this->head = nullptr;
        this->count = 0;
    }

    // add element
    void AddElement(int data)
    {
        Node *Newnode = new Node(data);
        Newnode->next = this->head;
        this->head = Newnode;
        this->count++;
        cout << endl
             << "Your Element Are Added from Starting..." << endl;
    }

    // add element from ending
    void AddElementFromEnding(int data)
    {
        Node *Newnode = new Node(data);

        if (this->head == nullptr)
        {
            this->head = Newnode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = Newnode;
        }
    }

    // add element for any position
    void AddElementAnyPosition(int data, int position)
    {
        Node *Newnode = new Node(data);

        if (this->head == nullptr || count == 0)
        {
            Newnode->next = this->head;
            this->head = Newnode;
        }
        else if (position >= this->count)
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = Newnode;
        }
        else
        {
            Node *ptr = this->head;

            for (int i = 0; i < position - 1; i++)
            {
                ptr = ptr->next;
            }
            Newnode->next = ptr->next;
            ptr->next = Newnode;
        }
        cout << endl
             << "Your Element Are Added..." << endl;
        count++;
    }

    // update element
    void UpdateElement(int data, int position)
    {
        if (this->head == nullptr || position < 0 || position >= this->count)
        {
            cout << "Your Position Note Found.. Try Again.." << endl;
        }
        else
        {
            Node *Ptr = this->head;
            for (int i = 0; i < position; i++)
            {
                Ptr = Ptr->next;
            }
            Ptr->data = data;
        }
        this->count++;
    }

    // display element
    void DisplayData()
    {
        if (this->head == nullptr)
        {
            cout << "List is Empty." << endl;
            return;
        }

        Node *ptr = this->head;
        cout << "Linked List Data: ";
        while (ptr != nullptr)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "nullptr" << endl;
    }
};

class ArraySerach
{
public:
    // searching
    int Searching(int a[], int size)
    {
        int search_element;
        int index = -1;
        cout << "Enter a number to search : ";
        cin >> search_element;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == search_element)
            {
                index = i;
                break;
            }
        }

        if (index != -1)
        {
            cout << "Element found at index : " << index << endl;
        }
        else
        {
            cout << "Element not found in the array." << endl;
        }

        return 0;
    }

    // Quick Sort Devide
    int Devide(int arr[], int start, int end)
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

    // queick sorting
    void quickSort(int arr[], int start, int end)
    {
        if (start < end)
        {
            int pivot = Devide(arr, start, end);
            quickSort(arr, start, pivot - 1); // Left
            quickSort(arr, pivot + 1, end);   // right
        }
    }

    // selection sort
    void SelectionSort(int arr[], int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1]; // swaping
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Array sorted successfully." << endl;
    }
};