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

    LinkedList()
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

        if (this->head == nullptr || this->count == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            if (position > 0 && position < count)
            {
                Node *ptr = this->head;
                for (int i = 0; i < position - 1; i++)
                {
                    ptr = ptr->next;
                }
                newNode->next = ptr->next;
                ptr->next = newNode;
            }
            else
            {
                cout << "Invaid Position..." << endl;
            }
        }
        this->count++;
    }

    void UpdateData(int position, int data)
    {
        if (head == nullptr || count == 0)
        {
            cout << "List Is Empty... " << endl;
            return;
        }
        if (position < 0 || position > count)
        {
            cout << "Position Is Invalid.." << endl;
            return;
        }
        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = data; 
        ptr = nullptr;
    }

    void DisplayData()
    {
        Node *ptr = head;
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl
             << endl;
    }
};