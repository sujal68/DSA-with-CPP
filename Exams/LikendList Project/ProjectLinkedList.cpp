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

    LinkedList()
    {
        this->head = nullptr;
    }

    void insertBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    bool Search(int key)
    {
        Node *ptr = head;
        int position = 0;

        while (ptr != nullptr)
        {
            if (ptr->data == key)
            {
                cout << "Element " << key << " found at position " << position << endl;
                return true;
            }
            ptr = ptr->next;
            position++;
        }

        cout << "Element " << key << " not found" << endl;
        return false;
    }

    void DeleteNode(int key)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted " << key << endl;
            return;
        }

        Node *ptr = head;
        Node *prev = nullptr;

        while (ptr != nullptr && ptr->data != key)
        {
            prev = ptr;
            ptr = ptr->next;
        }

        if (ptr == nullptr)
        {
            cout << "Element " << key << " not found" << endl;
            return;
        }

        prev->next = ptr->next;
        delete ptr;
        cout << "Deleted " << key << endl;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

    void display()
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
