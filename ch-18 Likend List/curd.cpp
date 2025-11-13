#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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
};

int main()
{
    LinkedList L1;
}