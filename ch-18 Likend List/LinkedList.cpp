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

    Node *n2 = new Node();

    n2->data = 98;
    n2->next = nullptr;
    HEAD->next = n2;

    Node *n3 = new Node();

    n3->data = 100;
    n3->next = nullptr;
    n2->next = n3;

    Node *n4 = new Node();

    n4->data = 140;
    n4->next = nullptr;
    n3->next = n4;

    Node *n5 = new Node();

    n5->data = 180;
    n5->next = nullptr;
    n4->next = n5;

    cout << "Data : " << HEAD->data << ", Address : " << HEAD->next << endl;
    cout << "Data : " << n2->data << ", Address : " << n2->next << endl;
    cout << "Data : " << n3->data << ", Address : " << n3->next << endl;
    cout << "Data : " << n4->data << ", Address : " << n4->next << endl;
    cout << "Data : " << n5->data << ", Address : " << n5->next << endl;
    return 0;
}