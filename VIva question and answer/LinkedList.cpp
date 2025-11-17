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
    void InsertFromBeginig(int data)
    {
        Node *Newnode = new Node(data);
        Newnode->next = this->head;
        this->head = Newnode;
        this->count++;
    }
    void InsertFromEnding(int data)
    {
        Node *Newnode = new Node(data);

        if (this->head == nullptr || count == 0)
        {
            this->head = Newnode;
        }
        else
        {
            Node *ptr = this->head;

            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = Newnode;
        }

        this->count++;
    }
    void InsertAnyPosition(int data, int position)
    {
    }
    void DisplayNodes()
    {
        Node *ptr = this->head;

        cout << "Your Node Is Here : ";
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l1;
    int choice, data, position;

    do
    {
        cout << "Press (1) One For Insert Begining.." << endl;
        cout << "Press (2) Two For Insert Ending.." << endl;
        cout << "Press (3) Three For Insert Position Vise.." << endl;
        cout << "Press (4) Five For Display.." << endl;
        cout << "Press (0) Zero For Exit.." << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter Data for Insert Beginig : ";
            cin >> data;
            l1.InsertFromBeginig(data);
            break;
        case 2:
            cout << endl
                 << "Enter Data for Insert Ending : ";
            cin >> data;
            l1.InsertFromEnding(data);
            break;
        case 3:
            cout << endl
                 << "Enter Data for Insert any Position : ";
            cin >> data;
            l1.InsertAnyPosition(data, position);
            break;
        case 4:
            l1.DisplayNodes();
            break;
        case 0:
            cout << endl
                 << "You Are Exited !!!/.." << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice..!" << endl;
            break;
        }

    } while (choice != 0);
    return 0;
}