#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size, top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
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
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
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
};
