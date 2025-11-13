#include "Queue.cpp"
int main()
{
    int size;
 
    cout << "Enter number of elements : ";
    cin >> size;

    Queue queue(size);

    int choice;
    int element;

    do
    {

        cout << endl;
        cout << "Press 1 for enqueue..." << endl;
        cout << "Press 2 for dequeue..." << endl;
        cout << "Press 3 for front..." << endl;
        cout << "Press 4 for rear..." << endl;
        cout << "Press 5 for display..." << endl;
        cout << "Press 6 for isEmpty..." << endl;
        cout << "Press 7 for isFull..." << endl;
        cout << "Press 8 for Size..." << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter any element : ";
            cin >> element;
            queue.enqueue(element);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.get_front();
            break;
        case 4:
            queue.get_rear();
            break;
        case 5:
            queue.display();
            break;
        case 6:
            queue.isEmpty();
            break;
        case 7:
            queue.isFull();
            break;
        case 8:
            cout << endl
                 << "Queue Length : " << queue.size() << endl;
            break;
        case 0:
            cout << endl
                 << "Exit..." << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice..." << endl;
            break;
        }

    } while (choice != 0);
}