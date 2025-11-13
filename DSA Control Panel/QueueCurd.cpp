#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    };
    ~Queue()
    {
        delete[] arr;
    };
    void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is overflow...." << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->count++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
        }
    }
    void dequeue()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is underflow...." << endl;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        else
        {
            this->front++;
            this->count--;
        }
    }
    void get_front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Front : " << this->arr[this->front] << endl;
        }
    }
    void get_rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Rear : " << this->arr[this->rear] << endl;
        }
    }
    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue Elements : ";
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }
    bool isEmpty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
            return true;
        }
        else
        {
            cout << endl
                 << "Queue is not empty..." << endl;
            return false;
        }
    }
    bool isFull()
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is full..." << endl;
            return true;
        }
        else
        {
            cout << endl
                 << "Queue is not full..." << endl;
            return false;
        }
    }
    int size()
    {
        return this->count;
    }
    void searchQueue()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        int searcElement;
        cout << endl
             << "Enter any element : ";
        cin >> searcElement;

        int index = -1;
        int cnt = front;

        while (cnt <= rear)
        {
            if (arr[cnt] == searcElement)
            {
                index = cnt;
                break;
            }
            cnt++;
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
    void sortQueue()
    {
        if (front == -1)
        {
            cout << "Queue is empty Cannot sortet." << endl;
            return;
        }

        for (int i = front; i <= rear - 1; i++)
        {
            for (int j = front; j <= rear - i + front - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "Queue sorted successfully." << endl;
    }
};