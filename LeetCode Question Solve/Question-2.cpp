#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;

    Node(int value)
    {
        data = value;
        Next = NULL;
    }
};

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->Next;
    }
    cout << endl;
}

Node *addTwoNumbers(Node *l1, Node *l2)
{

    Node *p1 = l1;
    Node *p2 = l2;
    int carry = 0;

    Node *resultHead = NULL;
    Node *resultTail = NULL;

    while (p1 != NULL || p2 != NULL || carry != 0)
    {

        int val1 = 0;
        int val2 = 0;

        if (p1 != NULL)
        {
            val1 = p1->data;
        }

        if (p2 != NULL)
        {
            val2 = p2->data;
        }

        int sum = val1 + val2 + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum = sum - 10;
        }
        else
        {
            carry = 0;
        }

        Node *newNode = new Node(sum);

        if (resultHead == NULL)
        {
            resultHead = newNode;
            resultTail = newNode;
        }
        else
        {
            resultTail->Next = newNode;
            resultTail = newNode;
        }

        if (p1 != NULL)
        {
            p1 = p1->Next;
        }

        if (p2 != NULL)
        {
            p2 = p2->Next;
        }
    }

    return resultHead;
}

int main()
{

    Node *l1 = new Node(2);
    l1->Next = new Node(4);
    l1->Next->Next = new Node(3);

    Node *l2 = new Node(5);
    l2->Next = new Node(6);
    l2->Next->Next = new Node(4);

    Node *result = addTwoNumbers(l1, l2);

    cout << "Result : ";
    printList(result);
}
