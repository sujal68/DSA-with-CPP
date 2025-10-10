#include "StackProject.cpp"
int main()
{
    int size, choice, Element;
    Stack s1(size);
    cout << "Enter Size Of Element : ";
    cin >> size;

    do
    {
        cout << "Press 1 For Push Element..." << endl;
        cout << "Press 2 For Pop Element..." << endl;
        cout << "Press 3 For Display Element..." << endl;
        cout << "Press 4 For IsEmpty..." << endl;
        cout << "Press 5 For IsFull..." << endl;
        cout << "Press 0 For Exit..." << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Enter Any Element : ";
            cin >> Element;
            s1.Push(Element);
            cout << endl;
            break;

        case 2:
            s1.Pop();
            break;

        case 3:
            s1.Display();
            break;

        case 4:
            s1.IsEmpty();
            break;

        case 5:
            s1.IsFull();
            break;

        case 0:
            cout << endl
                 << "Exited Success Fully Done ✅..." << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice...." << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}