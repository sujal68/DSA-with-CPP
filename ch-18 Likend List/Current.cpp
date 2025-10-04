#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *HEAD = new Node();

    HEAD->data = 25;
    HEAD->next = nullptr;

    Node *Current = new Node();

    Current->data = 98;
    Current->next = nullptr;
    HEAD->next = Current;

    Current = new Node();
    Current->data = 67;
    Current->next = nullptr;
    HEAD->next->next = Current;

    Current = new Node();
    Current->data = 100;
    Current->next = nullptr;
    HEAD->next->next->next = Current;

    Node *ptr = HEAD;
    while (ptr != nullptr)
    {
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}