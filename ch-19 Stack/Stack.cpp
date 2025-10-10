#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size, top, length;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->length = 0;
    }
    ~Stack()
    {
        cout << endl;
        delete[] arr;
        cout << endl;
    }

    void Push(int Element)
    {
        if (top == size - 1)
        {
            cout << "Stack Is Overflow..." << endl;
        }
        else
        {
            top++;
            this->arr[this->top] = Element;
            this->length++;
        }
    }

    void Pop()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Stack Is UnderFlow..." << endl;
        }
        else
        {
            top--;
            length--;
        }
        cout << endl;
    }

    void Peek()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Stack Is Empty.." << endl;
        }
        else
        {
            cout << "Top Element Is : " << this->arr[this->top];
        }
        cout << endl;
    }

    void Display()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack Is Empty.." << endl;
        }
        else
        {
            // cout << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            // cout << endl;
        }
    }

    void IsEmpty()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Turu.." << endl;
        }
        else
        {
            cout << endl
                 << "False.." << endl;
        }
        cout << endl;
    }

    void IsFull()
    {
        cout << endl;
        if (top == size - 1)
        {
            cout << endl
                 << "Turu.." << endl;
        }
        else
        {
            cout << endl
                 << "False.." << endl;
        }
        cout << endl;
    }

    void Size()
    {
        cout << endl;
        cout << endl
             << "Lenght : " << length << endl;
    }
};
