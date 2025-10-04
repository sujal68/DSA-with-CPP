#include "ProjectLinkedList.cpp"
using namespace std;

int main()
{
    LinkedList list;
    int choice, value;

    do
    {
        cout << "Press 1 Insert for Beginning.." << endl;
        cout << "Press 2 Search Element.." << endl;
        cout << "Press 3 Delete Node..." << endl;
        cout << "Press 4 Reverse List.." << endl;
        cout << "Press 5 Display List..." << endl;
        cout << "Press 0 Exit..." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at beginning: ";
            cin >> value;
            list.insertBeginning(value);
            break;

        case 2:
            cout << "Enter value to search: ";
            cin >> value;
            list.Search(value);
            break;

        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            list.DeleteNode(value);
            break;

        case 4:
            list.reverse();
            break;

        case 5:
            list.display();
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}