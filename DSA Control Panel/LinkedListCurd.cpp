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

class LinkedListCurd
{
public:
    Node *head;
    int count;

    LinkedListCurd()
    {
        this->head = nullptr;
        this->count = 0;
    }
    void AddBeginningData(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }
    void AddEndingData(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == nullptr)
        {
            this->head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }
    void AddPositionviseData(int data, int position)
    {
        Node *newNode = new Node(data);

        if (this->head == nullptr || this->count == 0 || position <= 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else if (position >= this->count)
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        else
        {
            Node *ptr = head;
            for (int i = 0; i < position - 1; i++)
            {
                ptr = ptr->next;
            }
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        this->count++;
    }
    void UpdateData(int position, int data)
    {
        if (this->head == nullptr || position < 0 || position >= this->count)
        {
            cout << "Invalid Position for Update." << endl;
            return;
        }

        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = data;
    }
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

    void searchLinkedList()
    {
        int search_element;
        cout << endl;
        cout << "Enter any element : ";
        cin >> search_element;

        int index = -1;
        int cnt = 0;

        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->data == search_element)
            {
                index = cnt;
                break;
            }

            temp = temp->next;
            cnt++;
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
    }
    void sortLinkedList()
    {
        if (head == NULL || head->next == NULL)
        {
            cout << "List is small to sort" << endl;
            return;
        }
        bool swapped;
        do
        {
            swapped = false;
            Node *temp = head;

            while (temp->next != NULL)
            {
                if (temp->data > temp->next->data)
                {
                    int t = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = t;

                    swapped = true;
                }
                temp = temp->next;
            }

        } while (swapped);

        cout << "Linked List Sorted Successfulllly...." << endl;
    }
};