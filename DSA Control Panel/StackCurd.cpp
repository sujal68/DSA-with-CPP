#include <iostream>
using namespace std;

class StackCurd
{
    int *arr;
    int size, top, length;

public:
    StackCurd(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->length = 0;
    }
    ~StackCurd()
    {
        cout << endl;
        delete[] arr;
        cout << endl;
    }
    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow! Cannot push " << element << endl;
            return;
        }
        arr[++top] = element;
        length++;
        cout << element << " pushed to stack." << endl;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow! Cannot pop from empty stack." << endl;
            return;
        }
        int poppedElement = arr[top--];
        length--;
        cout << poppedElement << " popped from stack." << endl;
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int getLength()
    {
        return length;
    }
    void searchStack()
    {
        int searchElement;
        cout << endl;
        cout << "Enter any element : ";
        cin >> searchElement;

        int index = -1;

        for (int i = 0; i <= top; i++)
        {
            if (arr[i] == searchElement)
            {
                index = i;
                break;
            }
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
    void sortStack()
    {
        for (int i = 0; i <= top; i++)
        {
            for (int j = 0; j < top - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Stack sorted in ascending order." << endl;
    }
};